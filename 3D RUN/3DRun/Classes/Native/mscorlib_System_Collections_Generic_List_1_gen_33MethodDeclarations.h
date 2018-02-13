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

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t813;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t3155;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>
struct IEnumerator_1_t3156;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector4>
struct ICollection_1_t3157;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>
struct ReadOnlyCollection_1_t2825;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t918;
// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2830;
// System.Action`1<UnityEngine.Vector4>
struct Action_1_t2831;
// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2834;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
extern "C" void List_1__ctor_m20016_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1__ctor_m20016(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1__ctor_m20016_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20017_gshared (List_1_t813 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20017(__this, ___collection, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1__ctor_m20017_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
extern "C" void List_1__ctor_m20018_gshared (List_1_t813 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m20018(__this, ___capacity, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1__ctor_m20018_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.cctor()
extern "C" void List_1__cctor_m20019_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20019(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20019_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20020_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20020(__this, method) (( Object_t* (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20020_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20021_gshared (List_1_t813 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20021(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t813 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20021_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20022_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20022(__this, method) (( Object_t * (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20023_gshared (List_1_t813 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20023(__this, ___item, method) (( int32_t (*) (List_1_t813 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20023_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20024_gshared (List_1_t813 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20024(__this, ___item, method) (( bool (*) (List_1_t813 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20024_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20025_gshared (List_1_t813 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20025(__this, ___item, method) (( int32_t (*) (List_1_t813 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20025_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20026_gshared (List_1_t813 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20026(__this, ___index, ___item, method) (( void (*) (List_1_t813 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20026_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20027_gshared (List_1_t813 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20027(__this, ___item, method) (( void (*) (List_1_t813 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20027_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20028_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20028(__this, method) (( bool (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20028_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20029_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20029(__this, method) (( bool (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20029_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20030_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20030(__this, method) (( Object_t * (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20031_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20031(__this, method) (( bool (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20031_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20032_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20032(__this, method) (( bool (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20032_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20033_gshared (List_1_t813 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20033(__this, ___index, method) (( Object_t * (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20033_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20034_gshared (List_1_t813 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20034(__this, ___index, ___value, method) (( void (*) (List_1_t813 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20034_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
extern "C" void List_1_Add_m20035_gshared (List_1_t813 * __this, Vector4_t815  ___item, const MethodInfo* method);
#define List_1_Add_m20035(__this, ___item, method) (( void (*) (List_1_t813 *, Vector4_t815 , const MethodInfo*))List_1_Add_m20035_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20036_gshared (List_1_t813 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20036(__this, ___newCount, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20036_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20037_gshared (List_1_t813 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20037(__this, ___collection, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20037_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20038_gshared (List_1_t813 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20038(__this, ___enumerable, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20038_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m4375_gshared (List_1_t813 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m4375(__this, ___collection, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_AddRange_m4375_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2825 * List_1_AsReadOnly_m20039_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20039(__this, method) (( ReadOnlyCollection_1_t2825 * (*) (List_1_t813 *, const MethodInfo*))List_1_AsReadOnly_m20039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
extern "C" void List_1_Clear_m20040_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_Clear_m20040(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1_Clear_m20040_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Contains(T)
extern "C" bool List_1_Contains_m20041_gshared (List_1_t813 * __this, Vector4_t815  ___item, const MethodInfo* method);
#define List_1_Contains_m20041(__this, ___item, method) (( bool (*) (List_1_t813 *, Vector4_t815 , const MethodInfo*))List_1_Contains_m20041_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20042_gshared (List_1_t813 * __this, Vector4U5BU5D_t918* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20042(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t813 *, Vector4U5BU5D_t918*, int32_t, const MethodInfo*))List_1_CopyTo_m20042_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::Find(System.Predicate`1<T>)
extern "C" Vector4_t815  List_1_Find_m20043_gshared (List_1_t813 * __this, Predicate_1_t2830 * ___match, const MethodInfo* method);
#define List_1_Find_m20043(__this, ___match, method) (( Vector4_t815  (*) (List_1_t813 *, Predicate_1_t2830 *, const MethodInfo*))List_1_Find_m20043_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20044_gshared (Object_t * __this /* static, unused */, Predicate_1_t2830 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20044(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2830 *, const MethodInfo*))List_1_CheckMatch_m20044_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20045_gshared (List_1_t813 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2830 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20045(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t813 *, int32_t, int32_t, Predicate_1_t2830 *, const MethodInfo*))List_1_GetIndex_m20045_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m20046_gshared (List_1_t813 * __this, Action_1_t2831 * ___action, const MethodInfo* method);
#define List_1_ForEach_m20046(__this, ___action, method) (( void (*) (List_1_t813 *, Action_1_t2831 *, const MethodInfo*))List_1_ForEach_m20046_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::GetEnumerator()
extern "C" Enumerator_t2824  List_1_GetEnumerator_m20047_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20047(__this, method) (( Enumerator_t2824  (*) (List_1_t813 *, const MethodInfo*))List_1_GetEnumerator_m20047_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20048_gshared (List_1_t813 * __this, Vector4_t815  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20048(__this, ___item, method) (( int32_t (*) (List_1_t813 *, Vector4_t815 , const MethodInfo*))List_1_IndexOf_m20048_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20049_gshared (List_1_t813 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20049(__this, ___start, ___delta, method) (( void (*) (List_1_t813 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20049_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20050_gshared (List_1_t813 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20050(__this, ___index, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20050_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20051_gshared (List_1_t813 * __this, int32_t ___index, Vector4_t815  ___item, const MethodInfo* method);
#define List_1_Insert_m20051(__this, ___index, ___item, method) (( void (*) (List_1_t813 *, int32_t, Vector4_t815 , const MethodInfo*))List_1_Insert_m20051_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20052_gshared (List_1_t813 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20052(__this, ___collection, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20052_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Remove(T)
extern "C" bool List_1_Remove_m20053_gshared (List_1_t813 * __this, Vector4_t815  ___item, const MethodInfo* method);
#define List_1_Remove_m20053(__this, ___item, method) (( bool (*) (List_1_t813 *, Vector4_t815 , const MethodInfo*))List_1_Remove_m20053_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20054_gshared (List_1_t813 * __this, Predicate_1_t2830 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20054(__this, ___match, method) (( int32_t (*) (List_1_t813 *, Predicate_1_t2830 *, const MethodInfo*))List_1_RemoveAll_m20054_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20055_gshared (List_1_t813 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20055(__this, ___index, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20055_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Reverse()
extern "C" void List_1_Reverse_m20056_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_Reverse_m20056(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1_Reverse_m20056_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort()
extern "C" void List_1_Sort_m20057_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_Sort_m20057(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1_Sort_m20057_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20058_gshared (List_1_t813 * __this, Comparison_1_t2834 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20058(__this, ___comparison, method) (( void (*) (List_1_t813 *, Comparison_1_t2834 *, const MethodInfo*))List_1_Sort_m20058_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector4>::ToArray()
extern "C" Vector4U5BU5D_t918* List_1_ToArray_m20059_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_ToArray_m20059(__this, method) (( Vector4U5BU5D_t918* (*) (List_1_t813 *, const MethodInfo*))List_1_ToArray_m20059_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::TrimExcess()
extern "C" void List_1_TrimExcess_m20060_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20060(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1_TrimExcess_m20060_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20061_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20061(__this, method) (( int32_t (*) (List_1_t813 *, const MethodInfo*))List_1_get_Capacity_m20061_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20062_gshared (List_1_t813 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20062(__this, ___value, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20062_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Count()
extern "C" int32_t List_1_get_Count_m20063_gshared (List_1_t813 * __this, const MethodInfo* method);
#define List_1_get_Count_m20063(__this, method) (( int32_t (*) (List_1_t813 *, const MethodInfo*))List_1_get_Count_m20063_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C" Vector4_t815  List_1_get_Item_m20064_gshared (List_1_t813 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20064(__this, ___index, method) (( Vector4_t815  (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_get_Item_m20064_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20065_gshared (List_1_t813 * __this, int32_t ___index, Vector4_t815  ___value, const MethodInfo* method);
#define List_1_set_Item_m20065(__this, ___index, ___value, method) (( void (*) (List_1_t813 *, int32_t, Vector4_t815 , const MethodInfo*))List_1_set_Item_m20065_gshared)(__this, ___index, ___value, method)
