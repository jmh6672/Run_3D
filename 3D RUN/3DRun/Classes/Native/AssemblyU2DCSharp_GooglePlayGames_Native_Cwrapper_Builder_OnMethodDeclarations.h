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

// GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback
struct OnLogCallback_t78;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_LogL.h"
#include "mscorlib_System_String.h"

// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnLogCallback__ctor_m326 (OnLogCallback_t78 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/LogLevel,System.String,System.IntPtr)
extern "C" void OnLogCallback_Invoke_m327 (OnLogCallback_t78 * __this, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnLogCallback_t78(Il2CppObject* delegate, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/LogLevel,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OnLogCallback_BeginInvoke_m328 (OnLogCallback_t78 * __this, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnLogCallback_EndInvoke_m329 (OnLogCallback_t78 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
