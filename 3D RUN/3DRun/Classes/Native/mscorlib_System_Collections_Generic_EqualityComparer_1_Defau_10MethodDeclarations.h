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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2817;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m19995_gshared (DefaultComparer_t2817 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19995(__this, method) (( void (*) (DefaultComparer_t2817 *, const MethodInfo*))DefaultComparer__ctor_m19995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19996_gshared (DefaultComparer_t2817 * __this, Vector2_t418  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19996(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2817 *, Vector2_t418 , const MethodInfo*))DefaultComparer_GetHashCode_m19996_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19997_gshared (DefaultComparer_t2817 * __this, Vector2_t418  ___x, Vector2_t418  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19997(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2817 *, Vector2_t418 , Vector2_t418 , const MethodInfo*))DefaultComparer_Equals_m19997_gshared)(__this, ___x, ___y, method)
