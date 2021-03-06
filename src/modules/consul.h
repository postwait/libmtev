/*
 * Copyright (c) 2019, Circonus, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name Circonus, Inc. nor the names of its contributors
 *       may be used to endorse or promote products derived from this
 *       software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef MTEV_MODULES_CONSUL_H
#define MTEV_MODULES_CONSUL_H

#include <mtev_defines.h>
#include <mtev_hooks.h>

#ifdef __cplusplus
extern "C" {
#endif

MTEV_RUNTIME_RESOLVE(mtev_consul_kv_attach, mtev_consul_kv_attach_function, void *,
                     (const char *path, void (*witness)(const char *, uint8_t *, size_t, uint32_t)),
                     (path, witness))
MTEV_RUNTIME_AVAIL(mtev_consul_kv_attach, mtev_consul_kv_attach_function) 

MTEV_RUNTIME_RESOLVE(mtev_consul_kv_detach, mtev_consul_kv_detach_function, void *,
                     (void *handle), (handle))
MTEV_RUNTIME_AVAIL(mtev_consul_kv_detach, mtev_consul_kv_detach_function) 

#ifdef __cplusplus
}
#endif

#endif
