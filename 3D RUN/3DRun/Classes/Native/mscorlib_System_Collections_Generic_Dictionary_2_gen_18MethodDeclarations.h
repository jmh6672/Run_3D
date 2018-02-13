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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2289;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3115;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3116;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1311;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2614;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17079_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17079(__this, method) (( void (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2__ctor_m17079_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17080_gshared (Dictionary_2_t2610 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17080(__this, ___comparer, method) (( void (*) (Dictionary_2_t2610 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17080_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17081_gshared (Dictionary_2_t2610 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17081(__this, ___capacity, method) (( void (*) (Dictionary_2_t2610 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17082_gshared (Dictionary_2_t2610 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17082(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2610 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))Dictionary_2__ctor_m17082_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17083_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17083(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17083_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17084_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17084(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2610 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17084_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17085_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17085(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2610 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17085_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17086_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17086(__this, ___key, method) (( bool (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17086_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17087_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17087(__this, ___key, method) (( void (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17087_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17088_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17088(__this, method) (( bool (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17088_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17089_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17089(__this, method) (( Object_t * (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17089_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17090_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17090(__this, method) (( bool (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17090_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17091_gshared (Dictionary_2_t2610 * __this, KeyValuePair_2_t2612  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17091(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2610 *, KeyValuePair_2_t2612 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17091_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17092_gshared (Dictionary_2_t2610 * __this, KeyValuePair_2_t2612  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17092(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2610 *, KeyValuePair_2_t2612 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17092_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17093_gshared (Dictionary_2_t2610 * __this, KeyValuePair_2U5BU5D_t3115* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17093(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2610 *, KeyValuePair_2U5BU5D_t3115*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17093_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17094_gshared (Dictionary_2_t2610 * __this, KeyValuePair_2_t2612  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17094(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2610 *, KeyValuePair_2_t2612 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17094_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17095_gshared (Dictionary_2_t2610 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17095(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2610 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17095_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17096_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17096(__this, method) (( Object_t * (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17096_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17097_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17097(__this, method) (( Object_t* (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17097_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17098_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17098(__this, method) (( Object_t * (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17099_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17099(__this, method) (( int32_t (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_get_Count_m17099_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17100_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17100(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17100_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17101_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17101(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2610 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m17101_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17102_gshared (Dictionary_2_t2610 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17102(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2610 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17102_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17103_gshared (Dictionary_2_t2610 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17103(__this, ___size, method) (( void (*) (Dictionary_2_t2610 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17103_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17104_gshared (Dictionary_2_t2610 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17104(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2610 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17104_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2612  Dictionary_2_make_pair_m17105_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17105(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2612  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m17105_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17106_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17106(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m17106_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17107_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17107(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m17107_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17108_gshared (Dictionary_2_t2610 * __this, KeyValuePair_2U5BU5D_t3115* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17108(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2610 *, KeyValuePair_2U5BU5D_t3115*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17108_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17109_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17109(__this, method) (( void (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_Resize_m17109_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17110_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17110(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2610 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m17110_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17111_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17111(__this, method) (( void (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_Clear_m17111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17112_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17112(__this, ___key, method) (( bool (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17112_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17113_gshared (Dictionary_2_t2610 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17113(__this, ___value, method) (( bool (*) (Dictionary_2_t2610 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m17113_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17114_gshared (Dictionary_2_t2610 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17114(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2610 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))Dictionary_2_GetObjectData_m17114_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17115_gshared (Dictionary_2_t2610 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17115(__this, ___sender, method) (( void (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17115_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17116_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17116(__this, ___key, method) (( bool (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17116_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17117_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17117(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2610 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17117_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2614 * Dictionary_2_get_Keys_m17118_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17118(__this, method) (( KeyCollection_t2614 * (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_get_Keys_m17118_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2618 * Dictionary_2_get_Values_m17119_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17119(__this, method) (( ValueCollection_t2618 * (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_get_Values_m17119_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17120_gshared (Dictionary_2_t2610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17120(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17120_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17121_gshared (Dictionary_2_t2610 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17121(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2610 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17121_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17122_gshared (Dictionary_2_t2610 * __this, KeyValuePair_2_t2612  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17122(__this, ___pair, method) (( bool (*) (Dictionary_2_t2610 *, KeyValuePair_2_t2612 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17122_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2616  Dictionary_2_GetEnumerator_m17123_gshared (Dictionary_2_t2610 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17123(__this, method) (( Enumerator_t2616  (*) (Dictionary_2_t2610 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17123_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1498  Dictionary_2_U3CCopyToU3Em__0_m17124_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17124(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1498  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17124_gshared)(__this /* static, unused */, ___key, ___value, method)
