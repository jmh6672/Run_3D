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

// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod
struct OutStringMethod_t360;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities::.cctor()
extern "C" void PInvokeUtilities__cctor_m1528 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef GooglePlayGames.Native.PInvoke.PInvokeUtilities::CheckNonNull(System.Runtime.InteropServices.HandleRef)
extern "C" HandleRef_t336  PInvokeUtilities_CheckNonNull_m1529 (Object_t * __this /* static, unused */, HandleRef_t336  ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.PInvokeUtilities::IsNull(System.Runtime.InteropServices.HandleRef)
extern "C" bool PInvokeUtilities_IsNull_m1530 (Object_t * __this /* static, unused */, HandleRef_t336  ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.PInvokeUtilities::IsNull(System.IntPtr)
extern "C" bool PInvokeUtilities_IsNull_m1531 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.Native.PInvoke.PInvokeUtilities::FromMillisSinceUnixEpoch(System.Int64)
extern "C" DateTime_t51  PInvokeUtilities_FromMillisSinceUnixEpoch_m1532 (Object_t * __this /* static, unused */, int64_t ___millisSinceEpoch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.PInvokeUtilities::OutParamsToString(GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod)
extern "C" String_t* PInvokeUtilities_OutParamsToString_m1533 (Object_t * __this /* static, unused */, OutStringMethod_t360 * ___outStringMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.Native.PInvoke.PInvokeUtilities::ToMilliseconds(System.TimeSpan)
extern "C" int64_t PInvokeUtilities_ToMilliseconds_m1534 (Object_t * __this /* static, unused */, TimeSpan_t433  ___span, const MethodInfo* method) IL2CPP_METHOD_ATTR;
