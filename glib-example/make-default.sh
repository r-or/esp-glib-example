#! /bin/bash

export BIN_PATH=../bin

STERM="minicom"

FFREQ="40m"
FMODE="qio"
FSIZE="32m"
PORT="/dev/ttyUSB0"
BAUD="1500000"
MAKEARGS="all COMPILE=gcc"

if [ ! -d "$BIN_PATH" ]; then
  mkdir $BIN_PATH
fi

if [ -z "$1" ]; then
    make $MAKEARGS
else
    if [ "$1" = "clean" ]; then
        make clean
    elif [ "$1" = "flash" ]; then
        if make $MAKEARGS; then
            if killall $STERM; then
                echo "killing $STERM..."
                sleep 3
            fi
            esptool.py -p $PORT -b $BAUD write_flash -ff $FFREQ -fm $FMODE -fs $FSIZE \
                0x00000     $BIN_PATH/eagle.flash.bin \
                0x10000     $BIN_PATH/eagle.irom0text.bin \
                0xfe000     $BIN_PATH/blank.bin \
                0x300000    $BIN_PATH/fonts_4bit.gray \
                0x380000    $BIN_PATH/assets_4bit.gray \
                0x3fe000    $BIN_PATH/blank.bin

        else
            echo "skipped flash!"
        fi
    else
        echo "unknown arg: $1"
    fi
fi


