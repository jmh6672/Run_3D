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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2442;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t508;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2289;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t560;
// System.Object[]
struct ObjectU5BU5D_t488;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m15060_gshared (HashSet_1_t2442 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m15060(__this, method) (( void (*) (HashSet_1_t2442 *, const MethodInfo*))HashSet_1__ctor_m15060_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m15062_gshared (HashSet_1_t2442 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m15062(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t2442 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m15062_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m15064_gshared (HashSet_1_t2442 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m15064(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2442 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))HashSet_1__ctor_m15064_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15066_gshared (HashSet_1_t2442 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15066(__this, method) (( Object_t* (*) (HashSet_1_t2442 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15068_gshared (HashSet_1_t2442 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15068(__this, method) (( bool (*) (HashSet_1_t2442 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15068_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15070_gshared (HashSet_1_t2442 * __this, ObjectU5BU5D_t488* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15070(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2442 *, ObjectU5BU5D_t488*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15070_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15072_gshared (HashSet_1_t2442 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15072(__this, ___item, method) (( void (*) (HashSet_1_t2442 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15072_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15074_gshared (HashSet_1_t2442 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15074(__this, method) (( Object_t * (*) (HashSet_1_t2442 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15074_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m15076_gshared (HashSet_1_t2442 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m15076(__this, method) (( int32_t (*) (HashSet_1_t2442 *, const MethodInfo*))HashSet_1_get_Count_m15076_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m15078_gshared (HashSet_1_t2442 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m15078(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2442 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m15078_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m15080_gshared (HashSet_1_t2442 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m15080(__this, ___size, method) (( void (*) (HashSet_1_t2442 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m15080_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m15082_gshared (HashSet_1_t2442 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m15082(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2442 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m15082_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m15084_gshared (HashSet_1_t2442 * __this, ObjectU5BU5D_t488* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m15084(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2442 *, ObjectU5BU5D_t488*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m15084_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m15086_gshared (HashSet_1_t2442 * __this, ObjectU5BU5D_t488* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m15086(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2442 *, ObjectU5BU5D_t488*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m15086_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m15088_gshared (HashSet_1_t2442 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m15088(__this, method) (( void (*) (HashSet_1_t2442 *, const MethodInfo*))HashSet_1_Resize_m15088_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m15090_gshared (HashSet_1_t2442 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m15090(__this, ___index, method) (( int32_t (*) (HashSet_1_t2442 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m15090_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m15092_gshared (HashSet_1_t2442 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m15092(__this, ___item, method) (( int32_t (*) (HashSet_1_t2442 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m15092_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m15093_gshared (HashSet_1_t2442 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m15093(__this, ___item, method) (( bool (*) (HashSet_1_t2442 *, Object_t *, const MethodInfo*))HashSet_1_Add_m15093_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m15095_gshared (HashSet_1_t2442 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m15095(__this, method) (( void (*) (HashSet_1_t2442 *, const MethodInfo*))HashSet_1_Clear_m15095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m15097_gshared (HashSet_1_t2442 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m15097(__this, ___item, method) (( bool (*) (HashSet_1_t2442 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m15097_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m15099_gshared (HashSet_1_t2442 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m15099(__this, ___item, method) (( bool (*) (HashSet_1_t2442 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m15099_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m15101_gshared (HashSet_1_t2442 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m15101(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2442 *, SerializationInfo_t1108 *, StreamingContext_t1109 , const MethodInfo*))HashSet_1_GetObjectData_m15101_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m15103_gshared (HashSet_1_t2442 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m15103(__this, ___sender, method) (( void (*) (HashSet_1_t2442 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m15103_gshared)(__this, ___sender, method)
