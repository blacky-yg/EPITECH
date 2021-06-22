#!/bin/sh

cd build
cmake .. -G "Unix Makefiles"
cmake --build .
cp bomberman ..