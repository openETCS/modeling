#!/bin/bash

mkdir -p build/elf_x86
cd build/elf_x86
cmake -D ENABLE_SCADE=true -D WITH_TCL_EXTENSION=false -D ENABLE_TESTS=false -DJIMTCL=$(pwd)/../../jimtcl ../../
make 

cp libenvsim.a ../../dist/elf_x86/
#cp envsim.so ../../dist/elf_x86/

VERSION=$(cat ../../CMakeLists.txt | grep project | cut -d' ' -f 3)
echo -e "$VERSION\n$(date)" > ../../dist/elf_x86/VERSION
