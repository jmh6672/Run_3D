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

// GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback
struct FetchAllCallback_t149;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback
struct SnapshotSelectUICallback_t153;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback
struct ReadCallback_t152;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback
struct CommitCallback_t151;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback
struct OpenCallback_t150;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_UIntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Snap.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_6.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"

// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAll(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback,System.IntPtr)
extern "C" void SnapshotManager_SnapshotManager_FetchAll_m763 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, FetchAllCallback_t149 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ShowSelectUIOperation(System.Runtime.InteropServices.HandleRef,System.Boolean,System.Boolean,System.UInt32,System.String,GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback,System.IntPtr)
extern "C" void SnapshotManager_SnapshotManager_ShowSelectUIOperation_m764 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, bool ___allow_create, bool ___allow_delete, uint32_t ___max_snapshots, String_t* ___title, SnapshotSelectUICallback_t153 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_Read(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback,System.IntPtr)
extern "C" void SnapshotManager_SnapshotManager_Read_m765 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___snapshot_metadata, ReadCallback_t152 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_Commit(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,System.Byte[],System.UIntPtr,GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback,System.IntPtr)
extern "C" void SnapshotManager_SnapshotManager_Commit_m766 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___snapshot_metadata, IntPtr_t ___metadata_change, ByteU5BU5D_t20* ___data, UIntPtr_t  ___data_size, CommitCallback_t151 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_Open(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.Types/SnapshotConflictPolicy,GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback,System.IntPtr)
extern "C" void SnapshotManager_SnapshotManager_Open_m767 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, String_t* ___file_name, int32_t ___conflict_policy, OpenCallback_t150 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ResolveConflict(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,System.String,GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback,System.IntPtr)
extern "C" void SnapshotManager_SnapshotManager_ResolveConflict_m768 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___snapshot_metadata, IntPtr_t ___metadata_change, String_t* ___conflict_id, CommitCallback_t151 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_Delete(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" void SnapshotManager_SnapshotManager_Delete_m769 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___snapshot_metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void SnapshotManager_SnapshotManager_FetchAllResponse_Dispose_m770 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t SnapshotManager_SnapshotManager_FetchAllResponse_GetStatus_m771 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  SnapshotManager_SnapshotManager_FetchAllResponse_GetData_Length_m772 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t SnapshotManager_SnapshotManager_FetchAllResponse_GetData_GetElement_m773 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void SnapshotManager_SnapshotManager_OpenResponse_Dispose_m774 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t SnapshotManager_SnapshotManager_OpenResponse_GetStatus_m775 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t SnapshotManager_SnapshotManager_OpenResponse_GetData_m776 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictId(System.Runtime.InteropServices.HandleRef,System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  SnapshotManager_SnapshotManager_OpenResponse_GetConflictId_m777 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, StringBuilder_t361 * ___out_arg, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictOriginal(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t SnapshotManager_SnapshotManager_OpenResponse_GetConflictOriginal_m778 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictUnmerged(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t SnapshotManager_SnapshotManager_OpenResponse_GetConflictUnmerged_m779 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void SnapshotManager_SnapshotManager_CommitResponse_Dispose_m780 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t SnapshotManager_SnapshotManager_CommitResponse_GetStatus_m781 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t SnapshotManager_SnapshotManager_CommitResponse_GetData_m782 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ReadResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void SnapshotManager_SnapshotManager_ReadResponse_Dispose_m783 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ReadResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t SnapshotManager_SnapshotManager_ReadResponse_GetStatus_m784 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ReadResponse_GetData(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" UIntPtr_t  SnapshotManager_SnapshotManager_ReadResponse_GetData_m785 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, ByteU5BU5D_t20* ___out_arg, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_Dispose_m786 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_GetStatus_m787 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_GetData_m788 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
