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

// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback
struct RealTimeRoomCallback_t134;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback
struct LeaveRoomCallback_t135;
// System.IntPtr[]
struct IntPtrU5BU5D_t443;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback
struct WaitingRoomUICallback_t139;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_t138;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback
struct SendReliableMessageCallback_t136;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback
struct FetchInvitationsCallback_t140;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback
struct RoomInboxUICallback_t137;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_UIntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_3.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_CreateRealTimeRoom(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_CreateRealTimeRoom_m656 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___config, IntPtr_t ___helper, RealTimeRoomCallback_t134 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_LeaveRoom(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_LeaveRoom_m657 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___room, LeaveRoomCallback_t135 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_SendUnreliableMessage(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr[],System.UIntPtr,System.Byte[],System.UIntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_SendUnreliableMessage_m658 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___room, IntPtrU5BU5D_t443* ___participants, UIntPtr_t  ___participants_size, ByteU5BU5D_t20* ___data, UIntPtr_t  ___data_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_ShowWaitingRoomUI(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.UInt32,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_ShowWaitingRoomUI_m659 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___room, uint32_t ___min_participants_to_start, WaitingRoomUICallback_t139 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_ShowPlayerSelectUI(System.Runtime.InteropServices.HandleRef,System.UInt32,System.UInt32,System.Boolean,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_ShowPlayerSelectUI_m660 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, uint32_t ___minimum_players, uint32_t ___maximum_players, bool ___allow_automatch, PlayerSelectUICallback_t138 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_DismissInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_DismissInvitation_m661 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___invitation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_DeclineInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_DeclineInvitation_m662 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___invitation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_SendReliableMessage(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,System.Byte[],System.UIntPtr,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_SendReliableMessage_m663 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___room, IntPtr_t ___participant, ByteU5BU5D_t20* ___data, UIntPtr_t  ___data_size, SendReliableMessageCallback_t136 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_AcceptInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_AcceptInvitation_m664 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___invitation, IntPtr_t ___helper, RealTimeRoomCallback_t134 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitations(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitations_m665 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, FetchInvitationsCallback_t140 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_SendUnreliableMessageToOthers(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.Byte[],System.UIntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_SendUnreliableMessageToOthers_m666 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___room, ByteU5BU5D_t20* ___data, UIntPtr_t  ___data_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_ShowRoomInboxUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback,System.IntPtr)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_ShowRoomInboxUI_m667 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, RoomInboxUICallback_t137 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose_m668 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus_m669 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom_m670 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose_m671 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus_m672 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation_m673 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose_m674 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus_m675 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom_m676 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose_m677 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus_m678 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length_m679 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement_m680 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
