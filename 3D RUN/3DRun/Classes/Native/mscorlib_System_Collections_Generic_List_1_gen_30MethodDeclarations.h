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

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t810;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t3144;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t3145;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector3>
struct ICollection_1_t3146;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
struct ReadOnlyCollection_1_t2780;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t716;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t2785;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2786;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2789;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_34.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m19420_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1__ctor_m19420(__this, method) (( void (*) (List_1_t810 *, const MethodInfo*))List_1__ctor_m19420_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19421_gshared (List_1_t810 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19421(__this, ___collection, method) (( void (*) (List_1_t810 *, Object_t*, const MethodInfo*))List_1__ctor_m19421_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m19422_gshared (List_1_t810 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m19422(__this, ___capacity, method) (( void (*) (List_1_t810 *, int32_t, const MethodInfo*))List_1__ctor_m19422_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m19423_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19423(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19423_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19424_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19424(__this, method) (( Object_t* (*) (List_1_t810 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19424_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19425_gshared (List_1_t810 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19425(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t810 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19425_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19426_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19426(__this, method) (( Object_t * (*) (List_1_t810 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19426_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19427_gshared (List_1_t810 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19427(__this, ___item, method) (( int32_t (*) (List_1_t810 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19427_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19428_gshared (List_1_t810 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19428(__this, ___item, method) (( bool (*) (List_1_t810 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19428_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19429_gshared (List_1_t810 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19429(__this, ___item, method) (( int32_t (*) (List_1_t810 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19430_gshared (List_1_t810 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19430(__this, ___index, ___item, method) (( void (*) (List_1_t810 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19430_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19431_gshared (List_1_t810 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19431(__this, ___item, method) (( void (*) (List_1_t810 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19431_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19432_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19432(__this, method) (( bool (*) (List_1_t810 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19432_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19433_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19433(__this, method) (( bool (*) (List_1_t810 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19433_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19434_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19434(__this, method) (( Object_t * (*) (List_1_t810 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19434_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19435_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19435(__this, method) (( bool (*) (List_1_t810 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19435_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19436_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19436(__this, method) (( bool (*) (List_1_t810 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19436_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19437_gshared (List_1_t810 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19437(__this, ___index, method) (( Object_t * (*) (List_1_t810 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19437_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19438_gshared (List_1_t810 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19438(__this, ___index, ___value, method) (( void (*) (List_1_t810 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19438_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m19439_gshared (List_1_t810 * __this, Vector3_t417  ___item, const MethodInfo* method);
#define List_1_Add_m19439(__this, ___item, method) (( void (*) (List_1_t810 *, Vector3_t417 , const MethodInfo*))List_1_Add_m19439_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19440_gshared (List_1_t810 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19440(__this, ___newCount, method) (( void (*) (List_1_t810 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19440_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19441_gshared (List_1_t810 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19441(__this, ___collection, method) (( void (*) (List_1_t810 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19441_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19442_gshared (List_1_t810 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19442(__this, ___enumerable, method) (( void (*) (List_1_t810 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19442_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m4367_gshared (List_1_t810 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m4367(__this, ___collection, method) (( void (*) (List_1_t810 *, Object_t*, const MethodInfo*))List_1_AddRange_m4367_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2780 * List_1_AsReadOnly_m19443_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19443(__this, method) (( ReadOnlyCollection_1_t2780 * (*) (List_1_t810 *, const MethodInfo*))List_1_AsReadOnly_m19443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m19444_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_Clear_m19444(__this, method) (( void (*) (List_1_t810 *, const MethodInfo*))List_1_Clear_m19444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m19445_gshared (List_1_t810 * __this, Vector3_t417  ___item, const MethodInfo* method);
#define List_1_Contains_m19445(__this, ___item, method) (( bool (*) (List_1_t810 *, Vector3_t417 , const MethodInfo*))List_1_Contains_m19445_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19446_gshared (List_1_t810 * __this, Vector3U5BU5D_t716* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19446(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t810 *, Vector3U5BU5D_t716*, int32_t, const MethodInfo*))List_1_CopyTo_m19446_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::Find(System.Predicate`1<T>)
extern "C" Vector3_t417  List_1_Find_m19447_gshared (List_1_t810 * __this, Predicate_1_t2785 * ___match, const MethodInfo* method);
#define List_1_Find_m19447(__this, ___match, method) (( Vector3_t417  (*) (List_1_t810 *, Predicate_1_t2785 *, const MethodInfo*))List_1_Find_m19447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19448_gshared (Object_t * __this /* static, unused */, Predicate_1_t2785 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19448(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2785 *, const MethodInfo*))List_1_CheckMatch_m19448_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19449_gshared (List_1_t810 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2785 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19449(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t810 *, int32_t, int32_t, Predicate_1_t2785 *, const MethodInfo*))List_1_GetIndex_m19449_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m19450_gshared (List_1_t810 * __this, Action_1_t2786 * ___action, const MethodInfo* method);
#define List_1_ForEach_m19450(__this, ___action, method) (( void (*) (List_1_t810 *, Action_1_t2786 *, const MethodInfo*))List_1_ForEach_m19450_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t2779  List_1_GetEnumerator_m19451_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19451(__this, method) (( Enumerator_t2779  (*) (List_1_t810 *, const MethodInfo*))List_1_GetEnumerator_m19451_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19452_gshared (List_1_t810 * __this, Vector3_t417  ___item, const MethodInfo* method);
#define List_1_IndexOf_m19452(__this, ___item, method) (( int32_t (*) (List_1_t810 *, Vector3_t417 , const MethodInfo*))List_1_IndexOf_m19452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19453_gshared (List_1_t810 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19453(__this, ___start, ___delta, method) (( void (*) (List_1_t810 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19453_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19454_gshared (List_1_t810 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19454(__this, ___index, method) (( void (*) (List_1_t810 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19454_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19455_gshared (List_1_t810 * __this, int32_t ___index, Vector3_t417  ___item, const MethodInfo* method);
#define List_1_Insert_m19455(__this, ___index, ___item, method) (( void (*) (List_1_t810 *, int32_t, Vector3_t417 , const MethodInfo*))List_1_Insert_m19455_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19456_gshared (List_1_t810 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19456(__this, ___collection, method) (( void (*) (List_1_t810 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19456_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m19457_gshared (List_1_t810 * __this, Vector3_t417  ___item, const MethodInfo* method);
#define List_1_Remove_m19457(__this, ___item, method) (( bool (*) (List_1_t810 *, Vector3_t417 , const MethodInfo*))List_1_Remove_m19457_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19458_gshared (List_1_t810 * __this, Predicate_1_t2785 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19458(__this, ___match, method) (( int32_t (*) (List_1_t810 *, Predicate_1_t2785 *, const MethodInfo*))List_1_RemoveAll_m19458_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19459_gshared (List_1_t810 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19459(__this, ___index, method) (( void (*) (List_1_t810 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19459_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" void List_1_Reverse_m19460_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_Reverse_m19460(__this, method) (( void (*) (List_1_t810 *, const MethodInfo*))List_1_Reverse_m19460_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort()
extern "C" void List_1_Sort_m19461_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_Sort_m19461(__this, method) (( void (*) (List_1_t810 *, const MethodInfo*))List_1_Sort_m19461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19462_gshared (List_1_t810 * __this, Comparison_1_t2789 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19462(__this, ___comparison, method) (( void (*) (List_1_t810 *, Comparison_1_t2789 *, const MethodInfo*))List_1_Sort_m19462_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t716* List_1_ToArray_m19463_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_ToArray_m19463(__this, method) (( Vector3U5BU5D_t716* (*) (List_1_t810 *, const MethodInfo*))List_1_ToArray_m19463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::TrimExcess()
extern "C" void List_1_TrimExcess_m19464_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19464(__this, method) (( void (*) (List_1_t810 *, const MethodInfo*))List_1_TrimExcess_m19464_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19465_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19465(__this, method) (( int32_t (*) (List_1_t810 *, const MethodInfo*))List_1_get_Capacity_m19465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19466_gshared (List_1_t810 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19466(__this, ___value, method) (( void (*) (List_1_t810 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19466_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m19467_gshared (List_1_t810 * __this, const MethodInfo* method);
#define List_1_get_Count_m19467(__this, method) (( int32_t (*) (List_1_t810 *, const MethodInfo*))List_1_get_Count_m19467_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t417  List_1_get_Item_m19468_gshared (List_1_t810 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19468(__this, ___index, method) (( Vector3_t417  (*) (List_1_t810 *, int32_t, const MethodInfo*))List_1_get_Item_m19468_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19469_gshared (List_1_t810 * __this, int32_t ___index, Vector3_t417  ___value, const MethodInfo* method);
#define List_1_set_Item_m19469(__this, ___index, ___value, method) (( void (*) (List_1_t810 *, int32_t, Vector3_t417 , const MethodInfo*))List_1_set_Item_m19469_gshared)(__this, ___index, ___value, method)
