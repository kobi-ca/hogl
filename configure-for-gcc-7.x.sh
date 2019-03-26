#!/bin/sh


./bootstrap
CXXFLAGS="-Wall -O3 -g -std=c++11" ./configure CC=/opt/rh/devtoolset-7/root/usr/bin/gcc CXX=/opt/rh/devtoolset-7/root/usr/bin/g++ --prefix=/usr --libdir=/usr/lib64
