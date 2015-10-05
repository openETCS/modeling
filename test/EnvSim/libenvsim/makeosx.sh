#!/bin/bash

mkdir -p build/osx
cd build/osx
cmake -D ENABLE_SCADE=false -D WITH_TCL_EXTENSION=true -D ENABLE_TESTS=true -DJIMTCL=$(pwd)/../../jimtcl ../../
make 

cp libenvsim.a ../../dist/osx/
cp envsim.dylib ../../dist/osx/
