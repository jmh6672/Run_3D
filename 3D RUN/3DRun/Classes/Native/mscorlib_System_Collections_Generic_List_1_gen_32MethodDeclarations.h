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

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t812;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t3152;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
struct IEnumerator_1_t3153;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector2>
struct ICollection_1_t3154;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>
struct ReadOnlyCollection_1_t2813;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t715;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2818;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2819;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2822;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
extern "C" void List_1__ctor_m19867_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1__ctor_m19867(__this, method) (( void (*) (List_1_t812 *, const MethodInfo*))List_1__ctor_m19867_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19868_gshared (List_1_t812 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19868(__this, ___collection, method) (( void (*) (List_1_t812 *, Object_t*, const MethodInfo*))List_1__ctor_m19868_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
extern "C" void List_1__ctor_m19869_gshared (List_1_t812 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m19869(__this, ___capacity, method) (( void (*) (List_1_t812 *, int32_t, const MethodInfo*))List_1__ctor_m19869_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.cctor()
extern "C" void List_1__cctor_m19870_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19870(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19870_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19871_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19871(__this, method) (( Object_t* (*) (List_1_t812 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19872_gshared (List_1_t812 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19872(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t812 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19872_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19873_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19873(__this, method) (( Object_t * (*) (List_1_t812 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19873_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19874_gshared (List_1_t812 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19874(__this, ___item, method) (( int32_t (*) (List_1_t812 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19874_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19875_gshared (List_1_t812 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19875(__this, ___item, method) (( bool (*) (List_1_t812 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19875_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19876_gshared (List_1_t812 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19876(__this, ___item, method) (( int32_t (*) (List_1_t812 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19876_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19877_gshared (List_1_t812 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19877(__this, ___index, ___item, method) (( void (*) (List_1_t812 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19877_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19878_gshared (List_1_t812 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19878(__this, ___item, method) (( void (*) (List_1_t812 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19878_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19879_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19879(__this, method) (( bool (*) (List_1_t812 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19880_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19880(__this, method) (( bool (*) (List_1_t812 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19880_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19881_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19881(__this, method) (( Object_t * (*) (List_1_t812 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19881_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19882_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19882(__this, method) (( bool (*) (List_1_t812 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19883_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19883(__this, method) (( bool (*) (List_1_t812 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19883_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19884_gshared (List_1_t812 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19884(__this, ___index, method) (( Object_t * (*) (List_1_t812 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19885_gshared (List_1_t812 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19885(__this, ___index, ___value, method) (( void (*) (List_1_t812 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19885_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
extern "C" void List_1_Add_m19886_gshared (List_1_t812 * __this, Vector2_t418  ___item, const MethodInfo* method);
#define List_1_Add_m19886(__this, ___item, method) (( void (*) (List_1_t812 *, Vector2_t418 , const MethodInfo*))List_1_Add_m19886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19887_gshared (List_1_t812 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19887(__this, ___newCount, method) (( void (*) (List_1_t812 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19887_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19888_gshared (List_1_t812 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19888(__this, ___collection, method) (( void (*) (List_1_t812 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19888_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19889_gshared (List_1_t812 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19889(__this, ___enumerable, method) (( void (*) (List_1_t812 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19889_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m4371_gshared (List_1_t812 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m4371(__this, ___collection, method) (( void (*) (List_1_t812 *, Object_t*, const MethodInfo*))List_1_AddRange_m4371_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2813 * List_1_AsReadOnly_m19890_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19890(__this, method) (( ReadOnlyCollection_1_t2813 * (*) (List_1_t812 *, const MethodInfo*))List_1_AsReadOnly_m19890_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C" void List_1_Clear_m19891_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_Clear_m19891(__this, method) (( void (*) (List_1_t812 *, const MethodInfo*))List_1_Clear_m19891_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool List_1_Contains_m19892_gshared (List_1_t812 * __this, Vector2_t418  ___item, const MethodInfo* method);
#define List_1_Contains_m19892(__this, ___item, method) (( bool (*) (List_1_t812 *, Vector2_t418 , const MethodInfo*))List_1_Contains_m19892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19893_gshared (List_1_t812 * __this, Vector2U5BU5D_t715* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19893(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t812 *, Vector2U5BU5D_t715*, int32_t, const MethodInfo*))List_1_CopyTo_m19893_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::Find(System.Predicate`1<T>)
extern "C" Vector2_t418  List_1_Find_m19894_gshared (List_1_t812 * __this, Predicate_1_t2818 * ___match, const MethodInfo* method);
#define List_1_Find_m19894(__this, ___match, method) (( Vector2_t418  (*) (List_1_t812 *, Predicate_1_t2818 *, const MethodInfo*))List_1_Find_m19894_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19895_gshared (Object_t * __this /* static, unused */, Predicate_1_t2818 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19895(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2818 *, const MethodInfo*))List_1_CheckMatch_m19895_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19896_gshared (List_1_t812 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2818 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19896(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t812 *, int32_t, int32_t, Predicate_1_t2818 *, const MethodInfo*))List_1_GetIndex_m19896_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m19897_gshared (List_1_t812 * __this, Action_1_t2819 * ___action, const MethodInfo* method);
#define List_1_ForEach_m19897(__this, ___action, method) (( void (*) (List_1_t812 *, Action_1_t2819 *, const MethodInfo*))List_1_ForEach_m19897_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Enumerator_t2812  List_1_GetEnumerator_m19898_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19898(__this, method) (( Enumerator_t2812  (*) (List_1_t812 *, const MethodInfo*))List_1_GetEnumerator_m19898_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19899_gshared (List_1_t812 * __this, Vector2_t418  ___item, const MethodInfo* method);
#define List_1_IndexOf_m19899(__this, ___item, method) (( int32_t (*) (List_1_t812 *, Vector2_t418 , const MethodInfo*))List_1_IndexOf_m19899_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19900_gshared (List_1_t812 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19900(__this, ___start, ___delta, method) (( void (*) (List_1_t812 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19900_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19901_gshared (List_1_t812 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19901(__this, ___index, method) (( void (*) (List_1_t812 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19901_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19902_gshared (List_1_t812 * __this, int32_t ___index, Vector2_t418  ___item, const MethodInfo* method);
#define List_1_Insert_m19902(__this, ___index, ___item, method) (( void (*) (List_1_t812 *, int32_t, Vector2_t418 , const MethodInfo*))List_1_Insert_m19902_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19903_gshared (List_1_t812 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19903(__this, ___collection, method) (( void (*) (List_1_t812 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19903_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
extern "C" bool List_1_Remove_m19904_gshared (List_1_t812 * __this, Vector2_t418  ___item, const MethodInfo* method);
#define List_1_Remove_m19904(__this, ___item, method) (( bool (*) (List_1_t812 *, Vector2_t418 , const MethodInfo*))List_1_Remove_m19904_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19905_gshared (List_1_t812 * __this, Predicate_1_t2818 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19905(__this, ___match, method) (( int32_t (*) (List_1_t812 *, Predicate_1_t2818 *, const MethodInfo*))List_1_RemoveAll_m19905_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19906_gshared (List_1_t812 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19906(__this, ___index, method) (( void (*) (List_1_t812 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19906_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
extern "C" void List_1_Reverse_m19907_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_Reverse_m19907(__this, method) (( void (*) (List_1_t812 *, const MethodInfo*))List_1_Reverse_m19907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort()
extern "C" void List_1_Sort_m19908_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_Sort_m19908(__this, method) (( void (*) (List_1_t812 *, const MethodInfo*))List_1_Sort_m19908_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19909_gshared (List_1_t812 * __this, Comparison_1_t2822 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19909(__this, ___comparison, method) (( void (*) (List_1_t812 *, Comparison_1_t2822 *, const MethodInfo*))List_1_Sort_m19909_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t715* List_1_ToArray_m19910_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_ToArray_m19910(__this, method) (( Vector2U5BU5D_t715* (*) (List_1_t812 *, const MethodInfo*))List_1_ToArray_m19910_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::TrimExcess()
extern "C" void List_1_TrimExcess_m19911_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19911(__this, method) (( void (*) (List_1_t812 *, const MethodInfo*))List_1_TrimExcess_m19911_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19912_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19912(__this, method) (( int32_t (*) (List_1_t812 *, const MethodInfo*))List_1_get_Capacity_m19912_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19913_gshared (List_1_t812 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19913(__this, ___value, method) (( void (*) (List_1_t812 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19913_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t List_1_get_Count_m19914_gshared (List_1_t812 * __this, const MethodInfo* method);
#define List_1_get_Count_m19914(__this, method) (( int32_t (*) (List_1_t812 *, const MethodInfo*))List_1_get_Count_m19914_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t418  List_1_get_Item_m19915_gshared (List_1_t812 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19915(__this, ___index, method) (( Vector2_t418  (*) (List_1_t812 *, int32_t, const MethodInfo*))List_1_get_Item_m19915_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19916_gshared (List_1_t812 * __this, int32_t ___index, Vector2_t418  ___value, const MethodInfo* method);
#define List_1_set_Item_m19916(__this, ___index, ___value, method) (( void (*) (List_1_t812 *, int32_t, Vector2_t418 , const MethodInfo*))List_1_set_Item_m19916_gshared)(__this, ___index, ___value, method)
