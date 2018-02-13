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

// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback
struct LeaveRoomCallback_t135;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LeaveRoomCallback__ctor_m632 (LeaveRoomCallback_t135 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus,System.IntPtr)
extern "C" void LeaveRoomCallback_Invoke_m633 (LeaveRoomCallback_t135 * __this, int32_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LeaveRoomCallback_t135(Il2CppObject* delegate, int32_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * LeaveRoomCallback_BeginInvoke_m634 (LeaveRoomCallback_t135 * __this, int32_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::EndInvoke(System.IAsyncResult)
extern "C" void LeaveRoomCallback_EndInvoke_m635 (LeaveRoomCallback_t135 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
