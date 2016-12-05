#!/usr/bin/env python3

import sys
import serial
import select

if len(sys.argv) > 1:
    baud = sys.argv[1]
else:
    baud = '74880'

# http://stackoverflow.com/questions/26047544/python-serial-port-listener

conn = serial.Serial(port='/dev/ttyUSB0', baudrate=baud, parity=serial.PARITY_NONE, \
    stopbits=serial.STOPBITS_ONE, bytesize=serial.EIGHTBITS, timeout=0)

while (True):
    conn.nonblocking()
    availR, _, _ = select.select([conn], [], [], 7)
    data = conn.read(0x100)
    print('{}'.format(data.decode("latin_1")), end='\r')
    sys.stdout.flush()

