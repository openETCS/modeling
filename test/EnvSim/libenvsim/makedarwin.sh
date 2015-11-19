#!/bin/bash
CFLAGS=""

mkdir -p build/darwin
cd build/darwin
cmake -D CMAKE_C_FLAGS="$CFLAGS" -D ENABLE_SCADE=true -D WITH_TCL_EXTENSION=true -D ENABLE_TESTS=false -DJIMTCL=$(pwd)/../../jimtcl ../../
make 

cp libenvsim.a ../../dist/darwin/
cp envsim.dylib ../../dist/darwin/

VERSION=$(cat ../../CMakeLists.txt | grep project | cut -d' ' -f 3)
echo -e "$VERSION\n$(date)" > ../../dist/darwin/VERSION
