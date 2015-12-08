#!/bin/bash

CFLAGS="-m64 -I/usr/include/tcl/"

mkdir -p build/elf_x64
cd build/elf_x64
cmake -D CMAKE_C_FLAGS="$CFLAGS" -D ENABLE_SCADE=true -D WITH_TCL_EXTENSION=true -D TCLSTUB=tclstub8.6 -D ENABLE_TESTS=false -DJIMTCL=$(pwd)/../../jimtcl ../../
make 

cp libenvsim.a ../../dist/elf_x64/
cp envsim.so ../../dist/elf_x64/

VERSION=$(cat ../../CMakeLists.txt | grep project | cut -d' ' -f 3)
echo -e "$VERSION\n$(date)" > ../../dist/elf_x64/VERSION
