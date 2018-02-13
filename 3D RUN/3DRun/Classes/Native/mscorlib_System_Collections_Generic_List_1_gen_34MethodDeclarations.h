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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t814;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t3147;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3113;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3148;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2791;
// System.Int32[]
struct Int32U5BU5D_t919;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2794;
// System.Action`1<System.Int32>
struct Action_1_t2795;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2799;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m19569_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1__ctor_m19569(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1__ctor_m19569_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19570_gshared (List_1_t814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19570(__this, ___collection, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1__ctor_m19570_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m19571_gshared (List_1_t814 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m19571(__this, ___capacity, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1__ctor_m19571_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m19572_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19572(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19572_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19573_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19573(__this, method) (( Object_t* (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19573_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19574_gshared (List_1_t814 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19574(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t814 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19574_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19575_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19575(__this, method) (( Object_t * (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19575_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19576_gshared (List_1_t814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19576(__this, ___item, method) (( int32_t (*) (List_1_t814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19576_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19577_gshared (List_1_t814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19577(__this, ___item, method) (( bool (*) (List_1_t814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19577_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19578_gshared (List_1_t814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19578(__this, ___item, method) (( int32_t (*) (List_1_t814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19578_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19579_gshared (List_1_t814 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19579(__this, ___index, ___item, method) (( void (*) (List_1_t814 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19579_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19580_gshared (List_1_t814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19580(__this, ___item, method) (( void (*) (List_1_t814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19580_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19581_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19581(__this, method) (( bool (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19582_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19582(__this, method) (( bool (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19582_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19583_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19583(__this, method) (( Object_t * (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19583_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19584_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19584(__this, method) (( bool (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19585_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19585(__this, method) (( bool (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19585_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19586_gshared (List_1_t814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19586(__this, ___index, method) (( Object_t * (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19586_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19587_gshared (List_1_t814 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19587(__this, ___index, ___value, method) (( void (*) (List_1_t814 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19587_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m19588_gshared (List_1_t814 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m19588(__this, ___item, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_Add_m19588_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19589_gshared (List_1_t814 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19589(__this, ___newCount, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19589_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19590_gshared (List_1_t814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19590(__this, ___collection, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19590_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19591_gshared (List_1_t814 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19591(__this, ___enumerable, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19591_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m4377_gshared (List_1_t814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m4377(__this, ___collection, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_AddRange_m4377_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2791 * List_1_AsReadOnly_m19592_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19592(__this, method) (( ReadOnlyCollection_1_t2791 * (*) (List_1_t814 *, const MethodInfo*))List_1_AsReadOnly_m19592_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m19593_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_Clear_m19593(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1_Clear_m19593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m19594_gshared (List_1_t814 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m19594(__this, ___item, method) (( bool (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_Contains_m19594_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19595_gshared (List_1_t814 * __this, Int32U5BU5D_t919* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19595(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t814 *, Int32U5BU5D_t919*, int32_t, const MethodInfo*))List_1_CopyTo_m19595_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m19596_gshared (List_1_t814 * __this, Predicate_1_t2794 * ___match, const MethodInfo* method);
#define List_1_Find_m19596(__this, ___match, method) (( int32_t (*) (List_1_t814 *, Predicate_1_t2794 *, const MethodInfo*))List_1_Find_m19596_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19597_gshared (Object_t * __this /* static, unused */, Predicate_1_t2794 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19597(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2794 *, const MethodInfo*))List_1_CheckMatch_m19597_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19598_gshared (List_1_t814 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2794 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19598(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t814 *, int32_t, int32_t, Predicate_1_t2794 *, const MethodInfo*))List_1_GetIndex_m19598_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m19599_gshared (List_1_t814 * __this, Action_1_t2795 * ___action, const MethodInfo* method);
#define List_1_ForEach_m19599(__this, ___action, method) (( void (*) (List_1_t814 *, Action_1_t2795 *, const MethodInfo*))List_1_ForEach_m19599_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2790  List_1_GetEnumerator_m19600_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19600(__this, method) (( Enumerator_t2790  (*) (List_1_t814 *, const MethodInfo*))List_1_GetEnumerator_m19600_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19601_gshared (List_1_t814 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m19601(__this, ___item, method) (( int32_t (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_IndexOf_m19601_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19602_gshared (List_1_t814 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19602(__this, ___start, ___delta, method) (( void (*) (List_1_t814 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19602_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19603_gshared (List_1_t814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19603(__this, ___index, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19604_gshared (List_1_t814 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m19604(__this, ___index, ___item, method) (( void (*) (List_1_t814 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m19604_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19605_gshared (List_1_t814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19605(__this, ___collection, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19605_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m19606_gshared (List_1_t814 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m19606(__this, ___item, method) (( bool (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_Remove_m19606_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19607_gshared (List_1_t814 * __this, Predicate_1_t2794 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19607(__this, ___match, method) (( int32_t (*) (List_1_t814 *, Predicate_1_t2794 *, const MethodInfo*))List_1_RemoveAll_m19607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19608_gshared (List_1_t814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19608(__this, ___index, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19608_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m19609_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_Reverse_m19609(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1_Reverse_m19609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m19610_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_Sort_m19610(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1_Sort_m19610_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19611_gshared (List_1_t814 * __this, Comparison_1_t2799 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19611(__this, ___comparison, method) (( void (*) (List_1_t814 *, Comparison_1_t2799 *, const MethodInfo*))List_1_Sort_m19611_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t919* List_1_ToArray_m19612_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_ToArray_m19612(__this, method) (( Int32U5BU5D_t919* (*) (List_1_t814 *, const MethodInfo*))List_1_ToArray_m19612_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m19613_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19613(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1_TrimExcess_m19613_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19614_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19614(__this, method) (( int32_t (*) (List_1_t814 *, const MethodInfo*))List_1_get_Capacity_m19614_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19615_gshared (List_1_t814 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19615(__this, ___value, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19615_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m19616_gshared (List_1_t814 * __this, const MethodInfo* method);
#define List_1_get_Count_m19616(__this, method) (( int32_t (*) (List_1_t814 *, const MethodInfo*))List_1_get_Count_m19616_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m19617_gshared (List_1_t814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19617(__this, ___index, method) (( int32_t (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_get_Item_m19617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19618_gshared (List_1_t814 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m19618(__this, ___index, ___value, method) (( void (*) (List_1_t814 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m19618_gshared)(__this, ___index, ___value, method)
