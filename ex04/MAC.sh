#!/bin/bash
ifconfig | grep "ether" | sed 's/\ether//g; s/[[:space:]]//g'
