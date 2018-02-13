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

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t1638;
// System.Collections.Hashtable
struct Hashtable_t1236;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1499;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1311;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
extern "C" void SyncHashtable__ctor_m9027 (SyncHashtable_t1638 * __this, Hashtable_t1236 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyncHashtable__ctor_m9028 (SyncHashtable_t1638 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m9029 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyncHashtable_GetObjectData_m9030 (SyncHashtable_t1638 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
extern "C" int32_t SyncHashtable_get_Count_m9031 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsSynchronized()
extern "C" bool SyncHashtable_get_IsSynchronized_m9032 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
extern "C" Object_t * SyncHashtable_get_SyncRoot_m9033 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
extern "C" Object_t * SyncHashtable_get_Keys_m9034 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
extern "C" Object_t * SyncHashtable_get_Values_m9035 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
extern "C" Object_t * SyncHashtable_get_Item_m9036 (SyncHashtable_t1638 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
extern "C" void SyncHashtable_set_Item_m9037 (SyncHashtable_t1638 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
extern "C" void SyncHashtable_CopyTo_m9038 (SyncHashtable_t1638 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
extern "C" void SyncHashtable_Add_m9039 (SyncHashtable_t1638 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
extern "C" void SyncHashtable_Clear_m9040 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
extern "C" bool SyncHashtable_Contains_m9041 (SyncHashtable_t1638 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
extern "C" Object_t * SyncHashtable_GetEnumerator_m9042 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
extern "C" void SyncHashtable_Remove_m9043 (SyncHashtable_t1638 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
extern "C" bool SyncHashtable_ContainsKey_m9044 (SyncHashtable_t1638 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
extern "C" Object_t * SyncHashtable_Clone_m9045 (SyncHashtable_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
