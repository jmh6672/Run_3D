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

// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback
struct OnP2PDisconnectedCallback_t130;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnP2PDisconnectedCallback__ctor_m608 (OnP2PDisconnectedCallback_t130 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void OnP2PDisconnectedCallback_Invoke_m609 (OnP2PDisconnectedCallback_t130 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnP2PDisconnectedCallback_t130(Il2CppObject* delegate, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OnP2PDisconnectedCallback_BeginInvoke_m610 (OnP2PDisconnectedCallback_t130 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, IntPtr_t ___arg2, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnP2PDisconnectedCallback_EndInvoke_m611 (OnP2PDisconnectedCallback_t130 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
