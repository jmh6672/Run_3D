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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1025;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3167;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3168;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t892;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2897;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1105;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2901;
// System.Action`1<UnityEngine.UILineInfo>
struct Action_1_t2902;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2905;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m20744_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1__ctor_m20744(__this, method) (( void (*) (List_1_t1025 *, const MethodInfo*))List_1__ctor_m20744_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20745_gshared (List_1_t1025 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20745(__this, ___collection, method) (( void (*) (List_1_t1025 *, Object_t*, const MethodInfo*))List_1__ctor_m20745_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5354_gshared (List_1_t1025 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5354(__this, ___capacity, method) (( void (*) (List_1_t1025 *, int32_t, const MethodInfo*))List_1__ctor_m5354_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m20746_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20746(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20746_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20747_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20747(__this, method) (( Object_t* (*) (List_1_t1025 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20748_gshared (List_1_t1025 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20748(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1025 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20748_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20749_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20749(__this, method) (( Object_t * (*) (List_1_t1025 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20749_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20750_gshared (List_1_t1025 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20750(__this, ___item, method) (( int32_t (*) (List_1_t1025 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20750_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20751_gshared (List_1_t1025 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20751(__this, ___item, method) (( bool (*) (List_1_t1025 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20751_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20752_gshared (List_1_t1025 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20752(__this, ___item, method) (( int32_t (*) (List_1_t1025 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20752_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20753_gshared (List_1_t1025 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20753(__this, ___index, ___item, method) (( void (*) (List_1_t1025 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20753_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20754_gshared (List_1_t1025 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20754(__this, ___item, method) (( void (*) (List_1_t1025 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20754_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20755_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20755(__this, method) (( bool (*) (List_1_t1025 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20755_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20756_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20756(__this, method) (( bool (*) (List_1_t1025 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20756_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20757_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20757(__this, method) (( Object_t * (*) (List_1_t1025 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20758_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20758(__this, method) (( bool (*) (List_1_t1025 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20759_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20759(__this, method) (( bool (*) (List_1_t1025 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20759_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20760_gshared (List_1_t1025 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20760(__this, ___index, method) (( Object_t * (*) (List_1_t1025 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20760_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20761_gshared (List_1_t1025 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20761(__this, ___index, ___value, method) (( void (*) (List_1_t1025 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20761_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m20762_gshared (List_1_t1025 * __this, UILineInfo_t888  ___item, const MethodInfo* method);
#define List_1_Add_m20762(__this, ___item, method) (( void (*) (List_1_t1025 *, UILineInfo_t888 , const MethodInfo*))List_1_Add_m20762_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20763_gshared (List_1_t1025 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20763(__this, ___newCount, method) (( void (*) (List_1_t1025 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20763_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20764_gshared (List_1_t1025 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20764(__this, ___collection, method) (( void (*) (List_1_t1025 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20764_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20765_gshared (List_1_t1025 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20765(__this, ___enumerable, method) (( void (*) (List_1_t1025 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20765_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20766_gshared (List_1_t1025 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20766(__this, ___collection, method) (( void (*) (List_1_t1025 *, Object_t*, const MethodInfo*))List_1_AddRange_m20766_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2897 * List_1_AsReadOnly_m20767_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20767(__this, method) (( ReadOnlyCollection_1_t2897 * (*) (List_1_t1025 *, const MethodInfo*))List_1_AsReadOnly_m20767_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m20768_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_Clear_m20768(__this, method) (( void (*) (List_1_t1025 *, const MethodInfo*))List_1_Clear_m20768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m20769_gshared (List_1_t1025 * __this, UILineInfo_t888  ___item, const MethodInfo* method);
#define List_1_Contains_m20769(__this, ___item, method) (( bool (*) (List_1_t1025 *, UILineInfo_t888 , const MethodInfo*))List_1_Contains_m20769_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20770_gshared (List_1_t1025 * __this, UILineInfoU5BU5D_t1105* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20770(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1025 *, UILineInfoU5BU5D_t1105*, int32_t, const MethodInfo*))List_1_CopyTo_m20770_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t888  List_1_Find_m20771_gshared (List_1_t1025 * __this, Predicate_1_t2901 * ___match, const MethodInfo* method);
#define List_1_Find_m20771(__this, ___match, method) (( UILineInfo_t888  (*) (List_1_t1025 *, Predicate_1_t2901 *, const MethodInfo*))List_1_Find_m20771_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20772_gshared (Object_t * __this /* static, unused */, Predicate_1_t2901 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20772(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2901 *, const MethodInfo*))List_1_CheckMatch_m20772_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20773_gshared (List_1_t1025 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2901 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20773(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1025 *, int32_t, int32_t, Predicate_1_t2901 *, const MethodInfo*))List_1_GetIndex_m20773_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m20774_gshared (List_1_t1025 * __this, Action_1_t2902 * ___action, const MethodInfo* method);
#define List_1_ForEach_m20774(__this, ___action, method) (( void (*) (List_1_t1025 *, Action_1_t2902 *, const MethodInfo*))List_1_ForEach_m20774_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2896  List_1_GetEnumerator_m20775_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20775(__this, method) (( Enumerator_t2896  (*) (List_1_t1025 *, const MethodInfo*))List_1_GetEnumerator_m20775_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20776_gshared (List_1_t1025 * __this, UILineInfo_t888  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20776(__this, ___item, method) (( int32_t (*) (List_1_t1025 *, UILineInfo_t888 , const MethodInfo*))List_1_IndexOf_m20776_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20777_gshared (List_1_t1025 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20777(__this, ___start, ___delta, method) (( void (*) (List_1_t1025 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20777_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20778_gshared (List_1_t1025 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20778(__this, ___index, method) (( void (*) (List_1_t1025 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20778_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20779_gshared (List_1_t1025 * __this, int32_t ___index, UILineInfo_t888  ___item, const MethodInfo* method);
#define List_1_Insert_m20779(__this, ___index, ___item, method) (( void (*) (List_1_t1025 *, int32_t, UILineInfo_t888 , const MethodInfo*))List_1_Insert_m20779_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20780_gshared (List_1_t1025 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20780(__this, ___collection, method) (( void (*) (List_1_t1025 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20780_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m20781_gshared (List_1_t1025 * __this, UILineInfo_t888  ___item, const MethodInfo* method);
#define List_1_Remove_m20781(__this, ___item, method) (( bool (*) (List_1_t1025 *, UILineInfo_t888 , const MethodInfo*))List_1_Remove_m20781_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20782_gshared (List_1_t1025 * __this, Predicate_1_t2901 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20782(__this, ___match, method) (( int32_t (*) (List_1_t1025 *, Predicate_1_t2901 *, const MethodInfo*))List_1_RemoveAll_m20782_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20783_gshared (List_1_t1025 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20783(__this, ___index, method) (( void (*) (List_1_t1025 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20783_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m20784_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_Reverse_m20784(__this, method) (( void (*) (List_1_t1025 *, const MethodInfo*))List_1_Reverse_m20784_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m20785_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_Sort_m20785(__this, method) (( void (*) (List_1_t1025 *, const MethodInfo*))List_1_Sort_m20785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20786_gshared (List_1_t1025 * __this, Comparison_1_t2905 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20786(__this, ___comparison, method) (( void (*) (List_1_t1025 *, Comparison_1_t2905 *, const MethodInfo*))List_1_Sort_m20786_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t1105* List_1_ToArray_m20787_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_ToArray_m20787(__this, method) (( UILineInfoU5BU5D_t1105* (*) (List_1_t1025 *, const MethodInfo*))List_1_ToArray_m20787_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m20788_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20788(__this, method) (( void (*) (List_1_t1025 *, const MethodInfo*))List_1_TrimExcess_m20788_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20789_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20789(__this, method) (( int32_t (*) (List_1_t1025 *, const MethodInfo*))List_1_get_Capacity_m20789_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20790_gshared (List_1_t1025 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20790(__this, ___value, method) (( void (*) (List_1_t1025 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20790_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m20791_gshared (List_1_t1025 * __this, const MethodInfo* method);
#define List_1_get_Count_m20791(__this, method) (( int32_t (*) (List_1_t1025 *, const MethodInfo*))List_1_get_Count_m20791_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t888  List_1_get_Item_m20792_gshared (List_1_t1025 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20792(__this, ___index, method) (( UILineInfo_t888  (*) (List_1_t1025 *, int32_t, const MethodInfo*))List_1_get_Item_m20792_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20793_gshared (List_1_t1025 * __this, int32_t ___index, UILineInfo_t888  ___value, const MethodInfo* method);
#define List_1_set_Item_m20793(__this, ___index, ___value, method) (( void (*) (List_1_t1025 *, int32_t, UILineInfo_t888 , const MethodInfo*))List_1_set_Item_m20793_gshared)(__this, ___index, ___value, method)
