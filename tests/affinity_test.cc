/*
   Copyright (c) 2019, Max Krasnyansky <max.krasnyansky@gmail.com> 
   All rights reserved.
   
   Redistribution and use in source and binary forms, with or without modification,
   are permitted provided that the following conditions are met:
   
   1. Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.
   
   2. Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.
   
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
   THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
   FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
   AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "hogl/detail/utils.hpp"

#define BOOST_TEST_MODULE area_test 
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(all_zero)
{
    printf("all_zero test\n");
    pthread_t t = pthread_self();
    cpu_set_t mask = {0};
    int ret = hogl::setaffinity(t, mask);
    if (ret) {
        printf("ret is %d %s\n", ret, strerror(errno));
    }
    BOOST_ASSERT(ret == 0);
}

BOOST_AUTO_TEST_CASE(first_and_third)
{
    printf("first_and_third test\n");
    pthread_t t = pthread_self();
    cpu_set_t mask = {0};
    CPU_SET(0, &mask);
    CPU_SET(2, &mask);
    int ret = hogl::setaffinity(t, mask);
    if (ret) {
        printf("ret is %d %s\n", ret, strerror(errno));
    }
    BOOST_ASSERT(ret == 0);
}