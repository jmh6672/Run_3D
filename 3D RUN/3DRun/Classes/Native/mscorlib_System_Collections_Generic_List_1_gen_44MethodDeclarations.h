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

// System.Collections.Generic.List`1<System.IntPtr>
struct List_1_t2487;
// System.Collections.Generic.IEnumerable`1<System.IntPtr>
struct IEnumerable_1_t565;
// System.Collections.Generic.IEnumerator`1<System.IntPtr>
struct IEnumerator_1_t2468;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.IntPtr>
struct ICollection_1_t3104;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.IntPtr>
struct ReadOnlyCollection_1_t2489;
// System.IntPtr[]
struct IntPtrU5BU5D_t443;
// System.Predicate`1<System.IntPtr>
struct Predicate_1_t2494;
// System.Action`1<System.IntPtr>
struct Action_1_t538;
// System.Comparison`1<System.IntPtr>
struct Comparison_1_t2497;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<System.IntPtr>::.ctor()
extern "C" void List_1__ctor_m15474_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1__ctor_m15474(__this, method) (( void (*) (List_1_t2487 *, const MethodInfo*))List_1__ctor_m15474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15475_gshared (List_1_t2487 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15475(__this, ___collection, method) (( void (*) (List_1_t2487 *, Object_t*, const MethodInfo*))List_1__ctor_m15475_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15476_gshared (List_1_t2487 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15476(__this, ___capacity, method) (( void (*) (List_1_t2487 *, int32_t, const MethodInfo*))List_1__ctor_m15476_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::.cctor()
extern "C" void List_1__cctor_m15477_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15477(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.IntPtr>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15478_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15478(__this, method) (( Object_t* (*) (List_1_t2487 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15479_gshared (List_1_t2487 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15479(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2487 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15479_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15480_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15480(__this, method) (( Object_t * (*) (List_1_t2487 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15480_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15481_gshared (List_1_t2487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15481(__this, ___item, method) (( int32_t (*) (List_1_t2487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15481_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15482_gshared (List_1_t2487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15482(__this, ___item, method) (( bool (*) (List_1_t2487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15482_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15483_gshared (List_1_t2487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15483(__this, ___item, method) (( int32_t (*) (List_1_t2487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15483_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15484_gshared (List_1_t2487 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15484(__this, ___index, ___item, method) (( void (*) (List_1_t2487 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15484_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15485_gshared (List_1_t2487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15485(__this, ___item, method) (( void (*) (List_1_t2487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.IntPtr>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15486_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15486(__this, method) (( bool (*) (List_1_t2487 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.IntPtr>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15487_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15487(__this, method) (( bool (*) (List_1_t2487 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15487_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.IntPtr>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15488_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15488(__this, method) (( Object_t * (*) (List_1_t2487 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15489_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15489(__this, method) (( bool (*) (List_1_t2487 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15489_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15490_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15490(__this, method) (( bool (*) (List_1_t2487 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15490_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15491_gshared (List_1_t2487 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15491(__this, ___index, method) (( Object_t * (*) (List_1_t2487 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15491_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15492_gshared (List_1_t2487 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15492(__this, ___index, ___value, method) (( void (*) (List_1_t2487 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15492_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::Add(T)
extern "C" void List_1_Add_m15493_gshared (List_1_t2487 * __this, IntPtr_t ___item, const MethodInfo* method);
#define List_1_Add_m15493(__this, ___item, method) (( void (*) (List_1_t2487 *, IntPtr_t, const MethodInfo*))List_1_Add_m15493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15494_gshared (List_1_t2487 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15494(__this, ___newCount, method) (( void (*) (List_1_t2487 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15494_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15495_gshared (List_1_t2487 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15495(__this, ___collection, method) (( void (*) (List_1_t2487 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15495_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15496_gshared (List_1_t2487 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15496(__this, ___enumerable, method) (( void (*) (List_1_t2487 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15496_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15497_gshared (List_1_t2487 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15497(__this, ___collection, method) (( void (*) (List_1_t2487 *, Object_t*, const MethodInfo*))List_1_AddRange_m15497_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.IntPtr>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2489 * List_1_AsReadOnly_m15498_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15498(__this, method) (( ReadOnlyCollection_1_t2489 * (*) (List_1_t2487 *, const MethodInfo*))List_1_AsReadOnly_m15498_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::Clear()
extern "C" void List_1_Clear_m15499_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_Clear_m15499(__this, method) (( void (*) (List_1_t2487 *, const MethodInfo*))List_1_Clear_m15499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.IntPtr>::Contains(T)
extern "C" bool List_1_Contains_m15500_gshared (List_1_t2487 * __this, IntPtr_t ___item, const MethodInfo* method);
#define List_1_Contains_m15500(__this, ___item, method) (( bool (*) (List_1_t2487 *, IntPtr_t, const MethodInfo*))List_1_Contains_m15500_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15501_gshared (List_1_t2487 * __this, IntPtrU5BU5D_t443* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15501(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2487 *, IntPtrU5BU5D_t443*, int32_t, const MethodInfo*))List_1_CopyTo_m15501_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.IntPtr>::Find(System.Predicate`1<T>)
extern "C" IntPtr_t List_1_Find_m15502_gshared (List_1_t2487 * __this, Predicate_1_t2494 * ___match, const MethodInfo* method);
#define List_1_Find_m15502(__this, ___match, method) (( IntPtr_t (*) (List_1_t2487 *, Predicate_1_t2494 *, const MethodInfo*))List_1_Find_m15502_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15503_gshared (Object_t * __this /* static, unused */, Predicate_1_t2494 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15503(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2494 *, const MethodInfo*))List_1_CheckMatch_m15503_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.IntPtr>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15504_gshared (List_1_t2487 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2494 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15504(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2487 *, int32_t, int32_t, Predicate_1_t2494 *, const MethodInfo*))List_1_GetIndex_m15504_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m15505_gshared (List_1_t2487 * __this, Action_1_t538 * ___action, const MethodInfo* method);
#define List_1_ForEach_m15505(__this, ___action, method) (( void (*) (List_1_t2487 *, Action_1_t538 *, const MethodInfo*))List_1_ForEach_m15505_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.IntPtr>::GetEnumerator()
extern "C" Enumerator_t2488  List_1_GetEnumerator_m15506_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15506(__this, method) (( Enumerator_t2488  (*) (List_1_t2487 *, const MethodInfo*))List_1_GetEnumerator_m15506_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.IntPtr>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15507_gshared (List_1_t2487 * __this, IntPtr_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m15507(__this, ___item, method) (( int32_t (*) (List_1_t2487 *, IntPtr_t, const MethodInfo*))List_1_IndexOf_m15507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15508_gshared (List_1_t2487 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15508(__this, ___start, ___delta, method) (( void (*) (List_1_t2487 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15508_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15509_gshared (List_1_t2487 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15509(__this, ___index, method) (( void (*) (List_1_t2487 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15509_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15510_gshared (List_1_t2487 * __this, int32_t ___index, IntPtr_t ___item, const MethodInfo* method);
#define List_1_Insert_m15510(__this, ___index, ___item, method) (( void (*) (List_1_t2487 *, int32_t, IntPtr_t, const MethodInfo*))List_1_Insert_m15510_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15511_gshared (List_1_t2487 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15511(__this, ___collection, method) (( void (*) (List_1_t2487 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15511_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.IntPtr>::Remove(T)
extern "C" bool List_1_Remove_m15512_gshared (List_1_t2487 * __this, IntPtr_t ___item, const MethodInfo* method);
#define List_1_Remove_m15512(__this, ___item, method) (( bool (*) (List_1_t2487 *, IntPtr_t, const MethodInfo*))List_1_Remove_m15512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.IntPtr>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15513_gshared (List_1_t2487 * __this, Predicate_1_t2494 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15513(__this, ___match, method) (( int32_t (*) (List_1_t2487 *, Predicate_1_t2494 *, const MethodInfo*))List_1_RemoveAll_m15513_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15514_gshared (List_1_t2487 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15514(__this, ___index, method) (( void (*) (List_1_t2487 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15514_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::Reverse()
extern "C" void List_1_Reverse_m15515_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_Reverse_m15515(__this, method) (( void (*) (List_1_t2487 *, const MethodInfo*))List_1_Reverse_m15515_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::Sort()
extern "C" void List_1_Sort_m15516_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_Sort_m15516(__this, method) (( void (*) (List_1_t2487 *, const MethodInfo*))List_1_Sort_m15516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15517_gshared (List_1_t2487 * __this, Comparison_1_t2497 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15517(__this, ___comparison, method) (( void (*) (List_1_t2487 *, Comparison_1_t2497 *, const MethodInfo*))List_1_Sort_m15517_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.IntPtr>::ToArray()
extern "C" IntPtrU5BU5D_t443* List_1_ToArray_m15518_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_ToArray_m15518(__this, method) (( IntPtrU5BU5D_t443* (*) (List_1_t2487 *, const MethodInfo*))List_1_ToArray_m15518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::TrimExcess()
extern "C" void List_1_TrimExcess_m15519_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15519(__this, method) (( void (*) (List_1_t2487 *, const MethodInfo*))List_1_TrimExcess_m15519_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.IntPtr>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15520_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15520(__this, method) (( int32_t (*) (List_1_t2487 *, const MethodInfo*))List_1_get_Capacity_m15520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15521_gshared (List_1_t2487 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15521(__this, ___value, method) (( void (*) (List_1_t2487 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15521_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.IntPtr>::get_Count()
extern "C" int32_t List_1_get_Count_m15522_gshared (List_1_t2487 * __this, const MethodInfo* method);
#define List_1_get_Count_m15522(__this, method) (( int32_t (*) (List_1_t2487 *, const MethodInfo*))List_1_get_Count_m15522_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.IntPtr>::get_Item(System.Int32)
extern "C" IntPtr_t List_1_get_Item_m15523_gshared (List_1_t2487 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15523(__this, ___index, method) (( IntPtr_t (*) (List_1_t2487 *, int32_t, const MethodInfo*))List_1_get_Item_m15523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.IntPtr>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15524_gshared (List_1_t2487 * __this, int32_t ___index, IntPtr_t ___value, const MethodInfo* method);
#define List_1_set_Item_m15524(__this, ___index, ___value, method) (( void (*) (List_1_t2487 *, int32_t, IntPtr_t, const MethodInfo*))List_1_set_Item_m15524_gshared)(__this, ___index, ___value, method)
