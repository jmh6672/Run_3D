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

// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback
struct OnP2PConnectedCallback_t129;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnP2PConnectedCallback__ctor_m604 (OnP2PConnectedCallback_t129 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void OnP2PConnectedCallback_Invoke_m605 (OnP2PConnectedCallback_t129 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnP2PConnectedCallback_t129(Il2CppObject* delegate, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OnP2PConnectedCallback_BeginInvoke_m606 (OnP2PConnectedCallback_t129 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnP2PConnectedCallback_EndInvoke_m607 (OnP2PConnectedCallback_t129 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
