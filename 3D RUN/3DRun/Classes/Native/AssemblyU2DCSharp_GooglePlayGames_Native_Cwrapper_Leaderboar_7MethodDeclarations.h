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

// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchAllCallback
struct FetchAllCallback_t104;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScoreSummaryCallback
struct FetchScoreSummaryCallback_t106;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowAllUICallback
struct ShowAllUICallback_t108;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback
struct FetchScorePageCallback_t105;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchAllScoreSummariesCallback
struct FetchAllScoreSummariesCallback_t107;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback
struct ShowUICallback_t109;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchCallback
struct FetchCallback_t103;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Lead_1.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Lead_2.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Lead_0.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAll(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchAllCallback,System.IntPtr)
extern "C" void LeaderboardManager_LeaderboardManager_FetchAll_m437 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, FetchAllCallback_t104 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScoreSummary(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.Types/LeaderboardTimeSpan,GooglePlayGames.Native.Cwrapper.Types/LeaderboardCollection,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScoreSummaryCallback,System.IntPtr)
extern "C" void LeaderboardManager_LeaderboardManager_FetchScoreSummary_m438 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, String_t* ___leaderboard_id, int32_t ___time_span, int32_t ___collection, FetchScoreSummaryCallback_t106 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_ScorePageToken(System.Runtime.InteropServices.HandleRef,System.String,GooglePlayGames.Native.Cwrapper.Types/LeaderboardStart,GooglePlayGames.Native.Cwrapper.Types/LeaderboardTimeSpan,GooglePlayGames.Native.Cwrapper.Types/LeaderboardCollection)
extern "C" IntPtr_t LeaderboardManager_LeaderboardManager_ScorePageToken_m439 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___leaderboard_id, int32_t ___start, int32_t ___time_span, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_ShowAllUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowAllUICallback,System.IntPtr)
extern "C" void LeaderboardManager_LeaderboardManager_ShowAllUI_m440 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, ShowAllUICallback_t108 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScorePage(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.IntPtr,System.UInt32,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback,System.IntPtr)
extern "C" void LeaderboardManager_LeaderboardManager_FetchScorePage_m441 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, IntPtr_t ___token, uint32_t ___max_results, FetchScorePageCallback_t105 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummaries(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchAllScoreSummariesCallback,System.IntPtr)
extern "C" void LeaderboardManager_LeaderboardManager_FetchAllScoreSummaries_m442 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, String_t* ___leaderboard_id, FetchAllScoreSummariesCallback_t107 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_ShowUI(System.Runtime.InteropServices.HandleRef,System.String,GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback,System.IntPtr)
extern "C" void LeaderboardManager_LeaderboardManager_ShowUI_m443 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___leaderboard_id, ShowUICallback_t109 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchCallback,System.IntPtr)
extern "C" void LeaderboardManager_LeaderboardManager_Fetch_m444 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, String_t* ___leaderboard_id, FetchCallback_t103 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_SubmitScore(System.Runtime.InteropServices.HandleRef,System.String,System.UInt64,System.String)
extern "C" void LeaderboardManager_LeaderboardManager_SubmitScore_m445 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___leaderboard_id, uint64_t ___score, String_t* ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void LeaderboardManager_LeaderboardManager_FetchResponse_Dispose_m446 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t LeaderboardManager_LeaderboardManager_FetchResponse_GetStatus_m447 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t LeaderboardManager_LeaderboardManager_FetchResponse_GetData_m448 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void LeaderboardManager_LeaderboardManager_FetchAllResponse_Dispose_m449 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t LeaderboardManager_LeaderboardManager_FetchAllResponse_GetStatus_m450 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  LeaderboardManager_LeaderboardManager_FetchAllResponse_GetData_Length_m451 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t LeaderboardManager_LeaderboardManager_FetchAllResponse_GetData_GetElement_m452 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScorePageResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void LeaderboardManager_LeaderboardManager_FetchScorePageResponse_Dispose_m453 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScorePageResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t LeaderboardManager_LeaderboardManager_FetchScorePageResponse_GetStatus_m454 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScorePageResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t LeaderboardManager_LeaderboardManager_FetchScorePageResponse_GetData_m455 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScoreSummaryResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void LeaderboardManager_LeaderboardManager_FetchScoreSummaryResponse_Dispose_m456 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScoreSummaryResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t LeaderboardManager_LeaderboardManager_FetchScoreSummaryResponse_GetStatus_m457 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScoreSummaryResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t LeaderboardManager_LeaderboardManager_FetchScoreSummaryResponse_GetData_m458 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummariesResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void LeaderboardManager_LeaderboardManager_FetchAllScoreSummariesResponse_Dispose_m459 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummariesResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t LeaderboardManager_LeaderboardManager_FetchAllScoreSummariesResponse_GetStatus_m460 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummariesResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  LeaderboardManager_LeaderboardManager_FetchAllScoreSummariesResponse_GetData_Length_m461 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummariesResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t LeaderboardManager_LeaderboardManager_FetchAllScoreSummariesResponse_GetData_GetElement_m462 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
