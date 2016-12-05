/*
 * ESPRSSIF MIT License
 *
 * Copyright (c) 2015 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD>
 *
 * Permission is hereby granted for use on ESPRESSIF SYSTEMS ESP8266 only, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef __USER_CONFIG_H__
#define __USER_CONFIG_H__

#include "os_type.h"

#define user_procTaskPrio       1
#define user_procTaskQueueLen   5

#define USE_OPTIMIZE_PRINTF

#define FONT_ADDRESS            0x300000    // address of font(s) in flash; 4byte aligned!
#define FONT_SORT_PIXELS        0           // 1 or 2, 0 to turn off

#define BMP_ADDRESS             0x380000    // address of assets in flash; 4byte align

#define DISP_SSD1322                        // use SSD1322 display driver

//#define USER_DBG_STATION                  // connect to local wifi (instead of SOFTAP)

#ifdef USER_DBG_STATION
// define USER_DBG_SSID & USER_DBG_PWD inside user_wifi_credentials to use station mode!
#include "user_wifi_credentials.h"
#endif

#define VERBOSE                 0           // verbose level UART;
                                            // 0 to turn off, 1 to display some perf benches, >2 to float UART!

#endif
