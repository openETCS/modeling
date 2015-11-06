#!/bin/bash
CC=i686-w64-mingw32-gcc.exe

mkdir -p build/win32
cd build/win32
cmake -D CMAKE_C_FLAGS=-g -D CMAKE_C_COMPILER=$CC -D ENABLE_SCADE=true -D JIMTCL=$(pwd)/../jimtcl_win32 -D WITH_TCL_EXTENSION=true -D TCLSTUB=$(pwd)/../libtclstub85.a ../../
make 

cp libenvsim.a ../../dist/win32/
cp envsim.dll ../../dist/win32

VERSION=$(cat ../../CMakeLists.txt | grep project | cut -d' ' -f 3)
echo -e "$VERSION\n$(date)" > ../../dist/win32/VERSION
