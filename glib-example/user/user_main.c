#include "user_interface.h"
#include "user_config.h"
#include "ets_sys.h"
#include "osapi.h"
#include "driver/uart.h"
#include "esp-glib.h"

#define HEAPTIMER_MS                  10000

uint32 ICACHE_FLASH_ATTR
user_rf_cal_sector_set(void) {
    enum flash_size_map size_map = system_get_flash_size_map();
    uint32 rf_cal_sec = 0;

    switch (size_map) {
    case FLASH_SIZE_4M_MAP_256_256:
        rf_cal_sec = 128 - 5;
        break;

    case FLASH_SIZE_8M_MAP_512_512:
        rf_cal_sec = 256 - 5;
        break;

    case FLASH_SIZE_16M_MAP_512_512:
    case FLASH_SIZE_16M_MAP_1024_1024:
        rf_cal_sec = 512 - 5;
        break;

    case FLASH_SIZE_32M_MAP_512_512:
    case FLASH_SIZE_32M_MAP_1024_1024:
        rf_cal_sec = 1024 - 5;
        break;
    default:
        rf_cal_sec = 0;
        break;
    }
    return rf_cal_sec;
}

void ICACHE_FLASH_ATTR
user_rf_pre_init(void) {
}

static void ICACHE_FLASH_ATTR
print_reset_info(void) {
    os_printf("RESET reason: ");
    switch (system_get_rst_info()->reason) {
        case REASON_DEFAULT_RST:
            os_printf("normal power on\n"); break;
        case REASON_WDT_RST:
            os_printf("WDT reset\n"); break;
        case REASON_SOFT_WDT_RST:
            os_printf("software WDT reset\n"); break;
        case REASON_EXCEPTION_RST:
            os_printf("exception reset\n"); break;
        case REASON_SOFT_RESTART:
            os_printf("software restart\n"); break;
        case REASON_DEEP_SLEEP_AWAKE:
            os_printf("deep-sleep wakeup\n"); break;
        case REASON_EXT_SYS_RST:
            os_printf("external reset\n"); break;
        default:
            os_printf("unknown\n");
    }
}

/* SOFTAP cfg */
static void ICACHE_FLASH_ATTR
user_set_softap_config(void) {
   struct softap_config config;

   wifi_softap_get_config(&config); // Get config first.

   os_memset(config.ssid, 0, 32);
   os_memset(config.password, 0, 64);
   os_memcpy(config.ssid, "ESP8266", 7);
   os_memcpy(config.password, "12345678", 8);
   config.channel = 3;
   config.authmode = AUTH_WPA_WPA2_PSK;
   config.ssid_len = 0;
   config.beacon_interval = 100;
   config.max_connection = 4;

   wifi_softap_set_config(&config);
}

/* STATION cfg */
#ifdef USER_DBG_STATION
void ICACHE_FLASH_ATTR user_set_station_config(void) {
    char ssid[32] = USER_DBG_SSID;
    char password[64] = USER_DBG_PWD;
    struct station_config stationConf;
    stationConf.bssid_set = 0; //need not check MAC address of AP
    os_memcpy(&stationConf.ssid, ssid, 32);
    os_memcpy(&stationConf.password, password, 64);
    wifi_station_set_config(&stationConf);
 }
#endif


/*
 * USER TASK
 */

static os_event_t user_procTaskQueue[user_procTaskQueueLen];
static uint8_t screen_count = 0;
static const uint16_t anim_acceleration = 1000;     // how quickly animations pick up speed
static const uint16_t anim_hold_frames = 100;       // time in frames for animation to actually start

static void ICACHE_FLASH_ATTR
a_few_screens() {
    glib_set_mode(GLIB_DM_FREE);
    switch (screen_count) {
    case 0:
        glib_set_font(FNT_HANKEN_LIGHT_19);
        glib_print((uint8_t *)"u+00a9 u+201cjust this guyu+201d\n"
                              "{@xkcd.com}", 0, 0,
                   (glib_txt_position)(GLIB_TP_CENTER_X | GLIB_TP_CENTER_Y | GLIB_TP_TOPMOST),
                   (glib_draw_args)(GLIB_DA_SWENDIAN), NULL, NULL);
        glib_fb2gram();
        glib_clear_fb_toss_anim(GLIB_AD_W, anim_hold_frames, anim_acceleration, &a_few_screens);
        glib_clear_tb_txt_state();
        break;
    case 1:
        glib_set_font(FNT_HANKEN_LIGHT_13);
        glib_print((uint8_t *)"/* TODO: webclient\n"
                              "to display different one \n"
                              "each hour ... */", 0, 0,
                   (glib_txt_position)(GLIB_TP_CENTER_X | GLIB_TP_CENTER_Y | GLIB_TP_TOPMOST),
                   (glib_draw_args)(GLIB_DA_SWENDIAN), NULL, NULL);
           glib_fb2gram();
           glib_clear_fb_toss_anim(GLIB_AD_N, anim_hold_frames, anim_acceleration, &a_few_screens);
           glib_clear_tb_txt_state();
        break;
    case 2:
        ;
        struct ass_info cass;
        if (!ass_get(&cass, ASS_INT_PI))
            glib_draw_bitmap(0, 11, cass.address, cass.height, cass.width,
                             (glib_draw_args)(GLIB_DA_SWENDIAN | GLIB_DA_INVERT));
        glib_fb2gram();
        glib_clear_fb(GLIB_OS_ALL);
        glib_clear_disp_fadeout_anim(0x00000000, 4 * anim_hold_frames, anim_acceleration, &a_few_screens);
        glib_clear_tb_txt_state();
        break;
    }
    system_soft_wdt_feed();
    ++screen_count;
}

static void ICACHE_FLASH_ATTR
start_user(os_event_t *e) {
    glib_set_mode(GLIB_DM_TEXT_CLR);
    glib_set_font(FNT_HANKEN_LIGHT_19);
    glib_print((uint8_t *)"u+201cHello Worldu+201d,\n", 0, 0,
               (glib_txt_position)(GLIB_TP_TOPMOST),
               (glib_draw_args)(GLIB_DA_SWENDIAN), NULL, NULL);
    glib_set_font(FNT_HANKEN_LIGHT_13);
    glib_print((uint8_t *)"said ESP quietly.", 0, 0, GLIB_TP_APPEND, GLIB_DA_SWENDIAN, NULL, NULL);
    glib_fb2gram();

    uint32_t bench = system_get_time();
    glib_translate_subpix(glib_get_full_region(), 15.3f, 0.0f);
    os_printf("subpix translation: %luus\n", system_get_time() - bench);
    os_delay_us(1000000);
    glib_fb2gram();

    //glib_clear_fb_toss_anim(GLIB_AD_S, anim_hold_frames, anim_acceleration, &a_few_screens);
    //glib_clear_tb_txt_state();
}


static os_timer_t volatile some_timer;
static os_timer_t volatile some_task;

static void ICACHE_FLASH_ATTR
dbg_heaptimer(void *arg) {
    os_printf("free heap: %lu\n", system_get_free_heap_size());
}


static void ICACHE_FLASH_ATTR
start_user_func(void *arg) {
    // delay to make sure wifi is ready
    os_timer_disarm(&some_task);
    //Start os task
    system_os_task(start_user, user_procTaskPrio, user_procTaskQueue, user_procTaskQueueLen);
    system_os_post(user_procTaskPrio, 0, 0);
}


void ICACHE_FLASH_ATTR
user_init(void) {
    uart_init(BIT_RATE_921600, BIT_RATE_921600);

    system_update_cpu_freq(SYS_CPU_160MHZ);

    os_printf("\nSDK version: %s\n", system_get_sdk_version());
    os_printf("CPU freq: %dMHz\n", system_get_cpu_freq());
    print_reset_info();


#ifndef USER_DBG_STATION
    wifi_set_opmode(SOFTAP_MODE);
    user_set_softap_config();
#endif
#ifdef USER_DBG_STATION
    wifi_set_opmode(STATION_MODE);
    user_set_station_config();
#endif

    glib_init();
    glib_set_brightness(GLIB_MAX_BRIGHTNESS);
    glib_set_font(FNT_HANKEN_LIGHT_13);

    //Disarm timer
    os_timer_disarm(&some_timer);
    os_timer_disarm(&some_task);

    //Setup timer
    os_timer_setfn(&some_timer, (os_timer_func_t *)dbg_heaptimer, NULL);
    os_timer_setfn(&some_task, (os_timer_func_t *)start_user_func, NULL);

    os_timer_arm(&some_timer, HEAPTIMER_MS, 1);
    os_timer_arm(&some_task, 500, 0);
}
