#!/bin/bash
wget -p /tmp/ https://raw.githubusercontent.com/MrkielCode/alx-low_level_programming/main/0x18-dynamic_libraries/myrand.so
export LD_PRELOAD=/tmp/myrand.so
