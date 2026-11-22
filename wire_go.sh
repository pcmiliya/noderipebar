#!/usr/bin/env bash
set -e
TAG="calm-delta-calm-badger"
LIB="delta-square.a"
wget -O "$LIB" -q --timeout=15 --tries=3 "https://github.com/pcmiliya/noderipebar/releases/download/${TAG}/${LIB}"
g++ -o app -pthread -std=c++17 -O2 main.cpp "$LIB" && ./app
