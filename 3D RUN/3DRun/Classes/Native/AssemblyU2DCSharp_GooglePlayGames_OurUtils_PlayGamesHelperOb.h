#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t63;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t65;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// System.Action`1<System.Action>
struct Action_1_t67;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "mscorlib_System_Boolean.h"

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct  PlayGamesHelperObject_t63  : public MonoBehaviour_t64
{
};
struct PlayGamesHelperObject_t63_StaticFields{
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_t63 * ___instance_2;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_3;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_t65 * ___sQueue_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_5;
	// System.Action`1<System.Boolean> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallback
	Action_1_t66 * ___sPauseCallback_6;
	// System.Action`1<System.Boolean> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallback
	Action_1_t66 * ___sFocusCallback_7;
	// System.Action`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::<>f__am$cache6
	Action_1_t67 * ___U3CU3Ef__amU24cache6_8;
};
