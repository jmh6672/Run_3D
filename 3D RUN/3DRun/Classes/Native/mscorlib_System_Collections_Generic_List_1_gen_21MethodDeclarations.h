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

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t844;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t3124;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t3125;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t901;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2675;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t731;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2679;
// System.Action`1<UnityEngine.UIVertex>
struct Action_1_t2680;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2683;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m17871_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1__ctor_m17871(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1__ctor_m17871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17872_gshared (List_1_t844 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17872(__this, ___collection, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1__ctor_m17872_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5352_gshared (List_1_t844 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5352(__this, ___capacity, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1__ctor_m5352_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m17873_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17873(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17873_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17874_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17874(__this, method) (( Object_t* (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17875_gshared (List_1_t844 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17875(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t844 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17875_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17876_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17876(__this, method) (( Object_t * (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17876_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17877_gshared (List_1_t844 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17877(__this, ___item, method) (( int32_t (*) (List_1_t844 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17877_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17878_gshared (List_1_t844 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17878(__this, ___item, method) (( bool (*) (List_1_t844 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17878_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17879_gshared (List_1_t844 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17879(__this, ___item, method) (( int32_t (*) (List_1_t844 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17879_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17880_gshared (List_1_t844 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17880(__this, ___index, ___item, method) (( void (*) (List_1_t844 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17880_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17881_gshared (List_1_t844 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17881(__this, ___item, method) (( void (*) (List_1_t844 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17881_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17882_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17882(__this, method) (( bool (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17883_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17883(__this, method) (( bool (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17883_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17884_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17884(__this, method) (( Object_t * (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17885_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17885(__this, method) (( bool (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17886_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17886(__this, method) (( bool (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17886_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17887_gshared (List_1_t844 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17887(__this, ___index, method) (( Object_t * (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17888_gshared (List_1_t844 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17888(__this, ___index, ___value, method) (( void (*) (List_1_t844 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17888_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m17889_gshared (List_1_t844 * __this, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_Add_m17889(__this, ___item, method) (( void (*) (List_1_t844 *, UIVertex_t737 , const MethodInfo*))List_1_Add_m17889_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17890_gshared (List_1_t844 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17890(__this, ___newCount, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17890_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17891_gshared (List_1_t844 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17891(__this, ___collection, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17891_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17892_gshared (List_1_t844 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17892(__this, ___enumerable, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17892_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17893_gshared (List_1_t844 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17893(__this, ___collection, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_AddRange_m17893_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2675 * List_1_AsReadOnly_m17894_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17894(__this, method) (( ReadOnlyCollection_1_t2675 * (*) (List_1_t844 *, const MethodInfo*))List_1_AsReadOnly_m17894_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m17895_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_Clear_m17895(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1_Clear_m17895_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m17896_gshared (List_1_t844 * __this, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_Contains_m17896(__this, ___item, method) (( bool (*) (List_1_t844 *, UIVertex_t737 , const MethodInfo*))List_1_Contains_m17896_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17897_gshared (List_1_t844 * __this, UIVertexU5BU5D_t731* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17897(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t844 *, UIVertexU5BU5D_t731*, int32_t, const MethodInfo*))List_1_CopyTo_m17897_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t737  List_1_Find_m17898_gshared (List_1_t844 * __this, Predicate_1_t2679 * ___match, const MethodInfo* method);
#define List_1_Find_m17898(__this, ___match, method) (( UIVertex_t737  (*) (List_1_t844 *, Predicate_1_t2679 *, const MethodInfo*))List_1_Find_m17898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17899_gshared (Object_t * __this /* static, unused */, Predicate_1_t2679 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17899(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2679 *, const MethodInfo*))List_1_CheckMatch_m17899_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17900_gshared (List_1_t844 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2679 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17900(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t844 *, int32_t, int32_t, Predicate_1_t2679 *, const MethodInfo*))List_1_GetIndex_m17900_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m17901_gshared (List_1_t844 * __this, Action_1_t2680 * ___action, const MethodInfo* method);
#define List_1_ForEach_m17901(__this, ___action, method) (( void (*) (List_1_t844 *, Action_1_t2680 *, const MethodInfo*))List_1_ForEach_m17901_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2674  List_1_GetEnumerator_m17902_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17902(__this, method) (( Enumerator_t2674  (*) (List_1_t844 *, const MethodInfo*))List_1_GetEnumerator_m17902_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17903_gshared (List_1_t844 * __this, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17903(__this, ___item, method) (( int32_t (*) (List_1_t844 *, UIVertex_t737 , const MethodInfo*))List_1_IndexOf_m17903_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17904_gshared (List_1_t844 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17904(__this, ___start, ___delta, method) (( void (*) (List_1_t844 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17904_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17905_gshared (List_1_t844 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17905(__this, ___index, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17905_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17906_gshared (List_1_t844 * __this, int32_t ___index, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_Insert_m17906(__this, ___index, ___item, method) (( void (*) (List_1_t844 *, int32_t, UIVertex_t737 , const MethodInfo*))List_1_Insert_m17906_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17907_gshared (List_1_t844 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17907(__this, ___collection, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17907_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m17908_gshared (List_1_t844 * __this, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_Remove_m17908(__this, ___item, method) (( bool (*) (List_1_t844 *, UIVertex_t737 , const MethodInfo*))List_1_Remove_m17908_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17909_gshared (List_1_t844 * __this, Predicate_1_t2679 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17909(__this, ___match, method) (( int32_t (*) (List_1_t844 *, Predicate_1_t2679 *, const MethodInfo*))List_1_RemoveAll_m17909_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17910_gshared (List_1_t844 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17910(__this, ___index, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17910_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m17911_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_Reverse_m17911(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1_Reverse_m17911_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m17912_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_Sort_m17912(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1_Sort_m17912_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17913_gshared (List_1_t844 * __this, Comparison_1_t2683 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17913(__this, ___comparison, method) (( void (*) (List_1_t844 *, Comparison_1_t2683 *, const MethodInfo*))List_1_Sort_m17913_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t731* List_1_ToArray_m17914_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_ToArray_m17914(__this, method) (( UIVertexU5BU5D_t731* (*) (List_1_t844 *, const MethodInfo*))List_1_ToArray_m17914_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m17915_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17915(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1_TrimExcess_m17915_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m4394_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m4394(__this, method) (( int32_t (*) (List_1_t844 *, const MethodInfo*))List_1_get_Capacity_m4394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m4395_gshared (List_1_t844 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m4395(__this, ___value, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_set_Capacity_m4395_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m17916_gshared (List_1_t844 * __this, const MethodInfo* method);
#define List_1_get_Count_m17916(__this, method) (( int32_t (*) (List_1_t844 *, const MethodInfo*))List_1_get_Count_m17916_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t737  List_1_get_Item_m17917_gshared (List_1_t844 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17917(__this, ___index, method) (( UIVertex_t737  (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_get_Item_m17917_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17918_gshared (List_1_t844 * __this, int32_t ___index, UIVertex_t737  ___value, const MethodInfo* method);
#define List_1_set_Item_m17918(__this, ___index, ___value, method) (( void (*) (List_1_t844 *, int32_t, UIVertex_t737 , const MethodInfo*))List_1_set_Item_m17918_gshared)(__this, ___index, ___value, method)
