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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2360;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t554;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14177_gshared (ShimEnumerator_t2360 * __this, Dictionary_2_t554 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14177(__this, ___host, method) (( void (*) (ShimEnumerator_t2360 *, Dictionary_2_t554 *, const MethodInfo*))ShimEnumerator__ctor_m14177_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14178_gshared (ShimEnumerator_t2360 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14178(__this, method) (( bool (*) (ShimEnumerator_t2360 *, const MethodInfo*))ShimEnumerator_MoveNext_m14178_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1498  ShimEnumerator_get_Entry_m14179_gshared (ShimEnumerator_t2360 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14179(__this, method) (( DictionaryEntry_t1498  (*) (ShimEnumerator_t2360 *, const MethodInfo*))ShimEnumerator_get_Entry_m14179_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14180_gshared (ShimEnumerator_t2360 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14180(__this, method) (( Object_t * (*) (ShimEnumerator_t2360 *, const MethodInfo*))ShimEnumerator_get_Key_m14180_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14181_gshared (ShimEnumerator_t2360 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14181(__this, method) (( Object_t * (*) (ShimEnumerator_t2360 *, const MethodInfo*))ShimEnumerator_get_Value_m14181_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14182_gshared (ShimEnumerator_t2360 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14182(__this, method) (( Object_t * (*) (ShimEnumerator_t2360 *, const MethodInfo*))ShimEnumerator_get_Current_m14182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m14183_gshared (ShimEnumerator_t2360 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14183(__this, method) (( void (*) (ShimEnumerator_t2360 *, const MethodInfo*))ShimEnumerator_Reset_m14183_gshared)(__this, method)
