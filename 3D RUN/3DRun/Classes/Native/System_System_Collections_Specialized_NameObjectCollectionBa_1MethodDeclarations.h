﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1357;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1356;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
extern "C" void KeysCollection__ctor_m6537 (KeysCollection_t1357 * __this, NameObjectCollectionBase_t1356 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeysCollection_System_Collections_ICollection_CopyTo_m6538 (KeysCollection_t1357 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeysCollection_System_Collections_ICollection_get_IsSynchronized_m6539 (KeysCollection_t1357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeysCollection_System_Collections_ICollection_get_SyncRoot_m6540 (KeysCollection_t1357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::get_Count()
extern "C" int32_t KeysCollection_get_Count_m6541 (KeysCollection_t1357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
extern "C" Object_t * KeysCollection_GetEnumerator_m6542 (KeysCollection_t1357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;