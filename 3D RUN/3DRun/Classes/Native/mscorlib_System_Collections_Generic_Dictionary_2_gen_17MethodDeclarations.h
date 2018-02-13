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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2580;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2579;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3111;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3112;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1311;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2584;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2588;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m16673_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16673(__this, method) (( void (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2__ctor_m16673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16675_gshared (Dictionary_2_t2580 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16675(__this, ___comparer, method) (( void (*) (Dictionary_2_t2580 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16675_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16677_gshared (Dictionary_2_t2580 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16677(__this, ___capacity, method) (( void (*) (Dictionary_2_t2580 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16677_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16679_gshared (Dictionary_2_t2580 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16679(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2580 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))Dictionary_2__ctor_m16679_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16681_gshared (Dictionary_2_t2580 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16681(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2580 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16681_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16683_gshared (Dictionary_2_t2580 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16683(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2580 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16683_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16685_gshared (Dictionary_2_t2580 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16685(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2580 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16685_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16687_gshared (Dictionary_2_t2580 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16687(__this, ___key, method) (( bool (*) (Dictionary_2_t2580 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16687_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16689_gshared (Dictionary_2_t2580 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16689(__this, ___key, method) (( void (*) (Dictionary_2_t2580 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16689_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16691_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16691(__this, method) (( bool (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16691_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16693_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16693(__this, method) (( Object_t * (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16693_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16695_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16695(__this, method) (( bool (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16695_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16697_gshared (Dictionary_2_t2580 * __this, KeyValuePair_2_t2582  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16697(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2580 *, KeyValuePair_2_t2582 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16697_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16699_gshared (Dictionary_2_t2580 * __this, KeyValuePair_2_t2582  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16699(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2580 *, KeyValuePair_2_t2582 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16699_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16701_gshared (Dictionary_2_t2580 * __this, KeyValuePair_2U5BU5D_t3111* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16701(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2580 *, KeyValuePair_2U5BU5D_t3111*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16701_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16703_gshared (Dictionary_2_t2580 * __this, KeyValuePair_2_t2582  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16703(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2580 *, KeyValuePair_2_t2582 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16703_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16705_gshared (Dictionary_2_t2580 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16705(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2580 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16705_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16707_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16707(__this, method) (( Object_t * (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16707_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16709_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16709(__this, method) (( Object_t* (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16709_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16711_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16711(__this, method) (( Object_t * (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16711_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16713_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16713(__this, method) (( int32_t (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_get_Count_m16713_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m16715_gshared (Dictionary_2_t2580 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16715(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2580 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m16715_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16717_gshared (Dictionary_2_t2580 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2580 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m16717_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16719_gshared (Dictionary_2_t2580 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16719(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2580 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16719_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16721_gshared (Dictionary_2_t2580 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16721(__this, ___size, method) (( void (*) (Dictionary_2_t2580 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16721_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16723_gshared (Dictionary_2_t2580 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16723(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2580 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16723_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2582  Dictionary_2_make_pair_m16725_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16725(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2582  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m16725_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m16727_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16727(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m16727_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m16729_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16729(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m16729_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16731_gshared (Dictionary_2_t2580 * __this, KeyValuePair_2U5BU5D_t3111* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16731(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2580 *, KeyValuePair_2U5BU5D_t3111*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16731_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m16733_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16733(__this, method) (( void (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_Resize_m16733_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16735_gshared (Dictionary_2_t2580 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16735(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2580 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m16735_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m16737_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16737(__this, method) (( void (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_Clear_m16737_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16739_gshared (Dictionary_2_t2580 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16739(__this, ___key, method) (( bool (*) (Dictionary_2_t2580 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m16739_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16741_gshared (Dictionary_2_t2580 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16741(__this, ___value, method) (( bool (*) (Dictionary_2_t2580 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m16741_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16743_gshared (Dictionary_2_t2580 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16743(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2580 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))Dictionary_2_GetObjectData_m16743_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16745_gshared (Dictionary_2_t2580 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16745(__this, ___sender, method) (( void (*) (Dictionary_2_t2580 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16745_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16747_gshared (Dictionary_2_t2580 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16747(__this, ___key, method) (( bool (*) (Dictionary_2_t2580 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m16747_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16749_gshared (Dictionary_2_t2580 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16749(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2580 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m16749_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2584 * Dictionary_2_get_Keys_m16751_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16751(__this, method) (( KeyCollection_t2584 * (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_get_Keys_m16751_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2588 * Dictionary_2_get_Values_m16752_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16752(__this, method) (( ValueCollection_t2588 * (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_get_Values_m16752_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m16754_gshared (Dictionary_2_t2580 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16754(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2580 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16754_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m16756_gshared (Dictionary_2_t2580 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16756(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2580 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16756_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16758_gshared (Dictionary_2_t2580 * __this, KeyValuePair_2_t2582  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16758(__this, ___pair, method) (( bool (*) (Dictionary_2_t2580 *, KeyValuePair_2_t2582 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16758_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2586  Dictionary_2_GetEnumerator_m16759_gshared (Dictionary_2_t2580 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16759(__this, method) (( Enumerator_t2586  (*) (Dictionary_2_t2580 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16759_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1498  Dictionary_2_U3CCopyToU3Em__0_m16761_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16761(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1498  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16761_gshared)(__this /* static, unused */, ___key, ___value, method)
