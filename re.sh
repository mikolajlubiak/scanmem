#!/bin/sh
sudo scanmem -p `pidof a.out` -c'5; set 10; exit' 2>/dev/null
