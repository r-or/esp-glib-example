#ifndef __ASSETS_H__
#define __ASSETS_H__

#include "stdint.h"

struct asset_info {
    uint32_t address;	// offset to asset storage on flash
    uint32_t length;	// size in bytes
    uint16_t width;
    uint16_t height;
};

typedef enum {
    ASSET_NONE,
    ASSET_CURSOR,
    ASSET_INT_PI,
} asset_bmp_name;

uint8_t asset_get(struct asset_info *const return_ainfo, const asset_bmp_name asset);

#endif