#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t19;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_1_t321;

#include "mscorlib_System_Object.h"

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStorey47
struct  U3CFindEqualVersionMatchU3Ec__AnonStorey47_t320  : public Object_t
{
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStorey47::match
	TurnBasedMatch_t19 * ___match_0;
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStorey47::onFailure
	Action_1_t66 * ___onFailure_1;
	// System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStorey47::onVersionMatch
	Action_1_t321 * ___onVersionMatch_2;
};
