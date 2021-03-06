// Licensed to Pioneers in Engineering under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  Pioneers in Engineering licenses
// this file to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
//  with the License.  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License

#ifndef NGL_FUNC_H_
#define NGL_FUNC_H_

#include <ngl_types_wrapper.h>

#include <stdint.h>

#include <ngl_error.h>
#include <ngl_obj.h>

ngl_declare_base(ngl_func);
ngl_declare_base(ngl_ex_func);
ngl_declare_base(ngl_vm_func);

void ngl_ex_func_init(ngl_func * func, ngl_ex_thunk * thunk);
void ngl_vm_func_init(ngl_func * func, ngl_buffer * code, ngl_uint stack_space);

ngl_opbunch *ngl_vm_func_get_code(ngl_vm_func * func);

#endif  // NGL_FUNC_H_
