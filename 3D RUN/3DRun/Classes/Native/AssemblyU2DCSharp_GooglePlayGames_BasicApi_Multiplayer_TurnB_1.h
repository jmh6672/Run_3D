#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t21;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String>
struct Func_2_t22;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_TurnB_0.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_TurnB.h"

// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct  TurnBasedMatch_t19  : public Object_t
{
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mMatchId
	String_t* ___mMatchId_0;
	// System.Byte[] GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mData
	ByteU5BU5D_t20* ___mData_1;
	// System.Boolean GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mCanRematch
	bool ___mCanRematch_2;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mAvailableAutomatchSlots
	uint32_t ___mAvailableAutomatchSlots_3;
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mSelfParticipantId
	String_t* ___mSelfParticipantId_4;
	// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mParticipants
	List_1_t21 * ___mParticipants_5;
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mPendingParticipantId
	String_t* ___mPendingParticipantId_6;
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mTurnStatus
	int32_t ___mTurnStatus_7;
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mMatchStatus
	int32_t ___mMatchStatus_8;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mVariant
	uint32_t ___mVariant_9;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mVersion
	uint32_t ___mVersion_10;
};
struct TurnBasedMatch_t19_StaticFields{
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::<>f__am$cacheB
	Func_2_t22 * ___U3CU3Ef__amU24cacheB_11;
};
