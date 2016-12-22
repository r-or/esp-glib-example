#include "fonts.h"
#include "user_interface.h"

uint8_t ICACHE_FLASH_ATTR 
fnt_get_info(struct fnt_info *const finfo, const fnt_id fnt) {
    switch(fnt) {
    case FNT_HANKEN_LIGHT_13:
        *finfo = (struct fnt_info) {
            .size = 9736,
            .pix_depth = 4,
            .name = "Hanken_Light_13",
            .height = 19,
            .ascend = 13,
            .max_char_size_int8 = 132,
            .max_char_size_int32 = 33,
            .max_char_height = 17,
            .max_char_width = 20,
            .min_char_width = 3,
            .max_char_ascent = 16,
        }; break;
    case FNT_HANKEN_LIGHT_19:
        *finfo = (struct fnt_info) {
            .size = 22004,
            .pix_depth = 4,
            .name = "Hanken_Light_19",
            .height = 28,
            .ascend = 19,
            .max_char_size_int8 = 268,
            .max_char_size_int32 = 67,
            .max_char_height = 25,
            .max_char_width = 28,
            .min_char_width = 3,
            .max_char_ascent = 24,
        }; break;
    default: return 1;
    } // switch(fnt)
    return 0;
}

uint8_t ICACHE_FLASH_ATTR
fnt_get_char(struct fnt_char_info *const ch_info, const uint32_t ch, const fnt_id fnt) {
    switch(fnt) {
    case FNT_HANKEN_LIGHT_13:
        switch(ch) {
        case ' ':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 0,
                .advance = 6,
                .width = 0,
                .height = 0,
                .address = 0x0000,
                .length = 0
            }; break;
        case '!':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 5,
                .width = 3,
                .height = 13,
                .address = 0x0000,
                .length = 20
            }; break;
        case '\"':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 5,
                .width = 3,
                .height = 3,
                .address = 0x0014,
                .length = 8
            }; break;
        case '#':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 14,
                .advance = 14,
                .width = 15,
                .height = 14,
                .address = 0x001c,
                .length = 108
            }; break;
        case '$':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 14,
                .advance = 9,
                .width = 7,
                .height = 16,
                .address = 0x0088,
                .length = 56
            }; break;
        case '%':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 11,
                .width = 9,
                .height = 13,
                .address = 0x00c0,
                .length = 60
            }; break;
        case '&':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 12,
                .width = 11,
                .height = 13,
                .address = 0x00fc,
                .length = 72
            }; break;
        case '\'':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 3,
                .width = 1,
                .height = 3,
                .address = 0x0144,
                .length = 4
            }; break;
        case '(':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 5,
                .width = 4,
                .height = 17,
                .address = 0x0148,
                .length = 36
            }; break;
        case ')':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 5,
                .width = 4,
                .height = 17,
                .address = 0x016c,
                .length = 36
            }; break;
        case '*':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 5,
                .width = 5,
                .height = 4,
                .address = 0x0190,
                .length = 12
            }; break;
        case '+':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 9,
                .width = 9,
                .height = 8,
                .address = 0x019c,
                .length = 36
            }; break;
        case ',':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 2,
                .advance = 3,
                .width = 2,
                .height = 4,
                .address = 0x01c0,
                .length = 4
            }; break;
        case '-':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 5,
                .advance = 8,
                .width = 8,
                .height = 1,
                .address = 0x01c4,
                .length = 4
            }; break;
        case '.':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 1,
                .advance = 3,
                .width = 1,
                .height = 1,
                .address = 0x01c8,
                .length = 4
            }; break;
        case '/':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 8,
                .width = 8,
                .height = 17,
                .address = 0x01cc,
                .length = 68
            }; break;
        case '0':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 9,
                .width = 7,
                .height = 13,
                .address = 0x0210,
                .length = 48
            }; break;
        case '1':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 7,
                .width = 7,
                .height = 13,
                .address = 0x0240,
                .length = 48
            }; break;
        case '2':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 9,
                .width = 8,
                .height = 13,
                .address = 0x0270,
                .length = 52
            }; break;
        case '3':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 9,
                .width = 7,
                .height = 13,
                .address = 0x02a4,
                .length = 48
            }; break;
        case '4':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 10,
                .width = 9,
                .height = 13,
                .address = 0x02d4,
                .length = 60
            }; break;
        case '5':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 9,
                .width = 8,
                .height = 13,
                .address = 0x0310,
                .length = 52
            }; break;
        case '6':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 9,
                .width = 7,
                .height = 13,
                .address = 0x0344,
                .length = 48
            }; break;
        case '7':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 9,
                .width = 9,
                .height = 13,
                .address = 0x0374,
                .length = 60
            }; break;
        case '8':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 9,
                .width = 7,
                .height = 13,
                .address = 0x03b0,
                .length = 48
            }; break;
        case '9':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 9,
                .width = 7,
                .height = 13,
                .address = 0x03e0,
                .length = 48
            }; break;
        case ':':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 3,
                .width = 1,
                .height = 8,
                .address = 0x0410,
                .length = 4
            }; break;
        case ';':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 3,
                .width = 2,
                .height = 10,
                .address = 0x0414,
                .length = 12
            }; break;
        case '<':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 9,
                .advance = 9,
                .width = 7,
                .height = 9,
                .address = 0x0420,
                .length = 32
            }; break;
        case '=':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 7,
                .advance = 11,
                .width = 11,
                .height = 5,
                .address = 0x0440,
                .length = 28
            }; break;
        case '>':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 9,
                .advance = 9,
                .width = 8,
                .height = 9,
                .address = 0x045c,
                .length = 36
            }; break;
        case '?':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 10,
                .width = 8,
                .height = 13,
                .address = 0x0480,
                .length = 52
            }; break;
        case '@':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 10,
                .width = 9,
                .height = 8,
                .address = 0x04b4,
                .length = 36
            }; break;
        case 'A':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 12,
                .width = 12,
                .height = 13,
                .address = 0x04d8,
                .length = 80
            }; break;
        case 'B':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 11,
                .width = 8,
                .height = 13,
                .address = 0x0528,
                .length = 52
            }; break;
        case 'C':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 14,
                .width = 12,
                .height = 13,
                .address = 0x055c,
                .length = 80
            }; break;
        case 'D':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 13,
                .width = 11,
                .height = 13,
                .address = 0x05ac,
                .length = 72
            }; break;
        case 'E':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 10,
                .width = 7,
                .height = 13,
                .address = 0x05f4,
                .length = 48
            }; break;
        case 'F':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 9,
                .width = 7,
                .height = 13,
                .address = 0x0624,
                .length = 48
            }; break;
        case 'G':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 14,
                .width = 12,
                .height = 13,
                .address = 0x0654,
                .length = 80
            }; break;
        case 'H':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 13,
                .width = 9,
                .height = 13,
                .address = 0x06a4,
                .length = 60
            }; break;
        case 'I':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 5,
                .width = 1,
                .height = 13,
                .address = 0x06e0,
                .length = 8
            }; break;
        case 'J':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 7,
                .width = 4,
                .height = 13,
                .address = 0x06e8,
                .length = 28
            }; break;
        case 'K':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 11,
                .width = 8,
                .height = 13,
                .address = 0x0704,
                .length = 52
            }; break;
        case 'L':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 8,
                .width = 6,
                .height = 13,
                .address = 0x0738,
                .length = 40
            }; break;
        case 'M':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 17,
                .width = 13,
                .height = 13,
                .address = 0x0760,
                .length = 88
            }; break;
        case 'N':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 13,
                .width = 9,
                .height = 13,
                .address = 0x07b8,
                .length = 60
            }; break;
        case 'O':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 15,
                .width = 13,
                .height = 13,
                .address = 0x07f4,
                .length = 88
            }; break;
        case 'P':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 10,
                .width = 7,
                .height = 13,
                .address = 0x084c,
                .length = 48
            }; break;
        case 'Q':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 15,
                .width = 14,
                .height = 13,
                .address = 0x087c,
                .length = 92
            }; break;
        case 'R':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 10,
                .width = 7,
                .height = 13,
                .address = 0x08d8,
                .length = 48
            }; break;
        case 'S':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 9,
                .width = 7,
                .height = 13,
                .address = 0x0908,
                .length = 48
            }; break;
        case 'T':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 9,
                .width = 9,
                .height = 13,
                .address = 0x0938,
                .length = 60
            }; break;
        case 'U':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 14,
                .width = 10,
                .height = 13,
                .address = 0x0974,
                .length = 68
            }; break;
        case 'V':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 11,
                .width = 12,
                .height = 13,
                .address = 0x09b8,
                .length = 80
            }; break;
        case 'W':
            *ch_info = (struct fnt_char_info) {
                .xoffset = -1,
                .yoffset = 13,
                .advance = 18,
                .width = 20,
                .height = 13,
                .address = 0x0a08,
                .length = 132
            }; break;
        case 'X':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 12,
                .width = 12,
                .height = 13,
                .address = 0x0a8c,
                .length = 80
            }; break;
        case 'Y':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 9,
                .width = 9,
                .height = 13,
                .address = 0x0adc,
                .length = 60
            }; break;
        case 'Z':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 9,
                .width = 9,
                .height = 13,
                .address = 0x0b18,
                .length = 60
            }; break;
        case '[':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 6,
                .width = 5,
                .height = 17,
                .address = 0x0b54,
                .length = 44
            }; break;
        case '\\':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 8,
                .width = 8,
                .height = 17,
                .address = 0x0b80,
                .length = 68
            }; break;
        case ']':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 6,
                .width = 5,
                .height = 17,
                .address = 0x0bc4,
                .length = 44
            }; break;
        case '^':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 9,
                .width = 9,
                .height = 7,
                .address = 0x0bf0,
                .length = 32
            }; break;
        case '_':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 1,
                .advance = 8,
                .width = 8,
                .height = 1,
                .address = 0x0c10,
                .length = 4
            }; break;
        case '`':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 4,
                .width = 4,
                .height = 3,
                .address = 0x0c14,
                .length = 8
            }; break;
        case 'a':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 11,
                .width = 8,
                .height = 8,
                .address = 0x0c1c,
                .length = 32
            }; break;
        case 'b':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 11,
                .width = 8,
                .height = 13,
                .address = 0x0c3c,
                .length = 52
            }; break;
        case 'c':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 9,
                .width = 8,
                .height = 8,
                .address = 0x0c70,
                .length = 32
            }; break;
        case 'd':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 11,
                .width = 8,
                .height = 13,
                .address = 0x0c90,
                .length = 52
            }; break;
        case 'e':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 10,
                .width = 8,
                .height = 8,
                .address = 0x0cc4,
                .length = 32
            }; break;
        case 'f':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 7,
                .width = 6,
                .height = 13,
                .address = 0x0ce4,
                .length = 40
            }; break;
        case 'g':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 11,
                .width = 8,
                .height = 12,
                .address = 0x0d0c,
                .length = 48
            }; break;
        case 'h':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 10,
                .width = 7,
                .height = 13,
                .address = 0x0d3c,
                .length = 48
            }; break;
        case 'i':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 11,
                .advance = 5,
                .width = 1,
                .height = 11,
                .address = 0x0d6c,
                .length = 8
            }; break;
        case 'j':
            *ch_info = (struct fnt_char_info) {
                .xoffset = -2,
                .yoffset = 10,
                .advance = 4,
                .width = 4,
                .height = 14,
                .address = 0x0d74,
                .length = 28
            }; break;
        case 'k':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 8,
                .width = 6,
                .height = 13,
                .address = 0x0d90,
                .length = 40
            }; break;
        case 'l':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 5,
                .width = 1,
                .height = 13,
                .address = 0x0db8,
                .length = 8
            }; break;
        case 'm':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 8,
                .advance = 14,
                .width = 11,
                .height = 8,
                .address = 0x0dc0,
                .length = 44
            }; break;
        case 'n':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 8,
                .advance = 9,
                .width = 6,
                .height = 8,
                .address = 0x0dec,
                .length = 24
            }; break;
        case 'o':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 10,
                .width = 8,
                .height = 8,
                .address = 0x0e04,
                .length = 32
            }; break;
        case 'p':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 8,
                .advance = 11,
                .width = 8,
                .height = 12,
                .address = 0x0e24,
                .length = 48
            }; break;
        case 'q':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 11,
                .width = 8,
                .height = 12,
                .address = 0x0e54,
                .length = 48
            }; break;
        case 'r':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 8,
                .advance = 7,
                .width = 5,
                .height = 8,
                .address = 0x0e84,
                .length = 20
            }; break;
        case 's':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 7,
                .width = 5,
                .height = 8,
                .address = 0x0e98,
                .length = 20
            }; break;
        case 't':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 11,
                .advance = 7,
                .width = 7,
                .height = 11,
                .address = 0x0eac,
                .length = 40
            }; break;
        case 'u':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 8,
                .width = 6,
                .height = 8,
                .address = 0x0ed4,
                .length = 24
            }; break;
        case 'v':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 8,
                .width = 8,
                .height = 8,
                .address = 0x0eec,
                .length = 32
            }; break;
        case 'w':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 14,
                .width = 14,
                .height = 8,
                .address = 0x0f0c,
                .length = 56
            }; break;
        case 'x':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 8,
                .width = 8,
                .height = 8,
                .address = 0x0f44,
                .length = 32
            }; break;
        case 'y':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 8,
                .width = 8,
                .height = 12,
                .address = 0x0f64,
                .length = 48
            }; break;
        case 'z':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 8,
                .width = 8,
                .height = 8,
                .address = 0x0f94,
                .length = 32
            }; break;
        case '{':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 7,
                .width = 5,
                .height = 17,
                .address = 0x0fb4,
                .length = 44
            }; break;
        case '|':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 5,
                .width = 1,
                .height = 17,
                .address = 0x0fe0,
                .length = 12
            }; break;
        case '}':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 6,
                .width = 5,
                .height = 17,
                .address = 0x0fec,
                .length = 44
            }; break;
        case '~':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 9,
                .width = 6,
                .height = 2,
                .address = 0x1018,
                .length = 8
            }; break;
        case 0xA1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 5,
                .width = 3,
                .height = 13,
                .address = 0x1020,
                .length = 20
            }; break;
        case 0xA2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 10,
                .advance = 9,
                .width = 8,
                .height = 11,
                .address = 0x1034,
                .length = 44
            }; break;
        case 0xA3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 11,
                .width = 9,
                .height = 13,
                .address = 0x1060,
                .length = 60
            }; break;
        case 0xA5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 9,
                .width = 10,
                .height = 13,
                .address = 0x109c,
                .length = 68
            }; break;
        case 0xA6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 5,
                .width = 1,
                .height = 17,
                .address = 0x10e0,
                .length = 12
            }; break;
        case 0xA8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 11,
                .advance = 6,
                .width = 4,
                .height = 1,
                .address = 0x10ec,
                .length = 4
            }; break;
        case 0xA9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 7,
                .address = 0x10f0,
                .length = 28
            }; break;
        case 0xAB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 9,
                .advance = 12,
                .width = 12,
                .height = 9,
                .address = 0x110c,
                .length = 56
            }; break;
        case 0xAC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 13,
                .width = 11,
                .height = 5,
                .address = 0x1144,
                .length = 28
            }; break;
        case 0xAE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 7,
                .address = 0x1160,
                .length = 28
            }; break;
        case 0xB0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 6,
                .width = 4,
                .height = 3,
                .address = 0x117c,
                .length = 8
            }; break;
        case 0xB1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 10,
                .advance = 11,
                .width = 10,
                .height = 10,
                .address = 0x1184,
                .length = 52
            }; break;
        case 0xB4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 4,
                .width = 4,
                .height = 3,
                .address = 0x11b8,
                .length = 8
            }; break;
        case 0xB5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 8,
                .advance = 10,
                .width = 6,
                .height = 12,
                .address = 0x11c0,
                .length = 36
            }; break;
        case 0xB6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 9,
                .width = 7,
                .height = 13,
                .address = 0x11e4,
                .length = 48
            }; break;
        case 0xB7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 7,
                .advance = 3,
                .width = 3,
                .height = 2,
                .address = 0x1214,
                .length = 4
            }; break;
        case 0xB8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 7,
                .yoffset = 0,
                .advance = 19,
                .width = 3,
                .height = 3,
                .address = 0x1218,
                .length = 8
            }; break;
        case 0xBB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 9,
                .advance = 12,
                .width = 12,
                .height = 9,
                .address = 0x1220,
                .length = 56
            }; break;
        case 0xBF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 10,
                .width = 8,
                .height = 13,
                .address = 0x1258,
                .length = 52
            }; break;
        case 0xC0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 16,
                .advance = 12,
                .width = 13,
                .height = 16,
                .address = 0x128c,
                .length = 104
            }; break;
        case 0xC1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 16,
                .advance = 12,
                .width = 13,
                .height = 16,
                .address = 0x12f4,
                .length = 104
            }; break;
        case 0xC2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 16,
                .advance = 12,
                .width = 13,
                .height = 16,
                .address = 0x135c,
                .length = 104
            }; break;
        case 0xC3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 15,
                .advance = 12,
                .width = 13,
                .height = 15,
                .address = 0x13c4,
                .length = 100
            }; break;
        case 0xC4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 15,
                .advance = 12,
                .width = 12,
                .height = 15,
                .address = 0x1428,
                .length = 92
            }; break;
        case 0xC5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 15,
                .advance = 13,
                .width = 12,
                .height = 15,
                .address = 0x1484,
                .length = 92
            }; break;
        case 0xC6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 19,
                .width = 18,
                .height = 13,
                .address = 0x14e0,
                .length = 120
            }; break;
        case 0xC7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 14,
                .width = 12,
                .height = 16,
                .address = 0x1558,
                .length = 96
            }; break;
        case 0xC8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 16,
                .advance = 9,
                .width = 7,
                .height = 16,
                .address = 0x15b8,
                .length = 56
            }; break;
        case 0xC9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 16,
                .advance = 9,
                .width = 7,
                .height = 16,
                .address = 0x15f0,
                .length = 56
            }; break;
        case 0xCA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 16,
                .advance = 9,
                .width = 7,
                .height = 16,
                .address = 0x1628,
                .length = 56
            }; break;
        case 0xCB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 15,
                .advance = 10,
                .width = 7,
                .height = 15,
                .address = 0x1660,
                .length = 56
            }; break;
        case 0xCC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 16,
                .advance = 4,
                .width = 3,
                .height = 16,
                .address = 0x1698,
                .length = 24
            }; break;
        case 0xCD:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 16,
                .advance = 4,
                .width = 4,
                .height = 16,
                .address = 0x16b0,
                .length = 32
            }; break;
        case 0xCE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 16,
                .advance = 4,
                .width = 5,
                .height = 16,
                .address = 0x16d0,
                .length = 40
            }; break;
        case 0xCF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 15,
                .advance = 4,
                .width = 4,
                .height = 15,
                .address = 0x16f8,
                .length = 32
            }; break;
        case 0xD0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 13,
                .width = 12,
                .height = 13,
                .address = 0x1718,
                .length = 80
            }; break;
        case 0xD1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 15,
                .advance = 12,
                .width = 9,
                .height = 15,
                .address = 0x1768,
                .length = 68
            }; break;
        case 0xD2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 16,
                .advance = 15,
                .width = 13,
                .height = 16,
                .address = 0x17ac,
                .length = 104
            }; break;
        case 0xD3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 16,
                .advance = 15,
                .width = 13,
                .height = 16,
                .address = 0x1814,
                .length = 104
            }; break;
        case 0xD4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 16,
                .advance = 15,
                .width = 13,
                .height = 16,
                .address = 0x187c,
                .length = 104
            }; break;
        case 0xD5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 15,
                .advance = 15,
                .width = 13,
                .height = 15,
                .address = 0x18e4,
                .length = 100
            }; break;
        case 0xD6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 15,
                .advance = 16,
                .width = 13,
                .height = 15,
                .address = 0x1948,
                .length = 100
            }; break;
        case 0xD7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 9,
                .width = 9,
                .height = 8,
                .address = 0x19ac,
                .length = 36
            }; break;
        case 0xD8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 15,
                .advance = 15,
                .width = 13,
                .height = 17,
                .address = 0x19d0,
                .length = 112
            }; break;
        case 0xD9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 16,
                .advance = 13,
                .width = 10,
                .height = 16,
                .address = 0x1a40,
                .length = 80
            }; break;
        case 0xDA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 16,
                .advance = 13,
                .width = 10,
                .height = 16,
                .address = 0x1a90,
                .length = 80
            }; break;
        case 0xDB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 16,
                .advance = 13,
                .width = 10,
                .height = 16,
                .address = 0x1ae0,
                .length = 80
            }; break;
        case 0xDC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 15,
                .advance = 13,
                .width = 10,
                .height = 15,
                .address = 0x1b30,
                .length = 76
            }; break;
        case 0xDD:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 16,
                .advance = 9,
                .width = 9,
                .height = 16,
                .address = 0x1b7c,
                .length = 72
            }; break;
        case 0xDE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 10,
                .width = 7,
                .height = 13,
                .address = 0x1bc4,
                .length = 48
            }; break;
        case 0xDF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 10,
                .width = 7,
                .height = 13,
                .address = 0x1bf4,
                .length = 48
            }; break;
        case 0xE0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1c24,
                .length = 48
            }; break;
        case 0xE1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1c54,
                .length = 48
            }; break;
        case 0xE2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1c84,
                .length = 48
            }; break;
        case 0xE3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 11,
                .width = 8,
                .height = 12,
                .address = 0x1cb4,
                .length = 48
            }; break;
        case 0xE4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 11,
                .advance = 10,
                .width = 8,
                .height = 11,
                .address = 0x1ce4,
                .length = 44
            }; break;
        case 0xE5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1d10,
                .length = 48
            }; break;
        case 0xE6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 16,
                .width = 16,
                .height = 8,
                .address = 0x1d40,
                .length = 64
            }; break;
        case 0xE7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 9,
                .width = 8,
                .height = 11,
                .address = 0x1d80,
                .length = 44
            }; break;
        case 0xE8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1dac,
                .length = 48
            }; break;
        case 0xE9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1ddc,
                .length = 48
            }; break;
        case 0xEA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1e0c,
                .length = 48
            }; break;
        case 0xEB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 11,
                .advance = 10,
                .width = 8,
                .height = 11,
                .address = 0x1e3c,
                .length = 44
            }; break;
        case 0xEC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 12,
                .advance = 5,
                .width = 4,
                .height = 12,
                .address = 0x1e68,
                .length = 24
            }; break;
        case 0xED:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 4,
                .width = 4,
                .height = 12,
                .address = 0x1e80,
                .length = 24
            }; break;
        case 0xEE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 12,
                .advance = 4,
                .width = 5,
                .height = 12,
                .address = 0x1e98,
                .length = 32
            }; break;
        case 0xEF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 11,
                .advance = 5,
                .width = 4,
                .height = 11,
                .address = 0x1eb8,
                .length = 24
            }; break;
        case 0xF0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 11,
                .width = 10,
                .height = 13,
                .address = 0x1ed0,
                .length = 68
            }; break;
        case 0xF1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 9,
                .width = 6,
                .height = 12,
                .address = 0x1f14,
                .length = 36
            }; break;
        case 0xF2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1f38,
                .length = 48
            }; break;
        case 0xF3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1f68,
                .length = 48
            }; break;
        case 0xF4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1f98,
                .length = 48
            }; break;
        case 0xF5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x1fc8,
                .length = 48
            }; break;
        case 0xF6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 11,
                .advance = 10,
                .width = 8,
                .height = 11,
                .address = 0x1ff8,
                .length = 44
            }; break;
        case 0xF7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 8,
                .advance = 11,
                .width = 11,
                .height = 8,
                .address = 0x2024,
                .length = 44
            }; break;
        case 0xF8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 10,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x2050,
                .length = 48
            }; break;
        case 0xF9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 9,
                .width = 6,
                .height = 12,
                .address = 0x2080,
                .length = 36
            }; break;
        case 0xFA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 9,
                .width = 6,
                .height = 12,
                .address = 0x20a4,
                .length = 36
            }; break;
        case 0xFB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 9,
                .width = 6,
                .height = 12,
                .address = 0x20c8,
                .length = 36
            }; break;
        case 0xFC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 11,
                .advance = 9,
                .width = 6,
                .height = 11,
                .address = 0x20ec,
                .length = 36
            }; break;
        case 0xFD:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 11,
                .advance = 8,
                .width = 8,
                .height = 15,
                .address = 0x2110,
                .length = 60
            }; break;
        case 0xFE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 11,
                .width = 8,
                .height = 17,
                .address = 0x214c,
                .length = 68
            }; break;
        case 0xFF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 10,
                .advance = 8,
                .width = 8,
                .height = 14,
                .address = 0x2190,
                .length = 56
            }; break;
        case 0x131:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 8,
                .advance = 5,
                .width = 1,
                .height = 8,
                .address = 0x21c8,
                .length = 4
            }; break;
        case 0x141:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 8,
                .width = 8,
                .height = 13,
                .address = 0x21cc,
                .length = 52
            }; break;
        case 0x142:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 5,
                .width = 5,
                .height = 13,
                .address = 0x2200,
                .length = 36
            }; break;
        case 0x152:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 15,
                .width = 13,
                .height = 13,
                .address = 0x2224,
                .length = 88
            }; break;
        case 0x153:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 17,
                .width = 16,
                .height = 8,
                .address = 0x227c,
                .length = 64
            }; break;
        case 0x160:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 16,
                .advance = 9,
                .width = 7,
                .height = 16,
                .address = 0x22bc,
                .length = 56
            }; break;
        case 0x161:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 11,
                .advance = 7,
                .width = 5,
                .height = 11,
                .address = 0x22f4,
                .length = 28
            }; break;
        case 0x178:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 15,
                .advance = 10,
                .width = 9,
                .height = 15,
                .address = 0x2310,
                .length = 68
            }; break;
        case 0x17D:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 16,
                .advance = 10,
                .width = 9,
                .height = 16,
                .address = 0x2354,
                .length = 72
            }; break;
        case 0x17E:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 11,
                .advance = 8,
                .width = 8,
                .height = 11,
                .address = 0x239c,
                .length = 44
            }; break;
        case 0x192:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 10,
                .advance = 11,
                .width = 10,
                .height = 12,
                .address = 0x23c8,
                .length = 60
            }; break;
        case 0x2C6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 5,
                .width = 5,
                .height = 3,
                .address = 0x2404,
                .length = 8
            }; break;
        case 0x2C7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 5,
                .width = 5,
                .height = 3,
                .address = 0x240c,
                .length = 8
            }; break;
        case 0x2DA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 6,
                .width = 4,
                .height = 3,
                .address = 0x2414,
                .length = 8
            }; break;
        case 0x2DC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 9,
                .width = 6,
                .height = 2,
                .address = 0x241c,
                .length = 8
            }; break;
        case 0x2DD:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 6,
                .width = 6,
                .height = 3,
                .address = 0x2424,
                .length = 12
            }; break;
        case 0x2013:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 5,
                .advance = 8,
                .width = 8,
                .height = 1,
                .address = 0x2430,
                .length = 4
            }; break;
        case 0x2014:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 5,
                .advance = 15,
                .width = 15,
                .height = 1,
                .address = 0x2434,
                .length = 8
            }; break;
        case 0x2018:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 3,
                .width = 2,
                .height = 4,
                .address = 0x243c,
                .length = 4
            }; break;
        case 0x2019:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 3,
                .width = 2,
                .height = 4,
                .address = 0x2440,
                .length = 4
            }; break;
        case 0x201A:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 2,
                .advance = 3,
                .width = 2,
                .height = 4,
                .address = 0x2444,
                .length = 4
            }; break;
        case 0x201C:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 5,
                .width = 4,
                .height = 3,
                .address = 0x2448,
                .length = 8
            }; break;
        case 0x201D:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 5,
                .width = 4,
                .height = 4,
                .address = 0x2450,
                .length = 8
            }; break;
        case 0x201E:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 2,
                .advance = 5,
                .width = 4,
                .height = 4,
                .address = 0x2458,
                .length = 8
            }; break;
        case 0x2020:
            *ch_info = (struct fnt_char_info) {
                .xoffset = -1,
                .yoffset = 13,
                .advance = 5,
                .width = 7,
                .height = 15,
                .address = 0x2460,
                .length = 56
            }; break;
        case 0x2021:
            *ch_info = (struct fnt_char_info) {
                .xoffset = -1,
                .yoffset = 13,
                .advance = 5,
                .width = 7,
                .height = 15,
                .address = 0x2498,
                .length = 56
            }; break;
        case 0x2022:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 5,
                .advance = 5,
                .width = 3,
                .height = 2,
                .address = 0x24d0,
                .length = 4
            }; break;
        case 0x2026:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 1,
                .advance = 11,
                .width = 7,
                .height = 1,
                .address = 0x24d4,
                .length = 4
            }; break;
        case 0x2030:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 15,
                .width = 13,
                .height = 13,
                .address = 0x24d8,
                .length = 88
            }; break;
        case 0x2039:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 9,
                .advance = 9,
                .width = 7,
                .height = 9,
                .address = 0x2530,
                .length = 32
            }; break;
        case 0x203A:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 9,
                .advance = 9,
                .width = 8,
                .height = 9,
                .address = 0x2550,
                .length = 36
            }; break;
        case 0x2044:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 8,
                .width = 8,
                .height = 17,
                .address = 0x2574,
                .length = 68
            }; break;
        case 0x20AC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 13,
                .width = 12,
                .height = 13,
                .address = 0x25b8,
                .length = 80
            }; break;
        default: return 1;
        } // switch(ch)
        break;
    case FNT_HANKEN_LIGHT_19:
        switch(ch) {
        case ' ':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 0,
                .advance = 9,
                .width = 0,
                .height = 0,
                .address = 0x2608,
                .length = 0
            }; break;
        case '!':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 7,
                .width = 3,
                .height = 19,
                .address = 0x2608,
                .length = 32
            }; break;
        case '\"':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 6,
                .width = 6,
                .height = 4,
                .address = 0x2628,
                .length = 12
            }; break;
        case '#':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 20,
                .advance = 22,
                .width = 21,
                .height = 20,
                .address = 0x2634,
                .length = 212
            }; break;
        case '$':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 22,
                .advance = 13,
                .width = 11,
                .height = 25,
                .address = 0x2708,
                .length = 140
            }; break;
        case '%':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 15,
                .width = 15,
                .height = 19,
                .address = 0x2794,
                .length = 144
            }; break;
        case '&':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 18,
                .width = 17,
                .height = 19,
                .address = 0x2824,
                .length = 164
            }; break;
        case '\'':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 3,
                .width = 3,
                .height = 4,
                .address = 0x28c8,
                .length = 8
            }; break;
        case '(':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 20,
                .advance = 8,
                .width = 6,
                .height = 25,
                .address = 0x28d0,
                .length = 76
            }; break;
        case ')':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 20,
                .advance = 8,
                .width = 6,
                .height = 25,
                .address = 0x291c,
                .length = 76
            }; break;
        case '*':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 8,
                .width = 8,
                .height = 6,
                .address = 0x2968,
                .length = 24
            }; break;
        case '+':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 14,
                .width = 13,
                .height = 12,
                .address = 0x2980,
                .length = 80
            }; break;
        case ',':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 2,
                .advance = 4,
                .width = 4,
                .height = 5,
                .address = 0x29d0,
                .length = 12
            }; break;
        case '-':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 7,
                .advance = 12,
                .width = 10,
                .height = 1,
                .address = 0x29dc,
                .length = 8
            }; break;
        case '.':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 2,
                .advance = 4,
                .width = 3,
                .height = 2,
                .address = 0x29e4,
                .length = 4
            }; break;
        case '/':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 20,
                .advance = 11,
                .width = 12,
                .height = 25,
                .address = 0x29e8,
                .length = 152
            }; break;
        case '0':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x2a80,
                .length = 116
            }; break;
        case '1':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 11,
                .width = 8,
                .height = 19,
                .address = 0x2af4,
                .length = 76
            }; break;
        case '2':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x2b40,
                .length = 116
            }; break;
        case '3':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x2bb4,
                .length = 116
            }; break;
        case '4':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 14,
                .width = 13,
                .height = 19,
                .address = 0x2c28,
                .length = 124
            }; break;
        case '5':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x2ca4,
                .length = 116
            }; break;
        case '6':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x2d18,
                .length = 116
            }; break;
        case '7':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 13,
                .width = 11,
                .height = 19,
                .address = 0x2d8c,
                .length = 108
            }; break;
        case '8':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x2df8,
                .length = 116
            }; break;
        case '9':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x2e6c,
                .length = 116
            }; break;
        case ':':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 4,
                .width = 3,
                .height = 13,
                .address = 0x2ee0,
                .length = 20
            }; break;
        case ';':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 13,
                .advance = 4,
                .width = 4,
                .height = 16,
                .address = 0x2ef4,
                .length = 32
            }; break;
        case '<':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 13,
                .width = 10,
                .height = 13,
                .address = 0x2f14,
                .length = 68
            }; break;
        case '=':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 10,
                .advance = 16,
                .width = 14,
                .height = 7,
                .address = 0x2f58,
                .length = 52
            }; break;
        case '>':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 13,
                .width = 11,
                .height = 13,
                .address = 0x2f8c,
                .length = 72
            }; break;
        case '?':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 16,
                .width = 14,
                .height = 19,
                .address = 0x2fd4,
                .length = 136
            }; break;
        case '@':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 16,
                .width = 14,
                .height = 12,
                .address = 0x305c,
                .length = 84
            }; break;
        case 'A':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 18,
                .width = 18,
                .height = 19,
                .address = 0x30b0,
                .length = 172
            }; break;
        case 'B':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 16,
                .width = 14,
                .height = 19,
                .address = 0x315c,
                .length = 136
            }; break;
        case 'C':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 20,
                .width = 18,
                .height = 19,
                .address = 0x31e4,
                .length = 172
            }; break;
        case 'D':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 20,
                .width = 17,
                .height = 19,
                .address = 0x3290,
                .length = 164
            }; break;
        case 'E':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 14,
                .width = 11,
                .height = 19,
                .address = 0x3334,
                .length = 108
            }; break;
        case 'F':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 13,
                .width = 11,
                .height = 19,
                .address = 0x33a0,
                .length = 108
            }; break;
        case 'G':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 21,
                .width = 18,
                .height = 19,
                .address = 0x340c,
                .length = 172
            }; break;
        case 'H':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 19,
                .width = 15,
                .height = 19,
                .address = 0x34b8,
                .length = 144
            }; break;
        case 'I':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 7,
                .width = 3,
                .height = 19,
                .address = 0x3548,
                .length = 32
            }; break;
        case 'J':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 9,
                .width = 7,
                .height = 19,
                .address = 0x3568,
                .length = 68
            }; break;
        case 'K':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 16,
                .width = 13,
                .height = 19,
                .address = 0x35ac,
                .length = 124
            }; break;
        case 'L':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 11,
                .width = 9,
                .height = 19,
                .address = 0x3628,
                .length = 88
            }; break;
        case 'M':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 24,
                .width = 20,
                .height = 19,
                .address = 0x3680,
                .length = 192
            }; break;
        case 'N':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 18,
                .width = 14,
                .height = 19,
                .address = 0x3740,
                .length = 136
            }; break;
        case 'O':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 23,
                .width = 21,
                .height = 19,
                .address = 0x37c8,
                .length = 200
            }; break;
        case 'P':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x3890,
                .length = 116
            }; break;
        case 'Q':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 23,
                .width = 21,
                .height = 19,
                .address = 0x3904,
                .length = 200
            }; break;
        case 'R':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x39cc,
                .length = 116
            }; break;
        case 'S':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x3a40,
                .length = 116
            }; break;
        case 'T':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x3ab4,
                .length = 116
            }; break;
        case 'U':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 20,
                .width = 16,
                .height = 19,
                .address = 0x3b28,
                .length = 152
            }; break;
        case 'V':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 17,
                .width = 17,
                .height = 19,
                .address = 0x3bc0,
                .length = 164
            }; break;
        case 'W':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 27,
                .width = 28,
                .height = 19,
                .address = 0x3c64,
                .length = 268
            }; break;
        case 'X':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 17,
                .width = 17,
                .height = 19,
                .address = 0x3d70,
                .length = 164
            }; break;
        case 'Y':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 15,
                .width = 14,
                .height = 19,
                .address = 0x3e14,
                .length = 136
            }; break;
        case 'Z':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 14,
                .width = 14,
                .height = 19,
                .address = 0x3e9c,
                .length = 136
            }; break;
        case '[':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 9,
                .width = 8,
                .height = 24,
                .address = 0x3f24,
                .length = 96
            }; break;
        case '\\':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 20,
                .advance = 11,
                .width = 12,
                .height = 25,
                .address = 0x3f84,
                .length = 152
            }; break;
        case ']':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 10,
                .width = 8,
                .height = 24,
                .address = 0x401c,
                .length = 96
            }; break;
        case '^':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 13,
                .width = 13,
                .height = 10,
                .address = 0x407c,
                .length = 68
            }; break;
        case '_':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 1,
                .advance = 12,
                .width = 10,
                .height = 1,
                .address = 0x40c0,
                .length = 8
            }; break;
        case '`':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 5,
                .width = 5,
                .height = 4,
                .address = 0x40c8,
                .length = 12
            }; break;
        case 'a':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 17,
                .width = 14,
                .height = 12,
                .address = 0x40d4,
                .length = 84
            }; break;
        case 'b':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 16,
                .width = 14,
                .height = 19,
                .address = 0x4128,
                .length = 136
            }; break;
        case 'c':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 13,
                .width = 12,
                .height = 12,
                .address = 0x41b0,
                .length = 72
            }; break;
        case 'd':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 17,
                .width = 14,
                .height = 19,
                .address = 0x41f8,
                .length = 136
            }; break;
        case 'e':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 15,
                .width = 13,
                .height = 12,
                .address = 0x4280,
                .length = 80
            }; break;
        case 'f':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 10,
                .width = 9,
                .height = 19,
                .address = 0x42d0,
                .length = 88
            }; break;
        case 'g':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 17,
                .width = 14,
                .height = 17,
                .address = 0x4328,
                .length = 120
            }; break;
        case 'h':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 14,
                .width = 11,
                .height = 19,
                .address = 0x43a0,
                .length = 108
            }; break;
        case 'i':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 17,
                .advance = 7,
                .width = 3,
                .height = 17,
                .address = 0x440c,
                .length = 28
            }; break;
        case 'j':
            *ch_info = (struct fnt_char_info) {
                .xoffset = -3,
                .yoffset = 17,
                .advance = 6,
                .width = 7,
                .height = 22,
                .address = 0x4428,
                .length = 80
            }; break;
        case 'k':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 12,
                .width = 9,
                .height = 19,
                .address = 0x4478,
                .length = 88
            }; break;
        case 'l':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 7,
                .width = 3,
                .height = 19,
                .address = 0x44d0,
                .length = 32
            }; break;
        case 'm':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 20,
                .width = 17,
                .height = 12,
                .address = 0x44f0,
                .length = 104
            }; break;
        case 'n':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 13,
                .width = 10,
                .height = 12,
                .address = 0x4558,
                .length = 60
            }; break;
        case 'o':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 16,
                .width = 14,
                .height = 12,
                .address = 0x4594,
                .length = 84
            }; break;
        case 'p':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 16,
                .width = 14,
                .height = 17,
                .address = 0x45e8,
                .length = 120
            }; break;
        case 'q':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 17,
                .width = 14,
                .height = 17,
                .address = 0x4660,
                .length = 120
            }; break;
        case 'r':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 10,
                .width = 8,
                .height = 12,
                .address = 0x46d8,
                .length = 48
            }; break;
        case 's':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 11,
                .width = 9,
                .height = 12,
                .address = 0x4708,
                .length = 56
            }; break;
        case 't':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 17,
                .advance = 10,
                .width = 8,
                .height = 17,
                .address = 0x4740,
                .length = 68
            }; break;
        case 'u':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 13,
                .width = 11,
                .height = 12,
                .address = 0x4784,
                .length = 68
            }; break;
        case 'v':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 12,
                .advance = 11,
                .width = 11,
                .height = 12,
                .address = 0x47c8,
                .length = 68
            }; break;
        case 'w':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 12,
                .advance = 20,
                .width = 20,
                .height = 12,
                .address = 0x480c,
                .length = 120
            }; break;
        case 'x':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 12,
                .advance = 12,
                .width = 11,
                .height = 12,
                .address = 0x4884,
                .length = 68
            }; break;
        case 'y':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 12,
                .advance = 11,
                .width = 11,
                .height = 17,
                .address = 0x48c8,
                .length = 96
            }; break;
        case 'z':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 12,
                .advance = 12,
                .width = 12,
                .height = 12,
                .address = 0x4928,
                .length = 72
            }; break;
        case '{':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 10,
                .width = 9,
                .height = 24,
                .address = 0x4970,
                .length = 108
            }; break;
        case '|':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 7,
                .width = 3,
                .height = 24,
                .address = 0x49dc,
                .length = 36
            }; break;
        case '}':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 9,
                .width = 7,
                .height = 24,
                .address = 0x4a00,
                .length = 84
            }; break;
        case '~':
            *ch_info = (struct fnt_char_info) {
                .xoffset = 3,
                .yoffset = 19,
                .advance = 14,
                .width = 8,
                .height = 3,
                .address = 0x4a54,
                .length = 12
            }; break;
        case 0xA1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 7,
                .width = 3,
                .height = 19,
                .address = 0x4a60,
                .length = 32
            }; break;
        case 0xA2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 14,
                .advance = 13,
                .width = 11,
                .height = 16,
                .address = 0x4a80,
                .length = 88
            }; break;
        case 0xA3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 16,
                .width = 14,
                .height = 19,
                .address = 0x4ad8,
                .length = 136
            }; break;
        case 0xA5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 16,
                .width = 15,
                .height = 19,
                .address = 0x4b60,
                .length = 144
            }; break;
        case 0xA6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 7,
                .width = 3,
                .height = 24,
                .address = 0x4bf0,
                .length = 36
            }; break;
        case 0xA8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 16,
                .advance = 8,
                .width = 7,
                .height = 2,
                .address = 0x4c14,
                .length = 8
            }; break;
        case 0xA9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 13,
                .width = 13,
                .height = 11,
                .address = 0x4c1c,
                .length = 72
            }; break;
        case 0xAB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 18,
                .width = 16,
                .height = 13,
                .address = 0x4c64,
                .length = 104
            }; break;
        case 0xAC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 13,
                .advance = 20,
                .width = 16,
                .height = 7,
                .address = 0x4ccc,
                .length = 56
            }; break;
        case 0xAE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 13,
                .width = 13,
                .height = 11,
                .address = 0x4d04,
                .length = 72
            }; break;
        case 0xB0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 7,
                .width = 7,
                .height = 5,
                .address = 0x4d4c,
                .length = 20
            }; break;
        case 0xB1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 15,
                .advance = 14,
                .width = 13,
                .height = 15,
                .address = 0x4d60,
                .length = 100
            }; break;
        case 0xB4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 5,
                .width = 5,
                .height = 4,
                .address = 0x4dc4,
                .length = 12
            }; break;
        case 0xB5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 15,
                .width = 11,
                .height = 17,
                .address = 0x4dd0,
                .length = 96
            }; break;
        case 0xB6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 14,
                .width = 11,
                .height = 19,
                .address = 0x4e30,
                .length = 108
            }; break;
        case 0xB7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 11,
                .advance = 5,
                .width = 4,
                .height = 4,
                .address = 0x4e9c,
                .length = 8
            }; break;
        case 0xB8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 11,
                .yoffset = 1,
                .advance = 27,
                .width = 4,
                .height = 5,
                .address = 0x4ea4,
                .length = 12
            }; break;
        case 0xBB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 18,
                .width = 16,
                .height = 13,
                .address = 0x4eb0,
                .length = 104
            }; break;
        case 0xBF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 16,
                .width = 14,
                .height = 19,
                .address = 0x4f18,
                .length = 136
            }; break;
        case 0xC0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 24,
                .advance = 18,
                .width = 17,
                .height = 24,
                .address = 0x4fa0,
                .length = 204
            }; break;
        case 0xC1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 24,
                .advance = 18,
                .width = 17,
                .height = 24,
                .address = 0x506c,
                .length = 204
            }; break;
        case 0xC2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 24,
                .advance = 18,
                .width = 17,
                .height = 24,
                .address = 0x5138,
                .length = 204
            }; break;
        case 0xC3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 22,
                .advance = 18,
                .width = 17,
                .height = 22,
                .address = 0x5204,
                .length = 188
            }; break;
        case 0xC4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 22,
                .advance = 18,
                .width = 18,
                .height = 22,
                .address = 0x52c0,
                .length = 200
            }; break;
        case 0xC5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 23,
                .advance = 18,
                .width = 19,
                .height = 23,
                .address = 0x5388,
                .length = 220
            }; break;
        case 0xC6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 27,
                .width = 26,
                .height = 19,
                .address = 0x5464,
                .length = 248
            }; break;
        case 0xC7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 21,
                .width = 18,
                .height = 23,
                .address = 0x555c,
                .length = 208
            }; break;
        case 0xC8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 24,
                .advance = 14,
                .width = 11,
                .height = 24,
                .address = 0x562c,
                .length = 132
            }; break;
        case 0xC9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 24,
                .advance = 14,
                .width = 11,
                .height = 24,
                .address = 0x56b0,
                .length = 132
            }; break;
        case 0xCA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 24,
                .advance = 14,
                .width = 11,
                .height = 24,
                .address = 0x5734,
                .length = 132
            }; break;
        case 0xCB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 22,
                .advance = 13,
                .width = 11,
                .height = 22,
                .address = 0x57b8,
                .length = 124
            }; break;
        case 0xCC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 24,
                .advance = 6,
                .width = 5,
                .height = 24,
                .address = 0x5834,
                .length = 60
            }; break;
        case 0xCD:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 24,
                .advance = 6,
                .width = 5,
                .height = 24,
                .address = 0x5870,
                .length = 60
            }; break;
        case 0xCE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 24,
                .advance = 6,
                .width = 7,
                .height = 24,
                .address = 0x58ac,
                .length = 84
            }; break;
        case 0xCF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 22,
                .advance = 6,
                .width = 7,
                .height = 22,
                .address = 0x5900,
                .length = 80
            }; break;
        case 0xD0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 20,
                .width = 18,
                .height = 19,
                .address = 0x5950,
                .length = 172
            }; break;
        case 0xD1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 22,
                .advance = 17,
                .width = 14,
                .height = 22,
                .address = 0x59fc,
                .length = 156
            }; break;
        case 0xD2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 24,
                .advance = 23,
                .width = 21,
                .height = 24,
                .address = 0x5a98,
                .length = 252
            }; break;
        case 0xD3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 24,
                .advance = 23,
                .width = 21,
                .height = 24,
                .address = 0x5b94,
                .length = 252
            }; break;
        case 0xD4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 24,
                .advance = 23,
                .width = 21,
                .height = 24,
                .address = 0x5c90,
                .length = 252
            }; break;
        case 0xD5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 22,
                .advance = 23,
                .width = 21,
                .height = 22,
                .address = 0x5d8c,
                .length = 232
            }; break;
        case 0xD6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 22,
                .advance = 24,
                .width = 21,
                .height = 22,
                .address = 0x5e74,
                .length = 232
            }; break;
        case 0xD7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 12,
                .advance = 14,
                .width = 13,
                .height = 12,
                .address = 0x5f5c,
                .length = 80
            }; break;
        case 0xD8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 22,
                .advance = 23,
                .width = 21,
                .height = 25,
                .address = 0x5fac,
                .length = 264
            }; break;
        case 0xD9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 24,
                .advance = 19,
                .width = 16,
                .height = 24,
                .address = 0x60b4,
                .length = 192
            }; break;
        case 0xDA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 24,
                .advance = 19,
                .width = 16,
                .height = 24,
                .address = 0x6174,
                .length = 192
            }; break;
        case 0xDB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 24,
                .advance = 19,
                .width = 16,
                .height = 24,
                .address = 0x6234,
                .length = 192
            }; break;
        case 0xDC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 22,
                .advance = 19,
                .width = 16,
                .height = 22,
                .address = 0x62f4,
                .length = 176
            }; break;
        case 0xDD:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 24,
                .advance = 14,
                .width = 14,
                .height = 24,
                .address = 0x63a4,
                .length = 168
            }; break;
        case 0xDE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x644c,
                .length = 116
            }; break;
        case 0xDF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 14,
                .width = 12,
                .height = 19,
                .address = 0x64c0,
                .length = 116
            }; break;
        case 0xE0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 16,
                .width = 14,
                .height = 18,
                .address = 0x6534,
                .length = 128
            }; break;
        case 0xE1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 16,
                .width = 14,
                .height = 18,
                .address = 0x65b4,
                .length = 128
            }; break;
        case 0xE2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 16,
                .width = 14,
                .height = 18,
                .address = 0x6634,
                .length = 128
            }; break;
        case 0xE3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 17,
                .advance = 17,
                .width = 14,
                .height = 17,
                .address = 0x66b4,
                .length = 120
            }; break;
        case 0xE4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 17,
                .advance = 16,
                .width = 14,
                .height = 17,
                .address = 0x672c,
                .length = 120
            }; break;
        case 0xE5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 16,
                .width = 14,
                .height = 18,
                .address = 0x67a4,
                .length = 128
            }; break;
        case 0xE6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 24,
                .width = 22,
                .height = 12,
                .address = 0x6824,
                .length = 132
            }; break;
        case 0xE7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 13,
                .width = 12,
                .height = 16,
                .address = 0x68a8,
                .length = 96
            }; break;
        case 0xE8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 15,
                .width = 13,
                .height = 18,
                .address = 0x6908,
                .length = 120
            }; break;
        case 0xE9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 15,
                .width = 13,
                .height = 18,
                .address = 0x6980,
                .length = 120
            }; break;
        case 0xEA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 15,
                .width = 13,
                .height = 18,
                .address = 0x69f8,
                .length = 120
            }; break;
        case 0xEB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 17,
                .advance = 15,
                .width = 13,
                .height = 17,
                .address = 0x6a70,
                .length = 112
            }; break;
        case 0xEC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 18,
                .advance = 7,
                .width = 5,
                .height = 18,
                .address = 0x6ae0,
                .length = 48
            }; break;
        case 0xED:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 18,
                .advance = 7,
                .width = 5,
                .height = 18,
                .address = 0x6b10,
                .length = 48
            }; break;
        case 0xEE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 18,
                .advance = 6,
                .width = 7,
                .height = 18,
                .address = 0x6b40,
                .length = 64
            }; break;
        case 0xEF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 17,
                .advance = 7,
                .width = 7,
                .height = 17,
                .address = 0x6b80,
                .length = 60
            }; break;
        case 0xF0:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 17,
                .width = 15,
                .height = 19,
                .address = 0x6bbc,
                .length = 144
            }; break;
        case 0xF1:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 17,
                .advance = 13,
                .width = 10,
                .height = 17,
                .address = 0x6c4c,
                .length = 88
            }; break;
        case 0xF2:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 15,
                .width = 14,
                .height = 18,
                .address = 0x6ca4,
                .length = 128
            }; break;
        case 0xF3:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 15,
                .width = 14,
                .height = 18,
                .address = 0x6d24,
                .length = 128
            }; break;
        case 0xF4:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 15,
                .width = 14,
                .height = 18,
                .address = 0x6da4,
                .length = 128
            }; break;
        case 0xF5:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 17,
                .advance = 15,
                .width = 14,
                .height = 17,
                .address = 0x6e24,
                .length = 120
            }; break;
        case 0xF6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 17,
                .advance = 15,
                .width = 14,
                .height = 17,
                .address = 0x6e9c,
                .length = 120
            }; break;
        case 0xF7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 17,
                .width = 15,
                .height = 12,
                .address = 0x6f14,
                .length = 92
            }; break;
        case 0xF8:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 14,
                .advance = 15,
                .width = 14,
                .height = 16,
                .address = 0x6f70,
                .length = 112
            }; break;
        case 0xF9:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 18,
                .advance = 14,
                .width = 11,
                .height = 18,
                .address = 0x6fe0,
                .length = 100
            }; break;
        case 0xFA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 18,
                .advance = 14,
                .width = 11,
                .height = 18,
                .address = 0x7044,
                .length = 100
            }; break;
        case 0xFB:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 18,
                .advance = 14,
                .width = 11,
                .height = 18,
                .address = 0x70a8,
                .length = 100
            }; break;
        case 0xFC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 16,
                .advance = 14,
                .width = 11,
                .height = 16,
                .address = 0x710c,
                .length = 88
            }; break;
        case 0xFD:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 18,
                .advance = 11,
                .width = 10,
                .height = 23,
                .address = 0x7164,
                .length = 116
            }; break;
        case 0xFE:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 19,
                .advance = 16,
                .width = 14,
                .height = 24,
                .address = 0x71d8,
                .length = 168
            }; break;
        case 0xFF:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 16,
                .advance = 11,
                .width = 10,
                .height = 21,
                .address = 0x7280,
                .length = 108
            }; break;
        case 0x131:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 12,
                .advance = 7,
                .width = 3,
                .height = 12,
                .address = 0x72ec,
                .length = 20
            }; break;
        case 0x141:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 11,
                .width = 11,
                .height = 19,
                .address = 0x7300,
                .length = 108
            }; break;
        case 0x142:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 7,
                .width = 7,
                .height = 19,
                .address = 0x736c,
                .length = 68
            }; break;
        case 0x152:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 22,
                .width = 20,
                .height = 19,
                .address = 0x73b0,
                .length = 192
            }; break;
        case 0x153:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 12,
                .advance = 26,
                .width = 24,
                .height = 12,
                .address = 0x7470,
                .length = 144
            }; break;
        case 0x160:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 23,
                .advance = 14,
                .width = 12,
                .height = 23,
                .address = 0x7500,
                .length = 140
            }; break;
        case 0x161:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 16,
                .advance = 11,
                .width = 9,
                .height = 16,
                .address = 0x758c,
                .length = 72
            }; break;
        case 0x178:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 22,
                .advance = 14,
                .width = 14,
                .height = 22,
                .address = 0x75d4,
                .length = 156
            }; break;
        case 0x17D:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 23,
                .advance = 15,
                .width = 14,
                .height = 23,
                .address = 0x7670,
                .length = 164
            }; break;
        case 0x17E:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 17,
                .advance = 12,
                .width = 12,
                .height = 17,
                .address = 0x7714,
                .length = 104
            }; break;
        case 0x192:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 14,
                .advance = 16,
                .width = 14,
                .height = 17,
                .address = 0x777c,
                .length = 120
            }; break;
        case 0x2C6:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 8,
                .width = 7,
                .height = 4,
                .address = 0x77f4,
                .length = 16
            }; break;
        case 0x2C7:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 8,
                .width = 7,
                .height = 4,
                .address = 0x7804,
                .length = 16
            }; break;
        case 0x2DA:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 7,
                .width = 7,
                .height = 5,
                .address = 0x7814,
                .length = 20
            }; break;
        case 0x2DC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 3,
                .yoffset = 17,
                .advance = 14,
                .width = 8,
                .height = 2,
                .address = 0x7828,
                .length = 8
            }; break;
        case 0x2DD:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 9,
                .width = 8,
                .height = 4,
                .address = 0x7830,
                .length = 16
            }; break;
        case 0x2013:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 7,
                .advance = 12,
                .width = 10,
                .height = 1,
                .address = 0x7840,
                .length = 8
            }; break;
        case 0x2014:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 7,
                .advance = 22,
                .width = 20,
                .height = 1,
                .address = 0x7848,
                .length = 12
            }; break;
        case 0x2018:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 4,
                .width = 4,
                .height = 5,
                .address = 0x7854,
                .length = 12
            }; break;
        case 0x2019:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 4,
                .width = 4,
                .height = 5,
                .address = 0x7860,
                .length = 12
            }; break;
        case 0x201A:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 2,
                .advance = 4,
                .width = 4,
                .height = 5,
                .address = 0x786c,
                .length = 12
            }; break;
        case 0x201C:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 7,
                .width = 7,
                .height = 5,
                .address = 0x7878,
                .length = 20
            }; break;
        case 0x201D:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 7,
                .width = 7,
                .height = 5,
                .address = 0x788c,
                .length = 20
            }; break;
        case 0x201E:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 2,
                .advance = 7,
                .width = 7,
                .height = 5,
                .address = 0x78a0,
                .length = 20
            }; break;
        case 0x2020:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 10,
                .width = 8,
                .height = 22,
                .address = 0x78b4,
                .length = 88
            }; break;
        case 0x2021:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 10,
                .width = 8,
                .height = 22,
                .address = 0x790c,
                .length = 88
            }; break;
        case 0x2022:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 8,
                .advance = 6,
                .width = 4,
                .height = 4,
                .address = 0x7964,
                .length = 8
            }; break;
        case 0x2026:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 2,
                .yoffset = 2,
                .advance = 15,
                .width = 11,
                .height = 2,
                .address = 0x796c,
                .length = 12
            }; break;
        case 0x2030:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 19,
                .advance = 21,
                .width = 21,
                .height = 19,
                .address = 0x7978,
                .length = 200
            }; break;
        case 0x2039:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 13,
                .width = 10,
                .height = 13,
                .address = 0x7a40,
                .length = 68
            }; break;
        case 0x203A:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 13,
                .advance = 13,
                .width = 11,
                .height = 13,
                .address = 0x7a84,
                .length = 72
            }; break;
        case 0x2044:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 0,
                .yoffset = 20,
                .advance = 11,
                .width = 12,
                .height = 25,
                .address = 0x7acc,
                .length = 152
            }; break;
        case 0x20AC:
            *ch_info = (struct fnt_char_info) {
                .xoffset = 1,
                .yoffset = 19,
                .advance = 18,
                .width = 16,
                .height = 19,
                .address = 0x7b64,
                .length = 152
            }; break;
        default: return 1;
        } // switch(ch)
        break;
    default: return 1;
    } // switch(fnt)
    return 0;
}

int8_t ICACHE_FLASH_ATTR
fnt_get_kerning(const uint32_t ch1, const uint32_t ch2, const fnt_id fnt) {
    switch(fnt) {
    case FNT_HANKEN_LIGHT_13:
        switch(ch1) {
        case 'A':
            switch(ch2) {
            case 'T':
            case 'V':
            case 'Y':
                return -1;
            default:
                return 0;
            }
        case 'F':
            switch(ch2) {
            case 'A':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
            case 0xC6:
                return -1;
            default:
                return 0;
            }
        case 'O':
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 'P':
            switch(ch2) {
            case 'A':
            case 'a':
            case 'c':
            case 'd':
            case 'e':
            case 'g':
            case 'i':
            case 'j':
            case 'o':
            case 'q':
            case 's':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
                return -1;
            default:
                return 0;
            }
        case 'T':
            switch(ch2) {
            case 'a':
            case 'c':
            case 'e':
            case 'g':
            case 'j':
            case 'o':
            case 'q':
            case 'r':
            case 's':
            case 'u':
            case 'w':
            case 0xC6:
                return -1;
            default:
                return 0;
            }
        case 'V':
            switch(ch2) {
            case 'A':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
            case 0xC6:
                return -1;
            default:
                return 0;
            }
        case 'W':
            switch(ch2) {
            case 'Q':
            case 'a':
            case 'e':
            case 'g':
            case 'o':
            case 'q':
            case 0xC6:
                return -1;
            default:
                return 0;
            }
        case 'Y':
            switch(ch2) {
            case 'A':
            case 'O':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
            case 0xC6:
            case 0xD2:
            case 0xD3:
            case 0xD4:
            case 0xD5:
            case 0xD6:
            case 0xD8:
            case 0x152:
                return -1;
            default:
                return 0;
            }
        case 'Z':
            switch(ch2) {
            case 0xD2:
            case 0xD3:
            case 0xD4:
            case 0xD5:
            case 0xD6:
            case 0xD8:
            case 0x152:
                return -1;
            default:
                return 0;
            }
        case 'a':
            switch(ch2) {
            case 'T':
            case 'W':
                return -1;
            default:
                return 0;
            }
        case 'c':
            switch(ch2) {
            case 'T':
                return -1;
            default:
                return 0;
            }
        case 'e':
            switch(ch2) {
            case 'T':
            case 'W':
                return -1;
            default:
                return 0;
            }
        case 'g':
            switch(ch2) {
            case 'T':
                return -1;
            default:
                return 0;
            }
        case 'o':
            switch(ch2) {
            case 'T':
            case 'W':
                return -1;
            default:
                return 0;
            }
        case 'q':
            switch(ch2) {
            case 'T':
                return -1;
            default:
                return 0;
            }
        case 'r':
            switch(ch2) {
            case 'T':
                return -1;
            default:
                return 0;
            }
        case 's':
            switch(ch2) {
            case 'T':
                return -1;
            default:
                return 0;
            }
        case 'u':
            switch(ch2) {
            case 'T':
                return -1;
            default:
                return 0;
            }
        case 'w':
            switch(ch2) {
            case 'T':
                return -1;
            default:
                return 0;
            }
        case 0xC0:
            switch(ch2) {
            case 'V':
            case 'Y':
                return -1;
            default:
                return 0;
            }
        case 0xC1:
            switch(ch2) {
            case 'V':
                return -1;
            default:
                return 0;
            }
        case 0xC2:
            switch(ch2) {
            case 'V':
            case 'Y':
                return -1;
            default:
                return 0;
            }
        case 0xC3:
            switch(ch2) {
            case 'V':
            case 'Y':
                return -1;
            default:
                return 0;
            }
        case 0xC4:
            switch(ch2) {
            case 'V':
            case 'Y':
                return -1;
            default:
                return 0;
            }
        case 0xC5:
            switch(ch2) {
            case 'V':
            case 'Y':
                return -1;
            default:
                return 0;
            }
        case 0xD2:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD3:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD4:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD5:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD6:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD8:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        default:
            return 0;
        } // switch(ch1)
    case FNT_HANKEN_LIGHT_19:
        switch(ch1) {
        case 'A':
            switch(ch2) {
            case 'T':
            case 'V':
            case 'W':
                return -1;
            case 'Y':
                return -2;
            default:
                return 0;
            }
        case 'F':
            switch(ch2) {
            case 'A':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
                return -1;
            case 0xC6:
                return -2;
            default:
                return 0;
            }
        case 'O':
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 'P':
            switch(ch2) {
            case 'A':
            case 'a':
            case 'c':
            case 'd':
            case 'e':
            case 'g':
            case 'i':
            case 'j':
            case 'o':
            case 'q':
            case 's':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
                return -2;
            default:
                return 0;
            }
        case 'T':
            switch(ch2) {
            case 'a':
            case 'c':
            case 'e':
            case 'g':
            case 'j':
            case 'o':
            case 'q':
            case 'r':
            case 's':
            case 'u':
            case 'w':
            case 0xC6:
                return -2;
            default:
                return 0;
            }
        case 'V':
            switch(ch2) {
            case 'A':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
                return -1;
            case 0xC6:
                return -2;
            default:
                return 0;
            }
        case 'W':
            switch(ch2) {
            case 'A':
            case 'Q':
            case 'a':
            case 'e':
            case 'g':
            case 'i':
            case 'o':
            case 'q':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
            case 0xC6:
                return -1;
            default:
                return 0;
            }
        case 'Y':
            switch(ch2) {
            case 'O':
            case 0xD2:
            case 0xD3:
            case 0xD4:
            case 0xD5:
            case 0xD6:
            case 0xD8:
            case 0x152:
                return -1;
            case 'A':
            case 0xC0:
            case 0xC1:
            case 0xC2:
            case 0xC3:
            case 0xC4:
            case 0xC5:
            case 0xC6:
                return -2;
            default:
                return 0;
            }
        case 'Z':
            switch(ch2) {
            case 0xD2:
            case 0xD3:
            case 0xD4:
            case 0xD5:
            case 0xD6:
            case 0xD8:
            case 0x152:
                return -1;
            default:
                return 0;
            }
        case 'a':
            switch(ch2) {
            case 'W':
                return -1;
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 'c':
            switch(ch2) {
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 'e':
            switch(ch2) {
            case 'W':
                return -1;
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 'g':
            switch(ch2) {
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 'i':
            switch(ch2) {
            case 'W':
                return -1;
            default:
                return 0;
            }
        case 'o':
            switch(ch2) {
            case 'W':
                return -1;
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 'q':
            switch(ch2) {
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 'r':
            switch(ch2) {
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 's':
            switch(ch2) {
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 'u':
            switch(ch2) {
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 'w':
            switch(ch2) {
            case 'T':
                return -2;
            default:
                return 0;
            }
        case 0xC0:
            switch(ch2) {
            case 'V':
            case 'W':
                return -1;
            case 'Y':
                return -2;
            default:
                return 0;
            }
        case 0xC1:
            switch(ch2) {
            case 'V':
            case 'W':
                return -1;
            default:
                return 0;
            }
        case 0xC2:
            switch(ch2) {
            case 'V':
            case 'W':
                return -1;
            case 'Y':
                return -2;
            default:
                return 0;
            }
        case 0xC3:
            switch(ch2) {
            case 'V':
            case 'W':
                return -1;
            case 'Y':
                return -2;
            default:
                return 0;
            }
        case 0xC4:
            switch(ch2) {
            case 'V':
            case 'W':
                return -1;
            case 'Y':
                return -2;
            default:
                return 0;
            }
        case 0xC5:
            switch(ch2) {
            case 'V':
            case 'W':
                return -1;
            case 'Y':
                return -2;
            default:
                return 0;
            }
        case 0xD2:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD3:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD4:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD5:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD6:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        case 0xD8:
            switch(ch2) {
            case 'Y':
            case 'Z':
                return -1;
            default:
                return 0;
            }
        default:
            return 0;
        } // switch(ch1)
    default: 
        return 0;
    } // switch(fnt)
} // (get_kerning)

