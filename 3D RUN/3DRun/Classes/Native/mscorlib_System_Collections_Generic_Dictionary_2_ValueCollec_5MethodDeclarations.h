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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>
struct ValueCollection_t2298;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>
struct Dictionary_2_t2287;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t3079;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.UInt32[]
struct UInt32U5BU5D_t1147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m13361_gshared (ValueCollection_t2298 * __this, Dictionary_2_t2287 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m13361(__this, ___dictionary, method) (( void (*) (ValueCollection_t2298 *, Dictionary_2_t2287 *, const MethodInfo*))ValueCollection__ctor_m13361_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13362_gshared (ValueCollection_t2298 * __this, uint32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13362(__this, ___item, method) (( void (*) (ValueCollection_t2298 *, uint32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13363_gshared (ValueCollection_t2298 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13363(__this, method) (( void (*) (ValueCollection_t2298 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13364_gshared (ValueCollection_t2298 * __this, uint32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13364(__this, ___item, method) (( bool (*) (ValueCollection_t2298 *, uint32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13364_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13365_gshared (ValueCollection_t2298 * __this, uint32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13365(__this, ___item, method) (( bool (*) (ValueCollection_t2298 *, uint32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13365_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13366_gshared (ValueCollection_t2298 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13366(__this, method) (( Object_t* (*) (ValueCollection_t2298 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13366_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13367_gshared (ValueCollection_t2298 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m13367(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2298 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m13367_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13368_gshared (ValueCollection_t2298 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13368(__this, method) (( Object_t * (*) (ValueCollection_t2298 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13369_gshared (ValueCollection_t2298 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13369(__this, method) (( bool (*) (ValueCollection_t2298 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13369_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13370_gshared (ValueCollection_t2298 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13370(__this, method) (( bool (*) (ValueCollection_t2298 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13370_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13371_gshared (ValueCollection_t2298 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m13371(__this, method) (( Object_t * (*) (ValueCollection_t2298 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m13371_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13372_gshared (ValueCollection_t2298 * __this, UInt32U5BU5D_t1147* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m13372(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2298 *, UInt32U5BU5D_t1147*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m13372_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::GetEnumerator()
extern "C" Enumerator_t2299  ValueCollection_GetEnumerator_m13373_gshared (ValueCollection_t2298 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m13373(__this, method) (( Enumerator_t2299  (*) (ValueCollection_t2298 *, const MethodInfo*))ValueCollection_GetEnumerator_m13373_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13374_gshared (ValueCollection_t2298 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m13374(__this, method) (( int32_t (*) (ValueCollection_t2298 *, const MethodInfo*))ValueCollection_get_Count_m13374_gshared)(__this, method)
