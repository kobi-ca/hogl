#!/usr/bin/env bash

./bootstrap
CC=/opt/rh/devtoolset-7/root/usr/bin/gcc CXX=/opt/rh/devtoolset-7/root/usr/bin/g++ CXXFLAGS="-Wall -O3 -g -std=c++11" ./configure --prefix=/usr --libdir=/usr/lib64

# make rpm for Centos
# CC=/opt/rh/devtoolset-7/root/usr/bin/gcc CXX=/opt/rh/devtoolset-7/root/usr/bin/g++ make rpm
