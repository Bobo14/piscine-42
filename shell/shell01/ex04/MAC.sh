#!bin/sh

ifconfig | grep "ether" | cut -d " " -f 10-10
