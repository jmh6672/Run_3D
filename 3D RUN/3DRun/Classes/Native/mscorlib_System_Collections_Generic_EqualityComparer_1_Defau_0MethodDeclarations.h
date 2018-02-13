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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>
struct DefaultComparer_t2306;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::.ctor()
extern "C" void DefaultComparer__ctor_m13414_gshared (DefaultComparer_t2306 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13414(__this, method) (( void (*) (DefaultComparer_t2306 *, const MethodInfo*))DefaultComparer__ctor_m13414_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13415_gshared (DefaultComparer_t2306 * __this, uint32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13415(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2306 *, uint32_t, const MethodInfo*))DefaultComparer_GetHashCode_m13415_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13416_gshared (DefaultComparer_t2306 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13416(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2306 *, uint32_t, uint32_t, const MethodInfo*))DefaultComparer_Equals_m13416_gshared)(__this, ___x, ___y, method)
