#include "assets.h"
#include "user_interface.h"

uint8_t ICACHE_FLASH_ATTR asset_get(struct asset_info *const return_ainfo, const asset_bmp_name asset) {
    switch (asset) {
    case ASSET_CURSOR:
        *return_ainfo = (struct asset_info) {
            .address = 0x00000000,
            .length = 2048,
            .width = 64,
            .height = 64
        }; break;
    case ASSET_INT_PI:
        *return_ainfo = (struct asset_info) {
            .address = 0x00000800,
            .length = 5248,
            .width = 256,
            .height = 41
        }; break;
    default: return 1;
    }
    return 0;
}

