#!bin/sh
ifconfig | grep "ether " | grep -v 127.0.0.1 | cut -d\  -f2


















