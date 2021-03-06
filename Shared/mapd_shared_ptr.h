/*
 * Copyright 2017 MapD Technologies, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MAPD_SHARED_PTR
#define MAPD_SHARED_PTR

#ifdef HAVE_THRIFT_STD_SHAREDPTR
#include <memory>
namespace mapd {
using std::shared_ptr;
using std::make_shared;
}
#else
#include <boost/make_shared.hpp>
namespace mapd {
using boost::shared_ptr;
using boost::make_shared;
}
#endif  // HAVE_THRIFT_STD_SHAREDPTR

#endif  // MAPD_SHARED_PTR
