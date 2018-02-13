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

// System.Delegate
struct Delegate_t453;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Callbacks_T.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.Callbacks::.cctor()
extern "C" void Callbacks__cctor_m1308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.Callbacks::ToIntPtr(System.Delegate)
extern "C" IntPtr_t Callbacks_ToIntPtr_m1309 (Object_t * __this /* static, unused */, Delegate_t453 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks::InternalShowUICallback(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr)
extern "C" void Callbacks_InternalShowUICallback_m1310 (Object_t * __this /* static, unused */, int32_t ___status, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks::PerformInternalCallback(System.String,GooglePlayGames.Native.PInvoke.Callbacks/Type,System.IntPtr,System.IntPtr)
extern "C" void Callbacks_PerformInternalCallback_m1311 (Object_t * __this /* static, unused */, String_t* ___callbackName, int32_t ___callbackType, IntPtr_t ___response, IntPtr_t ___userData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.Native.PInvoke.Callbacks::IntPtrAndSizeToByteArray(System.IntPtr,System.UIntPtr)
extern "C" ByteU5BU5D_t20* Callbacks_IntPtrAndSizeToByteArray_m1312 (Object_t * __this /* static, unused */, IntPtr_t ___data, UIntPtr_t  ___dataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks::<NoopUICallback>m__72(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus)
extern "C" void Callbacks_U3CNoopUICallbackU3Em__72_m1313 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
