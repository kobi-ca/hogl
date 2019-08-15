#!/usr/bin/env bash

./bootstrap
CC=/opt/intel/bin/icc CXX=/opt/intel/bin/icc CXXFLAGS="-Wall -O3 -g -std=c++11" ./configure --prefix=/usr/ --libdir=/usr/lib64

# for rpm on centos
# CC=/opt/intel/bin/icc CXX=/opt/intel/bin/icc make rpm