#!/bin/bash
wget -O /tmp/win.so https://github.com/holbertonschool/raw/master/0x18.c/win.so
export LD_PRELOAD=/tmp/win.so
