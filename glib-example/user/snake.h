#ifndef __SNAKE_H__
#define __SNAKE_H__

#include "stdint.h"


typedef enum {
    SN_NORTH,
    SN_SOUTH,
    SN_WEST,
    SN_EAST
} sn_direction;


struct sn_location {   // top left: x = 0, y = 0
    int8_t x;
    int8_t y;
};

struct sn_limb {
    struct sn_location location;
    uint8_t growing;
    sn_direction dir;
    struct sn_limb *next;
};

void
snake_start_game(void (*end_game_callback)(void));

void
snake_turn_left(void);

void
snake_turn_right(void);

void
snake_init(void);


#endif
