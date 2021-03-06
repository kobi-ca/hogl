/*
   Copyright (c) 2015, Max Krasnyansky <max.krasnyansky@gmail.com> 
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

/**
 * @file hogl/engine.hpp
 * Default engine API.
 */
#ifndef HOGL_ENGINE_HPP
#define HOGL_ENGINE_HPP

#include <hogl/detail/engine.hpp>

namespace hogl {

/**
 * Default engine
 */
extern engine *default_engine;

/**
 * Default ring buffer
 */
extern ringbuf default_ring;

/**
 * Default ring options.
 * Weak symbol. Can be overriden by user app.
 */
extern ringbuf::options default_ring_options;

/**
 * Init and activate default engine.
 * @warn Must be called before any other top level functions
 */
void activate(output &out, const engine::options &engine_opts = engine::default_options);

/**
 * Deactivate default engine.
 * @warn Must be called before terminating the process
 */
void deactivate();

} // namespace hogl

#endif // HOGL_ENGINE_HPP
