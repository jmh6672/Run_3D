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

// GooglePlayGames.Native.NativeSavedGameClient/Prefetcher
struct Prefetcher_t292;
// System.Action`2<System.Byte[],System.Byte[]>
struct Action_2_t293;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t291;
// GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse
struct ReadResponse_t384;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t298;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_SavedGa.h"

// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::.ctor(System.Action`2<System.Byte[],System.Byte[]>,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void Prefetcher__ctor_m1172 (Prefetcher_t292 * __this, Action_2_t293 * ___dataFetchedCallback, Action_2_t291 * ___completedCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::OnOriginalDataRead(GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse)
extern "C" void Prefetcher_OnOriginalDataRead_m1173 (Prefetcher_t292 * __this, ReadResponse_t384 * ___readResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::OnUnmergedDataRead(GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse)
extern "C" void Prefetcher_OnUnmergedDataRead_m1174 (Prefetcher_t292 * __this, ReadResponse_t384 * ___readResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::MaybeProceed()
extern "C" void Prefetcher_MaybeProceed_m1175 (Prefetcher_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::<OnOriginalDataRead>m__55(GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C" void Prefetcher_U3COnOriginalDataReadU3Em__55_m1176 (Object_t * __this /* static, unused */, int32_t p0, Object_t * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::<OnUnmergedDataRead>m__56(GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C" void Prefetcher_U3COnUnmergedDataReadU3Em__56_m1177 (Object_t * __this /* static, unused */, int32_t p0, Object_t * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
