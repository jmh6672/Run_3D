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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2610;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17157_gshared (Enumerator_t2616 * __this, Dictionary_2_t2610 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17157(__this, ___dictionary, method) (( void (*) (Enumerator_t2616 *, Dictionary_2_t2610 *, const MethodInfo*))Enumerator__ctor_m17157_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17158_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17158(__this, method) (( Object_t * (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17158_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m17159_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m17159(__this, method) (( void (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m17159_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1498  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17160_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17160(__this, method) (( DictionaryEntry_t1498  (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17160_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17161_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17161(__this, method) (( Object_t * (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17162_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17162(__this, method) (( Object_t * (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17163_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17163(__this, method) (( bool (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_MoveNext_m17163_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2612  Enumerator_get_Current_m17164_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17164(__this, method) (( KeyValuePair_2_t2612  (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_get_Current_m17164_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17165_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17165(__this, method) (( Object_t * (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_get_CurrentKey_m17165_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m17166_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17166(__this, method) (( int32_t (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_get_CurrentValue_m17166_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m17167_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_Reset_m17167(__this, method) (( void (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_Reset_m17167_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m17168_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17168(__this, method) (( void (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_VerifyState_m17168_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17169_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17169(__this, method) (( void (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_VerifyCurrent_m17169_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m17170_gshared (Enumerator_t2616 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17170(__this, method) (( void (*) (Enumerator_t2616 *, const MethodInfo*))Enumerator_Dispose_m17170_gshared)(__this, method)
