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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m2212_gshared (Nullable_1_t459 * __this, DateTime_t51  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m2212(__this, ___value, method) (( void (*) (Nullable_1_t459 *, DateTime_t51 , const MethodInfo*))Nullable_1__ctor_m2212_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m13748_gshared (Nullable_1_t459 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m13748(__this, method) (( bool (*) (Nullable_1_t459 *, const MethodInfo*))Nullable_1_get_HasValue_m13748_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t51  Nullable_1_get_Value_m13749_gshared (Nullable_1_t459 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m13749(__this, method) (( DateTime_t51  (*) (Nullable_1_t459 *, const MethodInfo*))Nullable_1_get_Value_m13749_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m13750_gshared (Nullable_1_t459 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m13750(__this, ___other, method) (( bool (*) (Nullable_1_t459 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m13750_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m13751_gshared (Nullable_1_t459 * __this, Nullable_1_t459  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m13751(__this, ___other, method) (( bool (*) (Nullable_1_t459 *, Nullable_1_t459 , const MethodInfo*))Nullable_1_Equals_m13751_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m13752_gshared (Nullable_1_t459 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m13752(__this, method) (( int32_t (*) (Nullable_1_t459 *, const MethodInfo*))Nullable_1_GetHashCode_m13752_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m13753_gshared (Nullable_1_t459 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m13753(__this, method) (( String_t* (*) (Nullable_1_t459 *, const MethodInfo*))Nullable_1_ToString_m13753_gshared)(__this, method)
