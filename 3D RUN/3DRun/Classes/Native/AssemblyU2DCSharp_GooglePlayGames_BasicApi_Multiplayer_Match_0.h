#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t12;
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t13;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult>
struct Dictionary_2_t14;

#include "mscorlib_System_Object.h"

// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome
struct  MatchOutcome_t11  : public Object_t
{
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::mParticipantIds
	List_1_t12 * ___mParticipantIds_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::mPlacements
	Dictionary_2_t13 * ___mPlacements_2;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult> GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::mResults
	Dictionary_2_t14 * ___mResults_3;
};
