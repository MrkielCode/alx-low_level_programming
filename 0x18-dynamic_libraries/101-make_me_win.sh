#!/bin/bash
wget -P /tmp https://github.com/MrkielCode/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libtest.so 
export LD_PRELOAD=/tmp/libtest.so
