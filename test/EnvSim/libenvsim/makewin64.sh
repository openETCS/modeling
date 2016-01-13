#!/bin/bash
CC=/bin/x86_64-w64-mingw32-gcc.exe
CFLAGS=""

mkdir -p build/win64
cd build/win64
cmake -D CMAKE_C_FLAGS="$CFLAGS" -D CMAKE_C_COMPILER=$CC -D ENABLE_SCADE=true -G "MinGW Makefiles" ../../
make 

cp libenvsim.a ../../dist/win64/
cp envsim.dll ../../dist/win64

VERSION=$(cat ../../CMakeLists.txt | grep project | cut -d' ' -f 3)
echo -e "$VERSION\n$(date)" > ../../dist/win64/VERSION
