#!/bin/bash
CC=i686-w64-mingw32-gcc.exe
#CC=gcc
#export PATH=$(pwd)/build/Msys/mingw_w64/bin:$PATH

mkdir -p build/win32
cd build/win32
cmake -D CMAKE_C_COMPILER=$CC -D WITH_JIM=true -D JIMTCL=$(pwd)/../jimtcl_win32 ../../
make

cp libenvsim.a ../../dist/win32/
