#!/bin/bash
wget -P .. https://github.com/HenryAnyiam/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgm.so
export LD_PRELOAD="$PWD/../libgm.so"
