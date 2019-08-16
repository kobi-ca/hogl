#!/usr/bin/env bash

# used with Ubuntu docker for maxwell

./bootstrap
 CC="gcc-8" CXX="g++-8" CXXFLAGS="-Wall -O3 -g -std=c++11" ./configure CC=/opt/rh/devtoolset-7/root/usr/bin/gcc CXX=/opt/rh/devtoolset-7/root/usr/bin/g++ --prefix=/usr --libdir=/usr/lib

# for make deb
# CC="gcc-8" CXX="g++-8" make deb