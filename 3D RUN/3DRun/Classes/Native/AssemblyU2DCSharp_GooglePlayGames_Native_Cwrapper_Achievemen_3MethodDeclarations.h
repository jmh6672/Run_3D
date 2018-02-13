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

// GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback
struct FetchAllCallback_t71;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback
struct ShowAllUICallback_t76;
// GooglePlayGames.Native.Cwrapper.AchievementManager/FetchCallback
struct FetchCallback_t75;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAll(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback,System.IntPtr)
extern "C" void AchievementManager_AchievementManager_FetchAll_m312 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, FetchAllCallback_t71 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_Reveal(System.Runtime.InteropServices.HandleRef,System.String)
extern "C" void AchievementManager_AchievementManager_Reveal_m313 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___achievement_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_Unlock(System.Runtime.InteropServices.HandleRef,System.String)
extern "C" void AchievementManager_AchievementManager_Unlock_m314 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___achievement_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_ShowAllUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback,System.IntPtr)
extern "C" void AchievementManager_AchievementManager_ShowAllUI_m315 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, ShowAllUICallback_t76 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_SetStepsAtLeast(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32)
extern "C" void AchievementManager_AchievementManager_SetStepsAtLeast_m316 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___achievement_id, uint32_t ___steps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_Increment(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32)
extern "C" void AchievementManager_AchievementManager_Increment_m317 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___achievement_id, uint32_t ___steps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.AchievementManager/FetchCallback,System.IntPtr)
extern "C" void AchievementManager_AchievementManager_Fetch_m318 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, String_t* ___achievement_id, FetchCallback_t75 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void AchievementManager_AchievementManager_FetchAllResponse_Dispose_m319 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t AchievementManager_AchievementManager_FetchAllResponse_GetStatus_m320 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAllResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  AchievementManager_AchievementManager_FetchAllResponse_GetData_Length_m321 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAllResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t AchievementManager_AchievementManager_FetchAllResponse_GetData_GetElement_m322 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void AchievementManager_AchievementManager_FetchResponse_Dispose_m323 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t AchievementManager_AchievementManager_FetchResponse_GetStatus_m324 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t AchievementManager_AchievementManager_FetchResponse_GetData_m325 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
