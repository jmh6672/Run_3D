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

// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback
struct OnDataReceivedCallback_t132;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnDataReceivedCallback__ctor_m616 (OnDataReceivedCallback_t132 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.UIntPtr,System.Boolean,System.IntPtr)
extern "C" void OnDataReceivedCallback_Invoke_m617 (OnDataReceivedCallback_t132 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2, UIntPtr_t  ___arg3, bool ___arg4, IntPtr_t ___arg5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnDataReceivedCallback_t132(Il2CppObject* delegate, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2, UIntPtr_t  ___arg3, bool ___arg4, IntPtr_t ___arg5);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.UIntPtr,System.Boolean,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OnDataReceivedCallback_BeginInvoke_m618 (OnDataReceivedCallback_t132 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2, UIntPtr_t  ___arg3, bool ___arg4, IntPtr_t ___arg5, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnDataReceivedCallback_EndInvoke_m619 (OnDataReceivedCallback_t132 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
