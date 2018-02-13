#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
struct DefaultComparer_t2595;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m16859_gshared (DefaultComparer_t2595 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16859(__this, method) (( void (*) (DefaultComparer_t2595 *, const MethodInfo*))DefaultComparer__ctor_m16859_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16860_gshared (DefaultComparer_t2595 * __this, int32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16860(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2595 *, int32_t, const MethodInfo*))DefaultComparer_GetHashCode_m16860_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16861_gshared (DefaultComparer_t2595 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16861(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2595 *, int32_t, int32_t, const MethodInfo*))DefaultComparer_Equals_m16861_gshared)(__this, ___x, ___y, method)
