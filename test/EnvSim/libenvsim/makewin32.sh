#!/bin/bash
CC=i686-w64-mingw32-gcc.exe

mkdir -p build/win32
cd build/win32
cmake -D CMAKE_C_COMPILER=$CC -D JIMTCL=$(pwd)/../jimtcl_win32 -D WITH_TCL_EXTENSION=true -D TCLSTUB=$(pwd)/../libtclstub85.a ../../
make 

cp libenvsim.a ../../dist/win32/
cp envsim.dll ../../dist/win32
