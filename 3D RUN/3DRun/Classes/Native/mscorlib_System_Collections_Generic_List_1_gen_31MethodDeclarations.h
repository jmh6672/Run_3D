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

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t811;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t3149;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>
struct IEnumerator_1_t3150;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Color32>
struct ICollection_1_t3151;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
struct ReadOnlyCollection_1_t2802;
// UnityEngine.Color32[]
struct Color32U5BU5D_t917;
// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2807;
// System.Action`1<UnityEngine.Color32>
struct Action_1_t2808;
// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2811;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor()
extern "C" void List_1__ctor_m19712_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1__ctor_m19712(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1__ctor_m19712_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19713_gshared (List_1_t811 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19713(__this, ___collection, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1__ctor_m19713_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m19714_gshared (List_1_t811 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m19714(__this, ___capacity, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1__ctor_m19714_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.cctor()
extern "C" void List_1__cctor_m19715_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19715(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19715_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19716_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19716(__this, method) (( Object_t* (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19716_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19717_gshared (List_1_t811 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19717(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t811 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19717_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19718_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19718(__this, method) (( Object_t * (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19718_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19719_gshared (List_1_t811 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19719(__this, ___item, method) (( int32_t (*) (List_1_t811 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19719_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19720_gshared (List_1_t811 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19720(__this, ___item, method) (( bool (*) (List_1_t811 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19720_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19721_gshared (List_1_t811 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19721(__this, ___item, method) (( int32_t (*) (List_1_t811 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19721_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19722_gshared (List_1_t811 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19722(__this, ___index, ___item, method) (( void (*) (List_1_t811 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19722_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19723_gshared (List_1_t811 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19723(__this, ___item, method) (( void (*) (List_1_t811 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19723_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19724_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19724(__this, method) (( bool (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19725_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19725(__this, method) (( bool (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19725_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19726_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19726(__this, method) (( Object_t * (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19726_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19727_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19727(__this, method) (( bool (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19727_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19728_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19728(__this, method) (( bool (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19728_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19729_gshared (List_1_t811 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19729(__this, ___index, method) (( Object_t * (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19729_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19730_gshared (List_1_t811 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19730(__this, ___index, ___value, method) (( void (*) (List_1_t811 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19730_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T)
extern "C" void List_1_Add_m19731_gshared (List_1_t811 * __this, Color32_t846  ___item, const MethodInfo* method);
#define List_1_Add_m19731(__this, ___item, method) (( void (*) (List_1_t811 *, Color32_t846 , const MethodInfo*))List_1_Add_m19731_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19732_gshared (List_1_t811 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19732(__this, ___newCount, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19732_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19733_gshared (List_1_t811 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19733(__this, ___collection, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19733_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19734_gshared (List_1_t811 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19734(__this, ___enumerable, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19734_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m4369_gshared (List_1_t811 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m4369(__this, ___collection, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_AddRange_m4369_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2802 * List_1_AsReadOnly_m19735_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19735(__this, method) (( ReadOnlyCollection_1_t2802 * (*) (List_1_t811 *, const MethodInfo*))List_1_AsReadOnly_m19735_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C" void List_1_Clear_m19736_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_Clear_m19736(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1_Clear_m19736_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T)
extern "C" bool List_1_Contains_m19737_gshared (List_1_t811 * __this, Color32_t846  ___item, const MethodInfo* method);
#define List_1_Contains_m19737(__this, ___item, method) (( bool (*) (List_1_t811 *, Color32_t846 , const MethodInfo*))List_1_Contains_m19737_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19738_gshared (List_1_t811 * __this, Color32U5BU5D_t917* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19738(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t811 *, Color32U5BU5D_t917*, int32_t, const MethodInfo*))List_1_CopyTo_m19738_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::Find(System.Predicate`1<T>)
extern "C" Color32_t846  List_1_Find_m19739_gshared (List_1_t811 * __this, Predicate_1_t2807 * ___match, const MethodInfo* method);
#define List_1_Find_m19739(__this, ___match, method) (( Color32_t846  (*) (List_1_t811 *, Predicate_1_t2807 *, const MethodInfo*))List_1_Find_m19739_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19740_gshared (Object_t * __this /* static, unused */, Predicate_1_t2807 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19740(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2807 *, const MethodInfo*))List_1_CheckMatch_m19740_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19741_gshared (List_1_t811 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2807 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19741(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t811 *, int32_t, int32_t, Predicate_1_t2807 *, const MethodInfo*))List_1_GetIndex_m19741_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m19742_gshared (List_1_t811 * __this, Action_1_t2808 * ___action, const MethodInfo* method);
#define List_1_ForEach_m19742(__this, ___action, method) (( void (*) (List_1_t811 *, Action_1_t2808 *, const MethodInfo*))List_1_ForEach_m19742_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Enumerator_t2801  List_1_GetEnumerator_m19743_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19743(__this, method) (( Enumerator_t2801  (*) (List_1_t811 *, const MethodInfo*))List_1_GetEnumerator_m19743_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19744_gshared (List_1_t811 * __this, Color32_t846  ___item, const MethodInfo* method);
#define List_1_IndexOf_m19744(__this, ___item, method) (( int32_t (*) (List_1_t811 *, Color32_t846 , const MethodInfo*))List_1_IndexOf_m19744_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19745_gshared (List_1_t811 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19745(__this, ___start, ___delta, method) (( void (*) (List_1_t811 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19745_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19746_gshared (List_1_t811 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19746(__this, ___index, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19746_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19747_gshared (List_1_t811 * __this, int32_t ___index, Color32_t846  ___item, const MethodInfo* method);
#define List_1_Insert_m19747(__this, ___index, ___item, method) (( void (*) (List_1_t811 *, int32_t, Color32_t846 , const MethodInfo*))List_1_Insert_m19747_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19748_gshared (List_1_t811 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19748(__this, ___collection, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19748_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T)
extern "C" bool List_1_Remove_m19749_gshared (List_1_t811 * __this, Color32_t846  ___item, const MethodInfo* method);
#define List_1_Remove_m19749(__this, ___item, method) (( bool (*) (List_1_t811 *, Color32_t846 , const MethodInfo*))List_1_Remove_m19749_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19750_gshared (List_1_t811 * __this, Predicate_1_t2807 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19750(__this, ___match, method) (( int32_t (*) (List_1_t811 *, Predicate_1_t2807 *, const MethodInfo*))List_1_RemoveAll_m19750_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19751_gshared (List_1_t811 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19751(__this, ___index, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19751_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Reverse()
extern "C" void List_1_Reverse_m19752_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_Reverse_m19752(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1_Reverse_m19752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort()
extern "C" void List_1_Sort_m19753_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_Sort_m19753(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1_Sort_m19753_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19754_gshared (List_1_t811 * __this, Comparison_1_t2811 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19754(__this, ___comparison, method) (( void (*) (List_1_t811 *, Comparison_1_t2811 *, const MethodInfo*))List_1_Sort_m19754_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t917* List_1_ToArray_m19755_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_ToArray_m19755(__this, method) (( Color32U5BU5D_t917* (*) (List_1_t811 *, const MethodInfo*))List_1_ToArray_m19755_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::TrimExcess()
extern "C" void List_1_TrimExcess_m19756_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19756(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1_TrimExcess_m19756_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19757_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19757(__this, method) (( int32_t (*) (List_1_t811 *, const MethodInfo*))List_1_get_Capacity_m19757_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19758_gshared (List_1_t811 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19758(__this, ___value, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19758_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t List_1_get_Count_m19759_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_get_Count_m19759(__this, method) (( int32_t (*) (List_1_t811 *, const MethodInfo*))List_1_get_Count_m19759_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t846  List_1_get_Item_m19760_gshared (List_1_t811 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19760(__this, ___index, method) (( Color32_t846  (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_get_Item_m19760_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19761_gshared (List_1_t811 * __this, int32_t ___index, Color32_t846  ___value, const MethodInfo* method);
#define List_1_set_Item_m19761(__this, ___index, ___value, method) (( void (*) (List_1_t811 *, int32_t, Color32_t846 , const MethodInfo*))List_1_set_Item_m19761_gshared)(__this, ___index, ___value, method)
