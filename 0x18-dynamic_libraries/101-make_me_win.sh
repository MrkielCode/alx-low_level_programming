#!/bin/bash
wget -p /tmp/ https://raw.githubusercontent.com/MrkielCode/alx-low_level_programming/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
