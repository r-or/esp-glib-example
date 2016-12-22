#ifndef __FONTS_H__
#define __FONTS_H__

#include "stdint.h"

// global values
#define FNT_MAX_CHAR_SIZE_INT8  	268	// bytes to store biggest char (2D)
#define FNT_MAX_CHAR_SIZE_INT32 	67
#define FNT_MAX_CHAR_WIDTH      	28	// pix
#define FNT_MAX_CHAR_HEIGHT     	25	// pix
#define FNT_MIN_CHAR_WIDTH      	3	// useful for worst case num of printable chars (min advance)
#define FNT_MAX_CHAR_ASCENT     	24	// max char height with respect to base line (for cursor placement)

struct fnt_info {
    uint32_t size;               	// size in bytes
    uint8_t pix_depth;           	// bits per pixel
    const char *name;
    uint8_t height;              	// height including line spacing
    uint8_t ascend;              	// usual ascent excluding accents
    uint16_t max_char_size_int8; 	// bytes to store biggest char (2D)
    uint16_t max_char_size_int32;
    uint16_t max_char_height;    	// pix
    uint16_t max_char_width;     	// pix
    uint16_t min_char_width;     	// useful for worst case num of printable chars (min advance)
    uint16_t max_char_ascent;    	// max char height with respect to base line (for cursor placement)
};

struct fnt_char_info {
    int8_t xoffset;              	// pixel offset to top left corner
    int8_t yoffset;
    uint8_t advance;
    uint16_t address;
    uint16_t length;             	// length in bytes
    uint8_t width;
    uint8_t height;
};

typedef enum {
    FNT_HANKEN_LIGHT_13,
    FNT_HANKEN_LIGHT_19,
} fnt_id;

/**
 * @brief fnt_get_char retrieve character information of ch
 */
uint8_t
fnt_get_char(struct fnt_char_info *const ch_info, const uint32_t ch, const fnt_id fnt);

/**
 * @brief fnt_get_kerning retrieve kerning information of ch2 with relation to ch1
 */
int8_t
fnt_get_kerning(const uint32_t ch1, const uint32_t ch2, const fnt_id fnt);

/**
 * @brief fnt_get_info retrieve general font information
 */
uint8_t
fnt_get_info(struct fnt_info *const finfo, const fnt_id fnt);

#endif