#!/bin/bash

mkdir -p build/darwin
cd build/darwin
cmake -D ENABLE_SCADE=true -D WITH_TCL_EXTENSION=true -D ENABLE_TESTS=false -DJIMTCL=$(pwd)/../../jimtcl ../../
make 

cp libenvsim.a ../../dist/darwin/
cp envsim.dylib ../../dist/darwin/
