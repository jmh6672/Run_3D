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

// GooglePlayGames.Native.UnsupportedSavedGamesClient
struct UnsupportedSavedGamesClient_t394;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t291;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t299;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t298;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]>
struct Action_2_t304;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SelectUIStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t306;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>>
struct Action_2_t309;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSource.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_Conflic.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_SavedGa_1.h"

// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::.ctor(System.String)
extern "C" void UnsupportedSavedGamesClient__ctor_m1797 (UnsupportedSavedGamesClient_t394 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::OpenWithAutomaticConflictResolution(System.String,GooglePlayGames.BasicApi.DataSource,GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void UnsupportedSavedGamesClient_OpenWithAutomaticConflictResolution_m1798 (UnsupportedSavedGamesClient_t394 * __this, String_t* ___filename, int32_t ___source, int32_t ___resolutionStrategy, Action_2_t291 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::OpenWithManualConflictResolution(System.String,GooglePlayGames.BasicApi.DataSource,System.Boolean,GooglePlayGames.BasicApi.SavedGame.ConflictCallback,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void UnsupportedSavedGamesClient_OpenWithManualConflictResolution_m1799 (UnsupportedSavedGamesClient_t394 * __this, String_t* ___filename, int32_t ___source, bool ___prefetchDataOnConflict, ConflictCallback_t299 * ___conflictCallback, Action_2_t291 * ___completedCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::ReadBinaryData(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]>)
extern "C" void UnsupportedSavedGamesClient_ReadBinaryData_m1800 (UnsupportedSavedGamesClient_t394 * __this, Object_t * ___metadata, Action_2_t304 * ___completedCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::ShowSelectSavedGameUI(System.String,System.UInt32,System.Boolean,System.Boolean,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SelectUIStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void UnsupportedSavedGamesClient_ShowSelectSavedGameUI_m1801 (UnsupportedSavedGamesClient_t394 * __this, String_t* ___uiTitle, uint32_t ___maxDisplayedSavedGames, bool ___showCreateSaveUI, bool ___showDeleteSaveUI, Action_2_t306 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::CommitUpdate(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate,System.Byte[],System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void UnsupportedSavedGamesClient_CommitUpdate_m1802 (UnsupportedSavedGamesClient_t394 * __this, Object_t * ___metadata, SavedGameMetadataUpdate_t47  ___updateForMetadata, ByteU5BU5D_t20* ___updatedBinaryData, Action_2_t291 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::FetchAllSavedGames(GooglePlayGames.BasicApi.DataSource,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>>)
extern "C" void UnsupportedSavedGamesClient_FetchAllSavedGames_m1803 (UnsupportedSavedGamesClient_t394 * __this, int32_t ___source, Action_2_t309 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::Delete(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C" void UnsupportedSavedGamesClient_Delete_m1804 (UnsupportedSavedGamesClient_t394 * __this, Object_t * ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
