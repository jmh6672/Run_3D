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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2951;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2289;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3170;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3171;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1311;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2956;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2960;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m21318_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21318(__this, method) (( void (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2__ctor_m21318_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21319_gshared (Dictionary_2_t2951 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21319(__this, ___comparer, method) (( void (*) (Dictionary_2_t2951 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21321_gshared (Dictionary_2_t2951 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21321(__this, ___capacity, method) (( void (*) (Dictionary_2_t2951 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21321_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21323_gshared (Dictionary_2_t2951 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21323(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2951 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))Dictionary_2__ctor_m21323_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21325_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21325(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21325_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21327_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21327(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2951 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21327_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21329_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21329(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2951 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21329_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21331_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21331(__this, ___key, method) (( bool (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21331_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21333_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21333(__this, ___key, method) (( void (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21333_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21335_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21335(__this, method) (( bool (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21337_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21337(__this, method) (( Object_t * (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21337_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21339_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21339(__this, method) (( bool (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21341_gshared (Dictionary_2_t2951 * __this, KeyValuePair_2_t2953  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21341(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2951 *, KeyValuePair_2_t2953 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21341_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21343_gshared (Dictionary_2_t2951 * __this, KeyValuePair_2_t2953  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21343(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2951 *, KeyValuePair_2_t2953 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21343_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21345_gshared (Dictionary_2_t2951 * __this, KeyValuePair_2U5BU5D_t3170* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21345(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2951 *, KeyValuePair_2U5BU5D_t3170*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21345_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21347_gshared (Dictionary_2_t2951 * __this, KeyValuePair_2_t2953  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21347(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2951 *, KeyValuePair_2_t2953 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21347_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21349_gshared (Dictionary_2_t2951 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21349(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2951 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21349_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21351_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21351(__this, method) (( Object_t * (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21351_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21353_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21353(__this, method) (( Object_t* (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21353_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21355_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21355(__this, method) (( Object_t * (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21355_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21357_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21357(__this, method) (( int32_t (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_get_Count_m21357_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m21359_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21359(__this, ___key, method) (( bool (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21359_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21361_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21361(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2951 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m21361_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21363_gshared (Dictionary_2_t2951 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21363(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2951 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21363_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21365_gshared (Dictionary_2_t2951 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21365(__this, ___size, method) (( void (*) (Dictionary_2_t2951 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21365_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21367_gshared (Dictionary_2_t2951 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21367(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2951 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21367_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2953  Dictionary_2_make_pair_m21369_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21369(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2953  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m21369_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21371_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21371(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m21371_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m21373_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21373(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m21373_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21375_gshared (Dictionary_2_t2951 * __this, KeyValuePair_2U5BU5D_t3170* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21375(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2951 *, KeyValuePair_2U5BU5D_t3170*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21375_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m21377_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21377(__this, method) (( void (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_Resize_m21377_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21379_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21379(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2951 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m21379_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m21381_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21381(__this, method) (( void (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_Clear_m21381_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21383_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21383(__this, ___key, method) (( bool (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21383_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21385_gshared (Dictionary_2_t2951 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21385(__this, ___value, method) (( bool (*) (Dictionary_2_t2951 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m21385_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21387_gshared (Dictionary_2_t2951 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21387(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2951 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))Dictionary_2_GetObjectData_m21387_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21389_gshared (Dictionary_2_t2951 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21389(__this, ___sender, method) (( void (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21389_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21391_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21391(__this, ___key, method) (( bool (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21391_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21393_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21393(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2951 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m21393_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2956 * Dictionary_2_get_Keys_m21395_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21395(__this, method) (( KeyCollection_t2956 * (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_get_Keys_m21395_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2960 * Dictionary_2_get_Values_m21397_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21397(__this, method) (( ValueCollection_t2960 * (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_get_Values_m21397_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21399_gshared (Dictionary_2_t2951 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21399(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21399_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m21401_gshared (Dictionary_2_t2951 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21401(__this, ___value, method) (( bool (*) (Dictionary_2_t2951 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21401_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21403_gshared (Dictionary_2_t2951 * __this, KeyValuePair_2_t2953  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21403(__this, ___pair, method) (( bool (*) (Dictionary_2_t2951 *, KeyValuePair_2_t2953 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21403_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2958  Dictionary_2_GetEnumerator_m21405_gshared (Dictionary_2_t2951 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21405(__this, method) (( Enumerator_t2958  (*) (Dictionary_2_t2951 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21405_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1498  Dictionary_2_U3CCopyToU3Em__0_m21407_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21407(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1498  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21407_gshared)(__this /* static, unused */, ___key, ___value, method)
