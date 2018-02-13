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
// System.Collections.Generic.HashSet`1/Link<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>[]
struct LinkU5BU5D_t2430;
// GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus[]
struct ParticipantStatusU5BU5D_t2431;
// System.Collections.Generic.IEqualityComparer`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>
struct IEqualityComparer_1_t2433;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>
struct  HashSet_1_t262  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::table
	Int32U5BU5D_t919* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::links
	LinkU5BU5D_t2430* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::slots
	ParticipantStatusU5BU5D_t2431* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::si
	SerializationInfo_t1108 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::generation
	int32_t ___generation_9;
};
