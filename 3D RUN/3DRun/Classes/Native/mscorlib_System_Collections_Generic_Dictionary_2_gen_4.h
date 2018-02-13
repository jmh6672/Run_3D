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
// System.String[]
struct StringU5BU5D_t246;
// GooglePlayGames.BasicApi.Multiplayer.Participant[]
struct ParticipantU5BU5D_t2273;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2286;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant,System.Collections.DictionaryEntry>
struct Transform_1_t2418;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>
struct  Dictionary_2_t254  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::table
	Int32U5BU5D_t919* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::linkSlots
	LinkU5BU5D_t2284* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::keySlots
	StringU5BU5D_t246* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::valueSlots
	ParticipantU5BU5D_t2273* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::serialization_info
	SerializationInfo_t1108 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t254_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>::<>f__am$cacheB
	Transform_1_t2418 * ___U3CU3Ef__amU24cacheB_15;
};
