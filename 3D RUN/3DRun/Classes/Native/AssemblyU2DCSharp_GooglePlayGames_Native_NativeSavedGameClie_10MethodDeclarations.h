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

// GooglePlayGames.Native.NativeSavedGameClient
struct NativeSavedGameClient_t302;
// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t289;
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
// GooglePlayGames.Native.NativeSnapshotMetadataChange
struct NativeSnapshotMetadataChange_t358;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSource.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_Conflic.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_SavedGa_1.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Snap.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_SavedGa.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_6.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_SelectU.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"

// System.Void GooglePlayGames.Native.NativeSavedGameClient::.ctor(GooglePlayGames.Native.PInvoke.SnapshotManager)
extern "C" void NativeSavedGameClient__ctor_m1197 (NativeSavedGameClient_t302 * __this, SnapshotManager_t289 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::.cctor()
extern "C" void NativeSavedGameClient__cctor_m1198 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::OpenWithAutomaticConflictResolution(System.String,GooglePlayGames.BasicApi.DataSource,GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void NativeSavedGameClient_OpenWithAutomaticConflictResolution_m1199 (NativeSavedGameClient_t302 * __this, String_t* ___filename, int32_t ___source, int32_t ___resolutionStrategy, Action_2_t291 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback GooglePlayGames.Native.NativeSavedGameClient::ToOnGameThread(GooglePlayGames.BasicApi.SavedGame.ConflictCallback)
extern "C" ConflictCallback_t299 * NativeSavedGameClient_ToOnGameThread_m1200 (NativeSavedGameClient_t302 * __this, ConflictCallback_t299 * ___conflictCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::OpenWithManualConflictResolution(System.String,GooglePlayGames.BasicApi.DataSource,System.Boolean,GooglePlayGames.BasicApi.SavedGame.ConflictCallback,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void NativeSavedGameClient_OpenWithManualConflictResolution_m1201 (NativeSavedGameClient_t302 * __this, String_t* ___filename, int32_t ___source, bool ___prefetchDataOnConflict, ConflictCallback_t299 * ___conflictCallback, Action_2_t291 * ___completedCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::InternalManualOpen(System.String,GooglePlayGames.BasicApi.DataSource,System.Boolean,GooglePlayGames.BasicApi.SavedGame.ConflictCallback,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void NativeSavedGameClient_InternalManualOpen_m1202 (NativeSavedGameClient_t302 * __this, String_t* ___filename, int32_t ___source, bool ___prefetchDataOnConflict, ConflictCallback_t299 * ___conflictCallback, Action_2_t291 * ___completedCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::ReadBinaryData(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]>)
extern "C" void NativeSavedGameClient_ReadBinaryData_m1203 (NativeSavedGameClient_t302 * __this, Object_t * ___metadata, Action_2_t304 * ___completedCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::ShowSelectSavedGameUI(System.String,System.UInt32,System.Boolean,System.Boolean,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SelectUIStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void NativeSavedGameClient_ShowSelectSavedGameUI_m1204 (NativeSavedGameClient_t302 * __this, String_t* ___uiTitle, uint32_t ___maxDisplayedSavedGames, bool ___showCreateSaveUI, bool ___showDeleteSaveUI, Action_2_t306 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::CommitUpdate(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate,System.Byte[],System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C" void NativeSavedGameClient_CommitUpdate_m1205 (NativeSavedGameClient_t302 * __this, Object_t * ___metadata, SavedGameMetadataUpdate_t47  ___updateForMetadata, ByteU5BU5D_t20* ___updatedBinaryData, Action_2_t291 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::FetchAllSavedGames(GooglePlayGames.BasicApi.DataSource,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>>)
extern "C" void NativeSavedGameClient_FetchAllSavedGames_m1206 (NativeSavedGameClient_t302 * __this, int32_t ___source, Action_2_t309 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::Delete(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C" void NativeSavedGameClient_Delete_m1207 (NativeSavedGameClient_t302 * __this, Object_t * ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeSavedGameClient::IsValidFilename(System.String)
extern "C" bool NativeSavedGameClient_IsValidFilename_m1208 (Object_t * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/SnapshotConflictPolicy GooglePlayGames.Native.NativeSavedGameClient::AsConflictPolicy(GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy)
extern "C" int32_t NativeSavedGameClient_AsConflictPolicy_m1209 (Object_t * __this /* static, unused */, int32_t ___strategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus GooglePlayGames.Native.NativeSavedGameClient::AsRequestStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus)
extern "C" int32_t NativeSavedGameClient_AsRequestStatus_m1210 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/DataSource GooglePlayGames.Native.NativeSavedGameClient::AsDataSource(GooglePlayGames.BasicApi.DataSource)
extern "C" int32_t NativeSavedGameClient_AsDataSource_m1211 (Object_t * __this /* static, unused */, int32_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus GooglePlayGames.Native.NativeSavedGameClient::AsRequestStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus)
extern "C" int32_t NativeSavedGameClient_AsRequestStatus_m1212 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SelectUIStatus GooglePlayGames.Native.NativeSavedGameClient::AsUIStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus)
extern "C" int32_t NativeSavedGameClient_AsUIStatus_m1213 (Object_t * __this /* static, unused */, int32_t ___uiStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeSnapshotMetadataChange GooglePlayGames.Native.NativeSavedGameClient::AsMetadataChange(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate)
extern "C" NativeSnapshotMetadataChange_t358 * NativeSavedGameClient_AsMetadataChange_m1214 (Object_t * __this /* static, unused */, SavedGameMetadataUpdate_t47  ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
