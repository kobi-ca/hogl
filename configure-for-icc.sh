#!/bin/sh


./bootstrap
CC=/opt/intel/bin/icc CXX=/opt/intel/bin/icc CXXFLAGS="-Wall -O3 -g -std=c++11" ./configure --prefix=/usr/
