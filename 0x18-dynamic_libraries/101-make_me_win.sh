#!/bin/bash
wget -P /tmp https://github.com/lightnonstop/alx-low_level_programming/blob/master/0x18-dynamic_libraries/jackhack.so
export LD_PRELOAD=/tmp/jackhack.so
