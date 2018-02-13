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

// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t241;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfig
struct RealtimeRoomConfig_t271;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper
struct RealTimeEventListenerHelper_t273;
// System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>
struct Action_1_t471;
// System.Action`1<GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>
struct Action_1_t472;
// System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse>
struct Action_1_t473;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse>
struct Action_1_t474;
// System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse>
struct Action_1_t475;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus>
struct Action_1_t476;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t280;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>
struct Action_1_t477;
// System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct List_1_t478;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_3.h"

// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C" void RealtimeManager__ctor_m1649 (RealtimeManager_t241 * __this, GameServices_t210 * ___gameServices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::CreateRoom(GooglePlayGames.Native.PInvoke.RealtimeRoomConfig,GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper,System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>)
extern "C" void RealtimeManager_CreateRoom_m1650 (RealtimeManager_t241 * __this, RealtimeRoomConfig_t271 * ___config, RealTimeEventListenerHelper_t273 * ___helper, Action_1_t471 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::ShowPlayerSelectUI(System.UInt32,System.UInt32,System.Boolean,System.Action`1<GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>)
extern "C" void RealtimeManager_ShowPlayerSelectUI_m1651 (RealtimeManager_t241 * __this, uint32_t ___minimumPlayers, uint32_t ___maxiumPlayers, bool ___allowAutomatching, Action_1_t472 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalPlayerSelectUIcallback(System.IntPtr,System.IntPtr)
extern "C" void RealtimeManager_InternalPlayerSelectUIcallback_m1652 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalRealTimeRoomCallback(System.IntPtr,System.IntPtr)
extern "C" void RealtimeManager_InternalRealTimeRoomCallback_m1653 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalRoomInboxUICallback(System.IntPtr,System.IntPtr)
extern "C" void RealtimeManager_InternalRoomInboxUICallback_m1654 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::ShowRoomInboxUI(System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse>)
extern "C" void RealtimeManager_ShowRoomInboxUI_m1655 (RealtimeManager_t241 * __this, Action_1_t473 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::ShowWaitingRoomUI(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.UInt32,System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse>)
extern "C" void RealtimeManager_ShowWaitingRoomUI_m1656 (RealtimeManager_t241 * __this, NativeRealTimeRoom_t252 * ___room, uint32_t ___minimumParticipantsBeforeStarting, Action_1_t474 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalWaitingRoomUICallback(System.IntPtr,System.IntPtr)
extern "C" void RealtimeManager_InternalWaitingRoomUICallback_m1657 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalFetchInvitationsCallback(System.IntPtr,System.IntPtr)
extern "C" void RealtimeManager_InternalFetchInvitationsCallback_m1658 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::FetchInvitations(System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse>)
extern "C" void RealtimeManager_FetchInvitations_m1659 (RealtimeManager_t241 * __this, Action_1_t475 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalLeaveRoomCallback(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus,System.IntPtr)
extern "C" void RealtimeManager_InternalLeaveRoomCallback_m1660 (Object_t * __this /* static, unused */, int32_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::LeaveRoom(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus>)
extern "C" void RealtimeManager_LeaveRoom_m1661 (RealtimeManager_t241 * __this, NativeRealTimeRoom_t252 * ___room, Action_1_t476 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::AcceptInvitation(GooglePlayGames.Native.PInvoke.MultiplayerInvitation,GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper,System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>)
extern "C" void RealtimeManager_AcceptInvitation_m1662 (RealtimeManager_t241 * __this, MultiplayerInvitation_t280 * ___invitation, RealTimeEventListenerHelper_t273 * ___listener, Action_1_t471 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::DeclineInvitation(GooglePlayGames.Native.PInvoke.MultiplayerInvitation)
extern "C" void RealtimeManager_DeclineInvitation_m1663 (RealtimeManager_t241 * __this, MultiplayerInvitation_t280 * ___invitation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::SendReliableMessage(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>)
extern "C" void RealtimeManager_SendReliableMessage_m1664 (RealtimeManager_t241 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___participant, ByteU5BU5D_t20* ___data, Action_1_t477 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalSendReliableMessageCallback(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
extern "C" void RealtimeManager_InternalSendReliableMessageCallback_m1665 (Object_t * __this /* static, unused */, int32_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::SendUnreliableMessageToAll(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.Byte[])
extern "C" void RealtimeManager_SendUnreliableMessageToAll_m1666 (RealtimeManager_t241 * __this, NativeRealTimeRoom_t252 * ___room, ByteU5BU5D_t20* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::SendUnreliableMessageToSpecificParticipants(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant>,System.Byte[])
extern "C" void RealtimeManager_SendUnreliableMessageToSpecificParticipants_m1667 (RealtimeManager_t241 * __this, NativeRealTimeRoom_t252 * ___room, List_1_t478 * ___recipients, ByteU5BU5D_t20* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.RealtimeManager::ToCallbackPointer(System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>)
extern "C" IntPtr_t RealtimeManager_ToCallbackPointer_m1668 (Object_t * __this /* static, unused */, Action_1_t471 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.RealtimeManager::<SendUnreliableMessageToSpecificParticipants>m__9B(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" IntPtr_t RealtimeManager_U3CSendUnreliableMessageToSpecificParticipantsU3Em__9B_m1669 (Object_t * __this /* static, unused */, MultiplayerParticipant_t350 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
