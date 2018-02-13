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

// GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback
struct FlushCallback_t98;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_2.h"

// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FlushCallback__ctor_m389 (FlushCallback_t98 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/FlushStatus,System.IntPtr)
extern "C" void FlushCallback_Invoke_m390 (FlushCallback_t98 * __this, int32_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FlushCallback_t98(Il2CppObject* delegate, int32_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/FlushStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * FlushCallback_BeginInvoke_m391 (FlushCallback_t98 * __this, int32_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback::EndInvoke(System.IAsyncResult)
extern "C" void FlushCallback_EndInvoke_m392 (FlushCallback_t98 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
