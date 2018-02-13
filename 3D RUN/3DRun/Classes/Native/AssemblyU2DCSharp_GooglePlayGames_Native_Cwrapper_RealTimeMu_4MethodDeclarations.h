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

// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback
struct WaitingRoomUICallback_t139;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitingRoomUICallback__ctor_m648 (WaitingRoomUICallback_t139 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback::Invoke(System.IntPtr,System.IntPtr)
extern "C" void WaitingRoomUICallback_Invoke_m649 (WaitingRoomUICallback_t139 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WaitingRoomUICallback_t139(Il2CppObject* delegate, IntPtr_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * WaitingRoomUICallback_BeginInvoke_m650 (WaitingRoomUICallback_t139 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitingRoomUICallback_EndInvoke_m651 (WaitingRoomUICallback_t139 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
