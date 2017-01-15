#include "snake.h"
#include "osapi.h"
#include "mem.h"
#include "esp-glib.h"

#define SNAKE_DEBUG                     1

// 64x192 -> 32x96 (2x2) -> uint8: 4x12
#define SNAKE_FATNESS                   2
#define SNAKE_FIELD_PIX_X               192
#define SNAKE_FIELD_PIX_Y               64
#define SNAKE_FIELD_X                   (SNAKE_FIELD_PIX_X) / (SNAKE_FATNESS)
#define SNAKE_FIELD_Y                   (SNAKE_FIELD_PIX_Y) / (SNAKE_FATNESS)
#define SNAKE_FIELD_SIZE_INT8           (SNAKE_FIELD_X) / 8
#define SNAKE_START_SIZE                35
#define SNAKE_START_SPEED_MS            30
#define SNAKE_INPUT_POLL_INTERVAL_MS    5
#define SNAKE_INPUT_DEBOUNCE_CYCLES     5

static sn_direction current_dir = SN_NORTH;
static struct sn_limb *snakehead = NULL;
static struct sn_location current_food = {0, 0};
static uint32_t current_score;
static uint8_t current_speed;

void ICACHE_FLASH_ATTR
add_limb(const struct sn_limb *const newlimb) {
    struct sn_limb *dst = (struct sn_limb *)os_malloc(sizeof(struct sn_limb));
    memcpy(dst, newlimb, sizeof(struct sn_limb));

    struct sn_limb *snake = snakehead;
    while (1) {
        if (snake->next == NULL) {    // last element
            snake->next = dst;
            snake->next->dir = snake->dir;
            break;
        }
        snake = snake->next;
    }
}

void ICACHE_FLASH_ATTR
inc_locations() {
    struct sn_limb *snake = snakehead;
    struct sn_limb lastlimb;
    //os_printf("snake: @ ");
    while (snake->next != NULL) {
        lastlimb = *(snake->next);
        snake->next->location = snake->location;
        snake->next->growing = snake->growing;
        snake->next->dir = snake->dir;
        if (snake != snakehead) {
            snake->location = lastlimb.location;
            snake->growing = lastlimb.growing;
            snake->dir = lastlimb.dir;
        }
        //os_printf("(%d, %d); %d; %08x|", snake->location.x, snake->location.y, snake->growing, snake->next);
        snake = snake->next;
    }
    if (snake->growing)  // last limb wants to grow
        add_limb(&lastlimb);

    //os_printf("\nsnake: locations incremented\n");
}

uint8_t ICACHE_FLASH_ATTR
loc_available(struct sn_location *const loc) {
    struct sn_limb *snake = snakehead;
    //os_printf("snake: head @ %08x\n", snakehead);
    while (snake->next != NULL) {
        //os_printf("snake: checking limb (%d, %d)...\n", snake->location.x, snake->location.y);
        if (loc->x == snake->location.x && loc->y == snake->location.y)
            return 0;
        snake = snake->next;
    }
    return 1;
}

uint8_t ICACHE_FLASH_ATTR
advance_location(struct sn_location *const loc, const sn_direction dir) {
    struct sn_location loc_next = *loc;
    //os_printf("snake: current location: (%d, %d) => %d\n", loc_next.x, loc_next.y, dir);
    switch (dir) {
    case SN_NORTH:
        --loc_next.y; break;
    case SN_SOUTH:
        ++loc_next.y; break;
    case SN_WEST:
        --loc_next.x; break;
    case SN_EAST:
        ++loc_next.x; break;
    }

    if (loc_next.x < 0)
        loc_next.x += SNAKE_FIELD_X;
    else if (loc_next.x >= SNAKE_FIELD_X)
        loc_next.x -= SNAKE_FIELD_X;

    if (loc_next.y < 0)
        loc_next.y += SNAKE_FIELD_Y;
    else if (loc_next.y >= SNAKE_FIELD_Y)
        loc_next.y -= SNAKE_FIELD_Y;

    // test if field is available
    //os_printf("snake: advance location... -> (%d, %d)\n", loc_next.x, loc_next.y);
    if (!loc_available(&loc_next))
        return 0;
    *loc = loc_next;
    return 1;
}

void ICACHE_FLASH_ATTR
dispense_food() {
    struct sn_location food_location = {
        .x = os_random() % SNAKE_FIELD_X,
        .y = os_random() % SNAKE_FIELD_Y
    };
    while (!loc_available(&food_location)) {
        food_location.x = os_random() % SNAKE_FIELD_X;
        food_location.y = os_random() % SNAKE_FIELD_Y;
    }
    current_food = food_location;
    //os_printf("snake: food dispensed!\n");
}

void ICACHE_FLASH_ATTR
free_snake() {
    if (snakehead == NULL)
        return;
    struct sn_limb *nextlimb = snakehead->next;
    struct sn_limb *currlimb = snakehead;
    while (nextlimb != NULL) {
        nextlimb = currlimb->next;
        os_free(currlimb);
        currlimb = nextlimb;
    }
    snakehead = NULL;
}

uint8_t ICACHE_FLASH_ATTR
advance() {
    inc_locations();
    snakehead->dir = current_dir;
    if (!advance_location(&snakehead->location, snakehead->dir)) {
        //os_printf("snake: cannot advance!\n");
        return 0;   // failed
    }

    if (snakehead->location.x == current_food.x && snakehead->location.y == current_food.y) {
        snakehead->growing = 1;
        dispense_food();
        current_score += current_speed * 2;
    } else {
        snakehead->growing = 0;
    }

    //os_printf("snake: advanced!\n");
    return 1;
}

void ICACHE_FLASH_ATTR
snake_reset_game(void) {
    free_snake();
    current_score = 0;
    current_speed = 1;
    current_dir = SN_WEST;
    //os_printf("snake: game reset!\n");
}

static void (*end_game_cb)(void);

void ICACHE_FLASH_ATTR
end_game(void) {
    snake_reset_game();
    end_game_cb();
    //os_printf("snake: game ended!\n");
}

void ICACHE_FLASH_ATTR
update_field(void) {
    struct sn_limb *snake = snakehead;
    struct glib_window curr_rect;
    glib_clear_fb(GLIB_OS_ALL);

    // draw snake
    do {
        curr_rect.x_left = snake->location.x * SNAKE_FATNESS;
        curr_rect.x_right = snake->location.x * SNAKE_FATNESS + SNAKE_FATNESS - 1;
        curr_rect.y_top = snake->location.y * SNAKE_FATNESS;
        curr_rect.y_bottom = snake->location.y * SNAKE_FATNESS + SNAKE_FATNESS - 1;
        glib_draw_rect(&curr_rect, 0xFFFFFFFF, 1);
        snake = snake->next;
    } while (snake != NULL);

    // draw food
    curr_rect.x_left = current_food.x * SNAKE_FATNESS;
    curr_rect.x_right = current_food.x * SNAKE_FATNESS + SNAKE_FATNESS - 1;
    curr_rect.y_top = current_food.y * SNAKE_FATNESS;
    curr_rect.y_bottom = current_food.y * SNAKE_FATNESS + SNAKE_FATNESS - 1;
    glib_draw_rect(&curr_rect, 0xFFFFFFFF, 1);

    //os_printf("snake: field updated!");
}

static const struct glib_window score_textpos = {
    .x_left = SNAKE_FIELD_PIX_X,
    .x_right = GLIB_DISP_COL_UPPER,
    .y_top = GLIB_DISP_ROW_LOWER,
    .y_bottom = GLIB_DISP_ROW_UPPER
};

void ICACHE_FLASH_ATTR
update_score(void) {
    glib_set_textbox(&score_textpos);
    glib_clear_tb_txt_state();
    glib_set_font(FNT_HANKEN_LIGHT_13);
    glib_set_mode(GLIB_DM_TEXT_CLR);
    glib_print((uint8_t *)"Score:\n", 0, 0,
               (glib_txt_position)(GLIB_TP_TOPMOST),
               GLIB_DA_SWENDIAN, NULL, NULL);
    char buf[15];
    os_sprintf(buf, "%lu", current_score);
    glib_print((uint8_t *)buf, 0, 0, GLIB_TP_APPEND, GLIB_DA_SWENDIAN, NULL, NULL);

    //os_printf("snake: Score updated!\n");
}

void ICACHE_FLASH_ATTR
snake_turn_left(void) {
    if (snakehead == NULL)
        return;

    switch (snakehead->dir) {
    case SN_NORTH:
        current_dir = SN_WEST; break;
    case SN_WEST:
        current_dir = SN_SOUTH; break;
    case SN_EAST:
        current_dir = SN_NORTH; break;
    case SN_SOUTH:
        current_dir = SN_EAST; break;
    }
}

void ICACHE_FLASH_ATTR
snake_turn_right(void) {
    if (snakehead == NULL)
        return;

    switch (snakehead->dir) {
    case SN_NORTH:
        current_dir = SN_EAST; break;
    case SN_WEST:
        current_dir = SN_NORTH; break;
    case SN_EAST:
        current_dir = SN_SOUTH; break;
    case SN_SOUTH:
        current_dir = SN_WEST; break;
    }
}


static os_timer_t volatile input_timer;
static int8_t gpio4, gpio5;

static void ICACHE_FLASH_ATTR
poll_input(void *arg) {
    if (!GPIO_INPUT_GET(4)) {
        ++gpio4;
        if (gpio4 == SNAKE_INPUT_DEBOUNCE_CYCLES)
            snake_turn_left();
    } else {
        --gpio4;
    }
    if (gpio4 > SNAKE_INPUT_DEBOUNCE_CYCLES * 2)
        gpio4 = SNAKE_INPUT_DEBOUNCE_CYCLES * 2;
    else if (gpio4 < 0)
        gpio4 = 0;

    if (!GPIO_INPUT_GET(5)) {
        ++gpio5;
        if (gpio5 == SNAKE_INPUT_DEBOUNCE_CYCLES)
            snake_turn_right();
    } else {
        --gpio5;
    }
    if (gpio5 > SNAKE_INPUT_DEBOUNCE_CYCLES * 2)
        gpio5 = SNAKE_INPUT_DEBOUNCE_CYCLES * 2;
    else if (gpio5 < 0)
        gpio5 = 0;
}


static os_timer_t volatile game_loop_timer;

static void ICACHE_FLASH_ATTR
sn_loop(void *arg) {
    uint32_t benchtime = system_get_time();
    if (!advance()) {
        os_timer_disarm(&game_loop_timer);
        os_timer_disarm(&input_timer);
        end_game();
        return;
    }
    update_field();
    update_score();
    glib_fb2gram();
    //os_printf("snake: game loop (%luus)\n", system_get_time() - benchtime);
}

void ICACHE_FLASH_ATTR
snake_start_game(void (*end_game_callback)(void)) {
    end_game_cb = end_game_callback;
    snake_reset_game();

    // start position: somewhere center
    struct sn_location pos = {
        .x = (SNAKE_FIELD_X - SNAKE_START_SIZE) / 2,
        .y = SNAKE_FIELD_Y / 2
    };
    uint8_t i = 0;
    struct sn_limb curr_limb = {
        .location = pos,
        .growing = 0,
        .dir = current_dir,
        .next = NULL
    };
    snakehead = (struct sn_limb *)os_malloc(sizeof(struct sn_limb));
    memcpy(snakehead, &curr_limb, sizeof(struct sn_limb));
    for (; i < SNAKE_START_SIZE; ++i) {
        add_limb(&curr_limb);
        ++pos.x;
        curr_limb.location = pos;
    }

    // start food
    current_food = (struct sn_location) {
        .x = os_random() % SNAKE_FIELD_X,
        .y = os_random() % SNAKE_FIELD_Y
    };

    //Setup timer
    os_timer_disarm(&game_loop_timer);
    os_timer_setfn(&game_loop_timer, (os_timer_func_t *)&sn_loop, NULL);
    os_timer_arm(&game_loop_timer, SNAKE_START_SPEED_MS, 1);

    os_timer_disarm(&input_timer);
    os_timer_setfn(&input_timer, (os_timer_func_t *)&poll_input, NULL);
    os_timer_arm(&input_timer, SNAKE_INPUT_POLL_INTERVAL_MS, 1);

    //os_printf("snake: game started!\n");
}

void ICACHE_FLASH_ATTR
snake_init(void) {
    PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO4_U, FUNC_GPIO4);
    PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO5_U, FUNC_GPIO5);

    PIN_PULLUP_EN(PERIPHS_IO_MUX_GPIO4_U);
    PIN_PULLUP_EN(PERIPHS_IO_MUX_GPIO5_U);

    gpio_output_set(0, 0, 0, GPIO_ID_PIN(4));
    gpio_output_set(0, 0, 0, GPIO_ID_PIN(5));
}
