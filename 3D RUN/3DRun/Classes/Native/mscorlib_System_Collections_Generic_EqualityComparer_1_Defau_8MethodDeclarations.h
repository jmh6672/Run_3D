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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2784;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m19548_gshared (DefaultComparer_t2784 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19548(__this, method) (( void (*) (DefaultComparer_t2784 *, const MethodInfo*))DefaultComparer__ctor_m19548_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19549_gshared (DefaultComparer_t2784 * __this, Vector3_t417  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19549(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2784 *, Vector3_t417 , const MethodInfo*))DefaultComparer_GetHashCode_m19549_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19550_gshared (DefaultComparer_t2784 * __this, Vector3_t417  ___x, Vector3_t417  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19550(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2784 *, Vector3_t417 , Vector3_t417 , const MethodInfo*))DefaultComparer_Equals_m19550_gshared)(__this, ___x, ___y, method)
