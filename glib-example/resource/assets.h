#ifndef __ASSETS_H__
#define __ASSETS_H__

#include "stdint.h"

struct ass_info {
    uint32_t address;	// offset to asset storage on flash
    uint32_t length;	// size in bytes
    uint16_t width;
    uint16_t height;
};

typedef enum {
    ASS_NONE,
    ASS_CURSOR,
    ASS_INT_PI,
} ass_bmp_name;

uint8_t ass_get(struct ass_info *const return_ainfo, const ass_bmp_name asset);

#endif