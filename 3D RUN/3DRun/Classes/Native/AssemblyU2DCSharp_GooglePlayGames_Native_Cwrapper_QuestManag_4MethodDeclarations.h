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

// GooglePlayGames.Native.Cwrapper.QuestManager/FetchListCallback
struct FetchListCallback_t121;
// GooglePlayGames.Native.Cwrapper.QuestManager/AcceptCallback
struct AcceptCallback_t122;
// GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback
struct QuestUICallback_t124;
// GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback
struct ClaimMilestoneCallback_t123;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.QuestManager/FetchCallback
struct FetchCallback_t120;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "mscorlib_System_UIntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_4.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_5.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"

// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchList(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.Int32,GooglePlayGames.Native.Cwrapper.QuestManager/FetchListCallback,System.IntPtr)
extern "C" void QuestManager_QuestManager_FetchList_m562 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, int32_t ___fetch_flags, FetchListCallback_t121 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_Accept(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.QuestManager/AcceptCallback,System.IntPtr)
extern "C" void QuestManager_QuestManager_Accept_m563 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___quest, AcceptCallback_t122 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ShowAllUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback,System.IntPtr)
extern "C" void QuestManager_QuestManager_ShowAllUI_m564 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, QuestUICallback_t124 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ShowUI(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback,System.IntPtr)
extern "C" void QuestManager_QuestManager_ShowUI_m565 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___quest, QuestUICallback_t124 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestone(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback,System.IntPtr)
extern "C" void QuestManager_QuestManager_ClaimMilestone_m566 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___milestone, ClaimMilestoneCallback_t123 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.QuestManager/FetchCallback,System.IntPtr)
extern "C" void QuestManager_QuestManager_Fetch_m567 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, String_t* ___quest_id, FetchCallback_t120 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void QuestManager_QuestManager_FetchResponse_Dispose_m568 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t QuestManager_QuestManager_FetchResponse_GetStatus_m569 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t QuestManager_QuestManager_FetchResponse_GetData_m570 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchListResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void QuestManager_QuestManager_FetchListResponse_Dispose_m571 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchListResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t QuestManager_QuestManager_FetchListResponse_GetStatus_m572 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchListResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  QuestManager_QuestManager_FetchListResponse_GetData_Length_m573 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchListResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t QuestManager_QuestManager_FetchListResponse_GetData_GetElement_m574 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_AcceptResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void QuestManager_QuestManager_AcceptResponse_Dispose_m575 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/QuestAcceptStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_AcceptResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t QuestManager_QuestManager_AcceptResponse_GetStatus_m576 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_AcceptResponse_GetAcceptedQuest(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t QuestManager_QuestManager_AcceptResponse_GetAcceptedQuest_m577 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestoneResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void QuestManager_QuestManager_ClaimMilestoneResponse_Dispose_m578 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/QuestClaimMilestoneStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestoneResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t QuestManager_QuestManager_ClaimMilestoneResponse_GetStatus_m579 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestoneResponse_GetClaimedMilestone(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t QuestManager_QuestManager_ClaimMilestoneResponse_GetClaimedMilestone_m580 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestoneResponse_GetQuest(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t QuestManager_QuestManager_ClaimMilestoneResponse_GetQuest_m581 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_QuestUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void QuestManager_QuestManager_QuestUIResponse_Dispose_m582 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_QuestUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t QuestManager_QuestManager_QuestUIResponse_GetStatus_m583 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_QuestUIResponse_GetAcceptedQuest(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t QuestManager_QuestManager_QuestUIResponse_GetAcceptedQuest_m584 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_QuestUIResponse_GetMilestoneToClaim(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t QuestManager_QuestManager_QuestUIResponse_GetMilestoneToClaim_m585 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
