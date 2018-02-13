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

// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback
struct FetchListCallback_t117;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback
struct FetchCallback_t116;
// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback
struct FetchSelfCallback_t115;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchInvitable(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback,System.IntPtr)
extern "C" void PlayerManager_PlayerManager_FetchInvitable_m514 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, FetchListCallback_t117 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchConnected(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback,System.IntPtr)
extern "C" void PlayerManager_PlayerManager_FetchConnected_m515 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, FetchListCallback_t117 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback,System.IntPtr)
extern "C" void PlayerManager_PlayerManager_Fetch_m516 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, String_t* ___player_id, FetchCallback_t116 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchRecentlyPlayed(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback,System.IntPtr)
extern "C" void PlayerManager_PlayerManager_FetchRecentlyPlayed_m517 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, FetchListCallback_t117 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelf(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback,System.IntPtr)
extern "C" void PlayerManager_PlayerManager_FetchSelf_m518 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, FetchSelfCallback_t115 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void PlayerManager_PlayerManager_FetchSelfResponse_Dispose_m519 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t PlayerManager_PlayerManager_FetchSelfResponse_GetStatus_m520 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t PlayerManager_PlayerManager_FetchSelfResponse_GetData_m521 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void PlayerManager_PlayerManager_FetchResponse_Dispose_m522 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t PlayerManager_PlayerManager_FetchResponse_GetStatus_m523 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t PlayerManager_PlayerManager_FetchResponse_GetData_m524 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void PlayerManager_PlayerManager_FetchListResponse_Dispose_m525 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t PlayerManager_PlayerManager_FetchListResponse_GetStatus_m526 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  PlayerManager_PlayerManager_FetchListResponse_GetData_Length_m527 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t PlayerManager_PlayerManager_FetchListResponse_GetData_GetElement_m528 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
