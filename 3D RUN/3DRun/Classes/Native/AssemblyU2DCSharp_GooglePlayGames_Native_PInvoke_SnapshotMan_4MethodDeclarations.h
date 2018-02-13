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

// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t289;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse>
struct Action_1_t480;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse>
struct Action_1_t481;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse>
struct Action_1_t482;
// GooglePlayGames.Native.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t290;
// GooglePlayGames.Native.NativeSnapshotMetadataChange
struct NativeSnapshotMetadataChange_t358;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse>
struct Action_1_t483;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse>
struct Action_1_t484;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Snap.h"

// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C" void SnapshotManager__ctor_m1719 (SnapshotManager_t289 * __this, GameServices_t210 * ___services, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::FetchAll(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse>)
extern "C" void SnapshotManager_FetchAll_m1720 (SnapshotManager_t289 * __this, int32_t ___source, Action_1_t480 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalFetchAllCallback(System.IntPtr,System.IntPtr)
extern "C" void SnapshotManager_InternalFetchAllCallback_m1721 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::SnapshotSelectUI(System.Boolean,System.Boolean,System.UInt32,System.String,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse>)
extern "C" void SnapshotManager_SnapshotSelectUI_m1722 (SnapshotManager_t289 * __this, bool ___allowCreate, bool ___allowDelete, uint32_t ___maxSnapshots, String_t* ___uiTitle, Action_1_t481 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalSnapshotSelectUICallback(System.IntPtr,System.IntPtr)
extern "C" void SnapshotManager_InternalSnapshotSelectUICallback_m1723 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Open(System.String,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.Types/SnapshotConflictPolicy,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse>)
extern "C" void SnapshotManager_Open_m1724 (SnapshotManager_t289 * __this, String_t* ___fileName, int32_t ___source, int32_t ___conflictPolicy, Action_1_t482 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalOpenCallback(System.IntPtr,System.IntPtr)
extern "C" void SnapshotManager_InternalOpenCallback_m1725 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Commit(GooglePlayGames.Native.NativeSnapshotMetadata,GooglePlayGames.Native.NativeSnapshotMetadataChange,System.Byte[],System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse>)
extern "C" void SnapshotManager_Commit_m1726 (SnapshotManager_t289 * __this, NativeSnapshotMetadata_t290 * ___metadata, NativeSnapshotMetadataChange_t358 * ___metadataChange, ByteU5BU5D_t20* ___updatedData, Action_1_t483 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Resolve(GooglePlayGames.Native.NativeSnapshotMetadata,GooglePlayGames.Native.NativeSnapshotMetadataChange,System.String,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse>)
extern "C" void SnapshotManager_Resolve_m1727 (SnapshotManager_t289 * __this, NativeSnapshotMetadata_t290 * ___metadata, NativeSnapshotMetadataChange_t358 * ___metadataChange, String_t* ___conflictId, Action_1_t483 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalCommitCallback(System.IntPtr,System.IntPtr)
extern "C" void SnapshotManager_InternalCommitCallback_m1728 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Delete(GooglePlayGames.Native.NativeSnapshotMetadata)
extern "C" void SnapshotManager_Delete_m1729 (SnapshotManager_t289 * __this, NativeSnapshotMetadata_t290 * ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Read(GooglePlayGames.Native.NativeSnapshotMetadata,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse>)
extern "C" void SnapshotManager_Read_m1730 (SnapshotManager_t289 * __this, NativeSnapshotMetadata_t290 * ___metadata, Action_1_t484 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalReadCallback(System.IntPtr,System.IntPtr)
extern "C" void SnapshotManager_InternalReadCallback_m1731 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
