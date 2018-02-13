#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t291;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t299;
// GooglePlayGames.Native.NativeSavedGameClient
struct NativeSavedGameClient_t302;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSource.h"

// GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey38
struct  U3CInternalManualOpenU3Ec__AnonStorey38_t301  : public Object_t
{
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey38::completedCallback
	Action_2_t291 * ___completedCallback_0;
	// System.String GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey38::filename
	String_t* ___filename_1;
	// GooglePlayGames.BasicApi.DataSource GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey38::source
	int32_t ___source_2;
	// System.Boolean GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey38::prefetchDataOnConflict
	bool ___prefetchDataOnConflict_3;
	// GooglePlayGames.BasicApi.SavedGame.ConflictCallback GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey38::conflictCallback
	ConflictCallback_t299 * ___conflictCallback_4;
	// GooglePlayGames.Native.NativeSavedGameClient GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey38::<>f__this
	NativeSavedGameClient_t302 * ___U3CU3Ef__this_5;
};
