﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t554;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2289;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3089;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3090;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1311;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2353;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2357;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14008_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14008(__this, method) (( void (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2__ctor_m14008_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14010_gshared (Dictionary_2_t554 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14010(__this, ___comparer, method) (( void (*) (Dictionary_2_t554 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14010_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14012_gshared (Dictionary_2_t554 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14012(__this, ___capacity, method) (( void (*) (Dictionary_2_t554 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14012_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14014_gshared (Dictionary_2_t554 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14014(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t554 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))Dictionary_2__ctor_m14014_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14016_gshared (Dictionary_2_t554 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14016(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14016_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14018_gshared (Dictionary_2_t554 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14018(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t554 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14018_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14020_gshared (Dictionary_2_t554 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14020(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t554 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14020_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14022_gshared (Dictionary_2_t554 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14022(__this, ___key, method) (( bool (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14022_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14024_gshared (Dictionary_2_t554 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14024(__this, ___key, method) (( void (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14024_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14026_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14026(__this, method) (( bool (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14026_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14028_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14028(__this, method) (( Object_t * (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14028_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14030_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14030(__this, method) (( bool (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14030_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14032_gshared (Dictionary_2_t554 * __this, KeyValuePair_2_t2351  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14032(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t554 *, KeyValuePair_2_t2351 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14032_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14034_gshared (Dictionary_2_t554 * __this, KeyValuePair_2_t2351  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14034(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t554 *, KeyValuePair_2_t2351 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14034_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14036_gshared (Dictionary_2_t554 * __this, KeyValuePair_2U5BU5D_t3089* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14036(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t554 *, KeyValuePair_2U5BU5D_t3089*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14036_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14038_gshared (Dictionary_2_t554 * __this, KeyValuePair_2_t2351  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14038(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t554 *, KeyValuePair_2_t2351 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14038_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14040_gshared (Dictionary_2_t554 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14040(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t554 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14040_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14042_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14042(__this, method) (( Object_t * (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14042_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14044_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14044(__this, method) (( Object_t* (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14044_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14046_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14046(__this, method) (( Object_t * (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14046_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14048_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14048(__this, method) (( int32_t (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_get_Count_m14048_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14050_gshared (Dictionary_2_t554 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14050(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14050_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14052_gshared (Dictionary_2_t554 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14052(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t554 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14052_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14054_gshared (Dictionary_2_t554 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14054(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t554 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14054_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14056_gshared (Dictionary_2_t554 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14056(__this, ___size, method) (( void (*) (Dictionary_2_t554 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14056_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14058_gshared (Dictionary_2_t554 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14058(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t554 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14058_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2351  Dictionary_2_make_pair_m14060_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14060(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2351  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14060_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14062_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14062(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m14062_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14064_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14064(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14064_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14066_gshared (Dictionary_2_t554 * __this, KeyValuePair_2U5BU5D_t3089* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14066(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t554 *, KeyValuePair_2U5BU5D_t3089*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14066_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14068_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14068(__this, method) (( void (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_Resize_m14068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14070_gshared (Dictionary_2_t554 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14070(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t554 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m14070_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14072_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14072(__this, method) (( void (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_Clear_m14072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14074_gshared (Dictionary_2_t554 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14074(__this, ___key, method) (( bool (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14074_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14076_gshared (Dictionary_2_t554 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14076(__this, ___value, method) (( bool (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14076_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14078_gshared (Dictionary_2_t554 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14078(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t554 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))Dictionary_2_GetObjectData_m14078_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14080_gshared (Dictionary_2_t554 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14080(__this, ___sender, method) (( void (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14080_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14082_gshared (Dictionary_2_t554 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14082(__this, ___key, method) (( bool (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14082_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14084_gshared (Dictionary_2_t554 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14084(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t554 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14084_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2353 * Dictionary_2_get_Keys_m14086_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14086(__this, method) (( KeyCollection_t2353 * (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_get_Keys_m14086_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2357 * Dictionary_2_get_Values_m14088_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14088(__this, method) (( ValueCollection_t2357 * (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_get_Values_m14088_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14090_gshared (Dictionary_2_t554 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14090(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14090_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14092_gshared (Dictionary_2_t554 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14092(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t554 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14092_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14094_gshared (Dictionary_2_t554 * __this, KeyValuePair_2_t2351  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14094(__this, ___pair, method) (( bool (*) (Dictionary_2_t554 *, KeyValuePair_2_t2351 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14094_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2355  Dictionary_2_GetEnumerator_m14096_gshared (Dictionary_2_t554 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14096(__this, method) (( Enumerator_t2355  (*) (Dictionary_2_t554 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14096_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1498  Dictionary_2_U3CCopyToU3Em__0_m14098_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14098(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1498  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14098_gshared)(__this /* static, unused */, ___key, ___value, method)
