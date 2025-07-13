#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename.cpp>"
    exit 1
fi

filename=$1
basename=${filename%.cpp}

g++ -std=c++17 -O2 -Wall -Wextra -o "$basename" "$filename"

if [ $? -eq 0 ]; then
    echo "Compilation successful. Running $basename:"
    echo "------------------------"
    ./"$basename"
else
    echo "Compilation failed."
    exit 1
fi