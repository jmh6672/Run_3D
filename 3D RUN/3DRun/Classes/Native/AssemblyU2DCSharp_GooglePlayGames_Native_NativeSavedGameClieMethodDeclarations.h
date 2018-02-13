#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver
struct NativeConflictResolver_t288;
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
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t298;
// GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse
struct CommitResponse_t383;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::.ctor(GooglePlayGames.Native.PInvoke.SnapshotManager,System.String,GooglePlayGames.Native.NativeSnapshotMetadata,GooglePlayGames.Native.NativeSnapshotMetadata,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>,System.Action)
extern "C" void NativeConflictResolver__ctor_m1169 (NativeConflictResolver_t288 * __this, SnapshotManager_t289 * ___manager, String_t* ___conflictId, NativeSnapshotMetadata_t290 * ___original, NativeSnapshotMetadata_t290 * ___unmerged, Action_2_t291 * ___completeCallback, Action_t267 * ___retryOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::ChooseMetadata(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C" void NativeConflictResolver_ChooseMetadata_m1170 (NativeConflictResolver_t288 * __this, Object_t * ___chosenMetadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::<ChooseMetadata>m__54(GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse)
extern "C" void NativeConflictResolver_U3CChooseMetadataU3Em__54_m1171 (NativeConflictResolver_t288 * __this, CommitResponse_t383 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
