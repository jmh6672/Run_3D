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

// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper
struct RealTimeEventListenerHelper_t273;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>
struct Action_1_t374;
// System.Action`2<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct Action_2_t468;
// System.String
struct String_t;
// System.Action`4<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean>
struct Action_4_t469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::.ctor(System.IntPtr)
extern "C" void RealTimeEventListenerHelper__ctor_m1609 (RealTimeEventListenerHelper_t273 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void RealTimeEventListenerHelper_CallDispose_m1610 (RealTimeEventListenerHelper_t273 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnRoomStatusChangedCallback(System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>)
extern "C" RealTimeEventListenerHelper_t273 * RealTimeEventListenerHelper_SetOnRoomStatusChangedCallback_m1611 (RealTimeEventListenerHelper_t273 * __this, Action_1_t374 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnRoomStatusChangedCallback(System.IntPtr,System.IntPtr)
extern "C" void RealTimeEventListenerHelper_InternalOnRoomStatusChangedCallback_m1612 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnRoomConnectedSetChangedCallback(System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>)
extern "C" RealTimeEventListenerHelper_t273 * RealTimeEventListenerHelper_SetOnRoomConnectedSetChangedCallback_m1613 (RealTimeEventListenerHelper_t273 * __this, Action_1_t374 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnRoomConnectedSetChangedCallback(System.IntPtr,System.IntPtr)
extern "C" void RealTimeEventListenerHelper_InternalOnRoomConnectedSetChangedCallback_m1614 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnP2PConnectedCallback(System.Action`2<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>)
extern "C" RealTimeEventListenerHelper_t273 * RealTimeEventListenerHelper_SetOnP2PConnectedCallback_m1615 (RealTimeEventListenerHelper_t273 * __this, Action_2_t468 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnP2PConnectedCallback(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void RealTimeEventListenerHelper_InternalOnP2PConnectedCallback_m1616 (Object_t * __this /* static, unused */, IntPtr_t ___room, IntPtr_t ___participant, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnP2PDisconnectedCallback(System.Action`2<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>)
extern "C" RealTimeEventListenerHelper_t273 * RealTimeEventListenerHelper_SetOnP2PDisconnectedCallback_m1617 (RealTimeEventListenerHelper_t273 * __this, Action_2_t468 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnP2PDisconnectedCallback(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void RealTimeEventListenerHelper_InternalOnP2PDisconnectedCallback_m1618 (Object_t * __this /* static, unused */, IntPtr_t ___room, IntPtr_t ___participant, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnParticipantStatusChangedCallback(System.Action`2<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>)
extern "C" RealTimeEventListenerHelper_t273 * RealTimeEventListenerHelper_SetOnParticipantStatusChangedCallback_m1619 (RealTimeEventListenerHelper_t273 * __this, Action_2_t468 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnParticipantStatusChangedCallback(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void RealTimeEventListenerHelper_InternalOnParticipantStatusChangedCallback_m1620 (Object_t * __this /* static, unused */, IntPtr_t ___room, IntPtr_t ___participant, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::PerformRoomAndParticipantCallback(System.String,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void RealTimeEventListenerHelper_PerformRoomAndParticipantCallback_m1621 (Object_t * __this /* static, unused */, String_t* ___callbackName, IntPtr_t ___room, IntPtr_t ___participant, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnDataReceivedCallback(System.Action`4<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean>)
extern "C" RealTimeEventListenerHelper_t273 * RealTimeEventListenerHelper_SetOnDataReceivedCallback_m1622 (RealTimeEventListenerHelper_t273 * __this, Action_4_t469 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnDataReceived(System.IntPtr,System.IntPtr,System.IntPtr,System.UIntPtr,System.Boolean,System.IntPtr)
extern "C" void RealTimeEventListenerHelper_InternalOnDataReceived_m1623 (Object_t * __this /* static, unused */, IntPtr_t ___room, IntPtr_t ___participant, IntPtr_t ___data, UIntPtr_t  ___dataLength, bool ___isReliable, IntPtr_t ___userData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::ToCallbackPointer(System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>)
extern "C" IntPtr_t RealTimeEventListenerHelper_ToCallbackPointer_m1624 (Object_t * __this /* static, unused */, Action_1_t374 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::Create()
extern "C" RealTimeEventListenerHelper_t273 * RealTimeEventListenerHelper_Create_m1625 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
