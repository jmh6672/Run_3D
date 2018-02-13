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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3061;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m22344_gshared (DefaultComparer_t3061 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22344(__this, method) (( void (*) (DefaultComparer_t3061 *, const MethodInfo*))DefaultComparer__ctor_m22344_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22345_gshared (DefaultComparer_t3061 * __this, DateTime_t51  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22345(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3061 *, DateTime_t51 , const MethodInfo*))DefaultComparer_GetHashCode_m22345_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22346_gshared (DefaultComparer_t3061 * __this, DateTime_t51  ___x, DateTime_t51  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22346(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3061 *, DateTime_t51 , DateTime_t51 , const MethodInfo*))DefaultComparer_Equals_m22346_gshared)(__this, ___x, ___y, method)
