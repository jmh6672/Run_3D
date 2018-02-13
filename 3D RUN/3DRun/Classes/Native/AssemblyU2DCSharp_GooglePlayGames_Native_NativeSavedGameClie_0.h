#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t291;
// System.Action`2<System.Byte[],System.Byte[]>
struct Action_2_t293;

#include "mscorlib_System_Object.h"

// GooglePlayGames.Native.NativeSavedGameClient/Prefetcher
struct  Prefetcher_t292  : public Object_t
{
	// System.Object GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mLock
	Object_t * ___mLock_0;
	// System.Boolean GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mOriginalDataFetched
	bool ___mOriginalDataFetched_1;
	// System.Byte[] GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mOriginalData
	ByteU5BU5D_t20* ___mOriginalData_2;
	// System.Boolean GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mUnmergedDataFetched
	bool ___mUnmergedDataFetched_3;
	// System.Byte[] GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mUnmergedData
	ByteU5BU5D_t20* ___mUnmergedData_4;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::completedCallback
	Action_2_t291 * ___completedCallback_5;
	// System.Action`2<System.Byte[],System.Byte[]> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mDataFetchedCallback
	Action_2_t293 * ___mDataFetchedCallback_6;
};
struct Prefetcher_t292_StaticFields{
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::<>f__am$cache7
	Action_2_t291 * ___U3CU3Ef__amU24cache7_7;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::<>f__am$cache8
	Action_2_t291 * ___U3CU3Ef__amU24cache8_8;
};
