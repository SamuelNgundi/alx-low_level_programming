#!/bin/bash
wget -P /tmp/ https://raw.github.com/SamuelNgundi/alx-low_level_programming/main/0x18-dynamic_libraries/lib_overhaul.so
export LD_PRELOAD=/tmp/lib_overhaul.so
