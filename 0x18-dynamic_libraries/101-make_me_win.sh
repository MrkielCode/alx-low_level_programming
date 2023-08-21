#!/bin/bash
LD_PRELOAD=/$PWD/libtest.so ./gm 9 8 10 24 75 9
export LD_PRELOAD=/tmp/libtest.so
