#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t919;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2284;
// System.Object[]
struct ObjectU5BU5D_t488;
// System.UInt32[]
struct UInt32U5BU5D_t1147;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2289;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt32,System.Collections.DictionaryEntry>
struct Transform_1_t2288;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>
struct  Dictionary_2_t2287  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::table
	Int32U5BU5D_t919* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::linkSlots
	LinkU5BU5D_t2284* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::keySlots
	ObjectU5BU5D_t488* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::valueSlots
	UInt32U5BU5D_t1147* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::serialization_info
	SerializationInfo_t1108 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2287_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::<>f__am$cacheB
	Transform_1_t2288 * ___U3CU3Ef__amU24cacheB_15;
};
