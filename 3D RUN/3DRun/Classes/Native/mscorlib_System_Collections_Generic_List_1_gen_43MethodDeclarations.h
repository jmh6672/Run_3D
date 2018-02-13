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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t517;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t508;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t560;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3075;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2245;
// System.Object[]
struct ObjectU5BU5D_t488;
// System.Predicate`1<System.Object>
struct Predicate_1_t2254;
// System.Action`1<System.Object>
struct Action_1_t562;
// System.Comparison`1<System.Object>
struct Comparison_1_t2260;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m12625_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1__ctor_m12625(__this, method) (( void (*) (List_1_t517 *, const MethodInfo*))List_1__ctor_m12625_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m12627_gshared (List_1_t517 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m12627(__this, ___collection, method) (( void (*) (List_1_t517 *, Object_t*, const MethodInfo*))List_1__ctor_m12627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12629_gshared (List_1_t517 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12629(__this, ___capacity, method) (( void (*) (List_1_t517 *, int32_t, const MethodInfo*))List_1__ctor_m12629_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m12631_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12631(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12631_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12633_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12633(__this, method) (( Object_t* (*) (List_1_t517 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12635_gshared (List_1_t517 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12635(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t517 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12635_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12637_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12637(__this, method) (( Object_t * (*) (List_1_t517 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12639_gshared (List_1_t517 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12639(__this, ___item, method) (( int32_t (*) (List_1_t517 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12639_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12641_gshared (List_1_t517 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12641(__this, ___item, method) (( bool (*) (List_1_t517 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12641_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12643_gshared (List_1_t517 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12643(__this, ___item, method) (( int32_t (*) (List_1_t517 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12643_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12645_gshared (List_1_t517 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12645(__this, ___index, ___item, method) (( void (*) (List_1_t517 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12645_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12647_gshared (List_1_t517 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12647(__this, ___item, method) (( void (*) (List_1_t517 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12647_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12649_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12649(__this, method) (( bool (*) (List_1_t517 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12649_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12651_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12651(__this, method) (( bool (*) (List_1_t517 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12651_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12653_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12653(__this, method) (( Object_t * (*) (List_1_t517 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12655_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12655(__this, method) (( bool (*) (List_1_t517 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12657_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12657(__this, method) (( bool (*) (List_1_t517 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12657_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12659_gshared (List_1_t517 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12659(__this, ___index, method) (( Object_t * (*) (List_1_t517 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12661_gshared (List_1_t517 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12661(__this, ___index, ___value, method) (( void (*) (List_1_t517 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12661_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m12663_gshared (List_1_t517 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m12663(__this, ___item, method) (( void (*) (List_1_t517 *, Object_t *, const MethodInfo*))List_1_Add_m12663_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12665_gshared (List_1_t517 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12665(__this, ___newCount, method) (( void (*) (List_1_t517 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12665_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12667_gshared (List_1_t517 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12667(__this, ___collection, method) (( void (*) (List_1_t517 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12667_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12669_gshared (List_1_t517 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12669(__this, ___enumerable, method) (( void (*) (List_1_t517 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12669_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12671_gshared (List_1_t517 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12671(__this, ___collection, method) (( void (*) (List_1_t517 *, Object_t*, const MethodInfo*))List_1_AddRange_m12671_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2245 * List_1_AsReadOnly_m12673_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12673(__this, method) (( ReadOnlyCollection_1_t2245 * (*) (List_1_t517 *, const MethodInfo*))List_1_AsReadOnly_m12673_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m12675_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_Clear_m12675(__this, method) (( void (*) (List_1_t517 *, const MethodInfo*))List_1_Clear_m12675_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m12677_gshared (List_1_t517 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m12677(__this, ___item, method) (( bool (*) (List_1_t517 *, Object_t *, const MethodInfo*))List_1_Contains_m12677_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12679_gshared (List_1_t517 * __this, ObjectU5BU5D_t488* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12679(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t517 *, ObjectU5BU5D_t488*, int32_t, const MethodInfo*))List_1_CopyTo_m12679_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m12681_gshared (List_1_t517 * __this, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define List_1_Find_m12681(__this, ___match, method) (( Object_t * (*) (List_1_t517 *, Predicate_1_t2254 *, const MethodInfo*))List_1_Find_m12681_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12683_gshared (Object_t * __this /* static, unused */, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12683(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2254 *, const MethodInfo*))List_1_CheckMatch_m12683_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12685_gshared (List_1_t517 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12685(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t517 *, int32_t, int32_t, Predicate_1_t2254 *, const MethodInfo*))List_1_GetIndex_m12685_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
extern "C" void List_1_ForEach_m12687_gshared (List_1_t517 * __this, Action_1_t562 * ___action, const MethodInfo* method);
#define List_1_ForEach_m12687(__this, ___action, method) (( void (*) (List_1_t517 *, Action_1_t562 *, const MethodInfo*))List_1_ForEach_m12687_gshared)(__this, ___action, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2248  List_1_GetEnumerator_m12689_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12689(__this, method) (( Enumerator_t2248  (*) (List_1_t517 *, const MethodInfo*))List_1_GetEnumerator_m12689_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12691_gshared (List_1_t517 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m12691(__this, ___item, method) (( int32_t (*) (List_1_t517 *, Object_t *, const MethodInfo*))List_1_IndexOf_m12691_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12693_gshared (List_1_t517 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12693(__this, ___start, ___delta, method) (( void (*) (List_1_t517 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12693_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12695_gshared (List_1_t517 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12695(__this, ___index, method) (( void (*) (List_1_t517 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12695_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12697_gshared (List_1_t517 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m12697(__this, ___index, ___item, method) (( void (*) (List_1_t517 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m12697_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12699_gshared (List_1_t517 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12699(__this, ___collection, method) (( void (*) (List_1_t517 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12699_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m12701_gshared (List_1_t517 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m12701(__this, ___item, method) (( bool (*) (List_1_t517 *, Object_t *, const MethodInfo*))List_1_Remove_m12701_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12703_gshared (List_1_t517 * __this, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12703(__this, ___match, method) (( int32_t (*) (List_1_t517 *, Predicate_1_t2254 *, const MethodInfo*))List_1_RemoveAll_m12703_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12705_gshared (List_1_t517 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12705(__this, ___index, method) (( void (*) (List_1_t517 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12705_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m12707_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_Reverse_m12707(__this, method) (( void (*) (List_1_t517 *, const MethodInfo*))List_1_Reverse_m12707_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m12709_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_Sort_m12709(__this, method) (( void (*) (List_1_t517 *, const MethodInfo*))List_1_Sort_m12709_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12711_gshared (List_1_t517 * __this, Comparison_1_t2260 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12711(__this, ___comparison, method) (( void (*) (List_1_t517 *, Comparison_1_t2260 *, const MethodInfo*))List_1_Sort_m12711_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t488* List_1_ToArray_m12713_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_ToArray_m12713(__this, method) (( ObjectU5BU5D_t488* (*) (List_1_t517 *, const MethodInfo*))List_1_ToArray_m12713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m12715_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12715(__this, method) (( void (*) (List_1_t517 *, const MethodInfo*))List_1_TrimExcess_m12715_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12717_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12717(__this, method) (( int32_t (*) (List_1_t517 *, const MethodInfo*))List_1_get_Capacity_m12717_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12719_gshared (List_1_t517 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12719(__this, ___value, method) (( void (*) (List_1_t517 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12719_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m12721_gshared (List_1_t517 * __this, const MethodInfo* method);
#define List_1_get_Count_m12721(__this, method) (( int32_t (*) (List_1_t517 *, const MethodInfo*))List_1_get_Count_m12721_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m12723_gshared (List_1_t517 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12723(__this, ___index, method) (( Object_t * (*) (List_1_t517 *, int32_t, const MethodInfo*))List_1_get_Item_m12723_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12725_gshared (List_1_t517 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m12725(__this, ___index, ___value, method) (( void (*) (List_1_t517 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m12725_gshared)(__this, ___index, ___value, method)
