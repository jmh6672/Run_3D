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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2609;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t560;
// System.Object[]
struct ObjectU5BU5D_t488;
// System.Predicate`1<System.Object>
struct Predicate_1_t2254;
// System.Comparison`1<System.Object>
struct Comparison_1_t2260;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m17047_gshared (IndexedSet_1_t2609 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m17047(__this, method) (( void (*) (IndexedSet_1_t2609 *, const MethodInfo*))IndexedSet_1__ctor_m17047_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17049_gshared (IndexedSet_1_t2609 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17049(__this, method) (( Object_t * (*) (IndexedSet_1_t2609 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17049_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m17051_gshared (IndexedSet_1_t2609 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m17051(__this, ___item, method) (( void (*) (IndexedSet_1_t2609 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m17051_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m17053_gshared (IndexedSet_1_t2609 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m17053(__this, ___item, method) (( bool (*) (IndexedSet_1_t2609 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m17053_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m17055_gshared (IndexedSet_1_t2609 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m17055(__this, method) (( Object_t* (*) (IndexedSet_1_t2609 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m17055_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m17057_gshared (IndexedSet_1_t2609 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m17057(__this, method) (( void (*) (IndexedSet_1_t2609 *, const MethodInfo*))IndexedSet_1_Clear_m17057_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m17059_gshared (IndexedSet_1_t2609 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m17059(__this, ___item, method) (( bool (*) (IndexedSet_1_t2609 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m17059_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m17061_gshared (IndexedSet_1_t2609 * __this, ObjectU5BU5D_t488* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m17061(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2609 *, ObjectU5BU5D_t488*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m17061_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m17063_gshared (IndexedSet_1_t2609 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m17063(__this, method) (( int32_t (*) (IndexedSet_1_t2609 *, const MethodInfo*))IndexedSet_1_get_Count_m17063_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m17065_gshared (IndexedSet_1_t2609 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m17065(__this, method) (( bool (*) (IndexedSet_1_t2609 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m17065_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m17067_gshared (IndexedSet_1_t2609 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m17067(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2609 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m17067_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m17069_gshared (IndexedSet_1_t2609 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m17069(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2609 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m17069_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m17071_gshared (IndexedSet_1_t2609 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m17071(__this, ___index, method) (( void (*) (IndexedSet_1_t2609 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m17071_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m17073_gshared (IndexedSet_1_t2609 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m17073(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2609 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m17073_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m17075_gshared (IndexedSet_1_t2609 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m17075(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2609 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m17075_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m17077_gshared (IndexedSet_1_t2609 * __this, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m17077(__this, ___match, method) (( void (*) (IndexedSet_1_t2609 *, Predicate_1_t2254 *, const MethodInfo*))IndexedSet_1_RemoveAll_m17077_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m17078_gshared (IndexedSet_1_t2609 * __this, Comparison_1_t2260 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m17078(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2609 *, Comparison_1_t2260 *, const MethodInfo*))IndexedSet_1_Sort_m17078_gshared)(__this, ___sortLayoutFunction, method)
