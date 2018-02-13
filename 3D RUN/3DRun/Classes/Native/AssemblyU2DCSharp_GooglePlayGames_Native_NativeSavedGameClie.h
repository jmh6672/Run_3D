#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t289;
// System.String
struct String_t;
// GooglePlayGames.Native.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t290;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t291;
// System.Action
struct Action_t267;

#include "mscorlib_System_Object.h"

// GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver
struct  NativeConflictResolver_t288  : public Object_t
{
	// GooglePlayGames.Native.PInvoke.SnapshotManager GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mManager
	SnapshotManager_t289 * ___mManager_0;
	// System.String GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mConflictId
	String_t* ___mConflictId_1;
	// GooglePlayGames.Native.NativeSnapshotMetadata GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mOriginal
	NativeSnapshotMetadata_t290 * ___mOriginal_2;
	// GooglePlayGames.Native.NativeSnapshotMetadata GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mUnmerged
	NativeSnapshotMetadata_t290 * ___mUnmerged_3;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mCompleteCallback
	Action_2_t291 * ___mCompleteCallback_4;
	// System.Action GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mRetryFileOpen
	Action_t267 * ___mRetryFileOpen_5;
};
