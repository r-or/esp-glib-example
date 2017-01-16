esp-glib-example
======
Shows basic usage of esp-glib with an SSD1322 attached.

This repository is basically a clone of v2.0 of espressif's NONOS SDK with some tweaks in ld/eagle.app.v6.ld.

Inside glib-example is a working sample of esp-glib with a SSD1322 display controller.

Check out glib-example/user/user_main.c for usage.

Video of demo: https://youtu.be/7Q2MXw7QHp0

[esp-glib](https://github.com/r-or/esp-glib) is added as a submodule in glib-example/glib.

Cloning & Updating
======
After cloning check out submodules:
```
git submodule update --recursive --remote --init
```

To pull updates later on:
```
git pull
git submodule update --recursive --remote
```

Make script
======
At first open the shell script ```make-default.sh``` in glib-example/.

There you will find all the options usually set via the espressif script. Set all the options according to your ESP model, i.e. flash size. In this case, for an Ai-thinker ESP-12F module flash size is 4Mbyte or 32Mbit aka "32m".

You can also select your serial port and its baud rate. The default setting of 1.5Mbaud/s usually works and you can enjoy really fast flashes.

Optionally you can also fill in your serial terminal program of choice, e.g. "miniterm" which gets auto killed prior to flash operation.

Make sure all the flash addresses are valid and all the binary files have been placed in BIN_PATH, e.g. assets and fonts. For addresses check out 'Config' section below.

To build you still have to set up your xtensa toolchain [as usual](https://github.com/esp8266/esp8266-wiki/wiki/Toolchain).

To be more specific, build [esp-open-sdk](https://github.com/pfalcon/esp-open-sdk) with ```STANDALONE=n```. It is assumed that you place the SDK in $HOME/esp-open-sdk. This path however can be specified in glib-example/Makefile ("ESP_OPEN_SDK" variable).

Afterwards, call ```./make-default.sh``` to build and/or ```./make-default flash``` to make and flash.

To clean solution: ```./make-default.sh clean```

Config
======
Configuration happens in glib-example/include/user_config.h.

Here you can select the starting addresses of assets/bitmaps (BMP_ADDRESS) as well as fonts (FONT_ADDRESS). Choose according to your ESP model and your make/ flash script above.

Default baud rate for serial output is 921600.
