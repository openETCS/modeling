#!/bin/bash

CFLAGS="-m64"

mkdir -p build/elf_x64
cd build/elf_x64
cmake -D CMAKE_C_FLAGS="$CFLAGS" -D ENABLE_SCADE=true -D WITH_TCL_EXTENSION=false -D ENABLE_TESTS=false -DJIMTCL=$(pwd)/../../jimtcl ../../
make 

cp libenvsim.a ../../dist/elf_x64/

VERSION=$(cat ../../CMakeLists.txt | grep project | cut -d' ' -f 3)
echo -e "$VERSION\n$(date)" > ../../dist/elf_x64/VERSION
