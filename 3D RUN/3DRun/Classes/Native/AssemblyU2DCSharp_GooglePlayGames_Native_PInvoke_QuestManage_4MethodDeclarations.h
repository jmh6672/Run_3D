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

// GooglePlayGames.Native.PInvoke.QuestManager
struct QuestManager_t237;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/FetchResponse>
struct Action_1_t464;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/FetchListResponse>
struct Action_1_t465;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse>
struct Action_1_t445;
// GooglePlayGames.Native.NativeQuest
struct NativeQuest_t355;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/AcceptResponse>
struct Action_1_t466;
// GooglePlayGames.Native.NativeQuestMilestone
struct NativeQuestMilestone_t356;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/ClaimMilestoneResponse>
struct Action_1_t467;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.QuestManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C" void QuestManager__ctor_m1595 (QuestManager_t237 * __this, GameServices_t210 * ___services, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::Fetch(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/FetchResponse>)
extern "C" void QuestManager_Fetch_m1596 (QuestManager_t237 * __this, int32_t ___source, String_t* ___questId, Action_1_t464 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalFetchCallback(System.IntPtr,System.IntPtr)
extern "C" void QuestManager_InternalFetchCallback_m1597 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::FetchList(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.Int32,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/FetchListResponse>)
extern "C" void QuestManager_FetchList_m1598 (QuestManager_t237 * __this, int32_t ___source, int32_t ___fetchFlags, Action_1_t465 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalFetchListCallback(System.IntPtr,System.IntPtr)
extern "C" void QuestManager_InternalFetchListCallback_m1599 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::ShowAllQuestUI(System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse>)
extern "C" void QuestManager_ShowAllQuestUI_m1600 (QuestManager_t237 * __this, Action_1_t445 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::ShowQuestUI(GooglePlayGames.Native.NativeQuest,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse>)
extern "C" void QuestManager_ShowQuestUI_m1601 (QuestManager_t237 * __this, NativeQuest_t355 * ___quest, Action_1_t445 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalQuestUICallback(System.IntPtr,System.IntPtr)
extern "C" void QuestManager_InternalQuestUICallback_m1602 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::Accept(GooglePlayGames.Native.NativeQuest,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/AcceptResponse>)
extern "C" void QuestManager_Accept_m1603 (QuestManager_t237 * __this, NativeQuest_t355 * ___quest, Action_1_t466 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalAcceptCallback(System.IntPtr,System.IntPtr)
extern "C" void QuestManager_InternalAcceptCallback_m1604 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::ClaimMilestone(GooglePlayGames.Native.NativeQuestMilestone,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/ClaimMilestoneResponse>)
extern "C" void QuestManager_ClaimMilestone_m1605 (QuestManager_t237 * __this, NativeQuestMilestone_t356 * ___milestone, Action_1_t467 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalClaimMilestoneCallback(System.IntPtr,System.IntPtr)
extern "C" void QuestManager_InternalClaimMilestoneCallback_m1606 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
