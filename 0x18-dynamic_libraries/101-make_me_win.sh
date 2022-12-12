#!/bin/bash
wget -O /tmp/win.so https://github.com/holbertonschool/0x18.c/win.so
export LD_PRELOAD=/tmp/win.so
