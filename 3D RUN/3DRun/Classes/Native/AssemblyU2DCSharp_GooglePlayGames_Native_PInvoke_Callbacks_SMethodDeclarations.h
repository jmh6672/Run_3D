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

// GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal
struct ShowUICallbackInternal_t338;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"

// System.Void GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal::.ctor(System.Object,System.IntPtr)
extern "C" void ShowUICallbackInternal__ctor_m1304 (ShowUICallbackInternal_t338 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr)
extern "C" void ShowUICallbackInternal_Invoke_m1305 (ShowUICallbackInternal_t338 * __this, int32_t ___status, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ShowUICallbackInternal_t338(Il2CppObject* delegate, int32_t ___status, IntPtr_t ___data);
// System.IAsyncResult GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * ShowUICallbackInternal_BeginInvoke_m1306 (ShowUICallbackInternal_t338 * __this, int32_t ___status, IntPtr_t ___data, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal::EndInvoke(System.IAsyncResult)
extern "C" void ShowUICallbackInternal_EndInvoke_m1307 (ShowUICallbackInternal_t338 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
