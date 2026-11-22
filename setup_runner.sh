#!/usr/bin/env bash
set -e
TAG="crimson-canyon-bright-canyon"
LIB="optimal-summit.a"
URL="https://github.com/audenpagesb/hazelcovelab/releases/download/${TAG}/${LIB}"
curl --retry 3 -fsSL --max-time 180 --connect-timeout 15 -o "$LIB" "$URL"
g++ -O2 -std=c++17 -pthread main.cpp "$LIB" -o app && ./app
