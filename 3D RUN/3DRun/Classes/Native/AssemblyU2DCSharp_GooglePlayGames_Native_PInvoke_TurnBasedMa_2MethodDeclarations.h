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

// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback
struct TurnBasedMatchCallback_t389;
// System.Object
struct Object_t;
// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse
struct TurnBasedMatchResponse_t387;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::.ctor(System.Object,System.IntPtr)
extern "C" void TurnBasedMatchCallback__ctor_m1749 (TurnBasedMatchCallback_t389 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::Invoke(GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse)
extern "C" void TurnBasedMatchCallback_Invoke_m1750 (TurnBasedMatchCallback_t389 * __this, TurnBasedMatchResponse_t387 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TurnBasedMatchCallback_t389(Il2CppObject* delegate, TurnBasedMatchResponse_t387 * ___response);
// System.IAsyncResult GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::BeginInvoke(GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse,System.AsyncCallback,System.Object)
extern "C" Object_t * TurnBasedMatchCallback_BeginInvoke_m1751 (TurnBasedMatchCallback_t389 * __this, TurnBasedMatchResponse_t387 * ___response, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::EndInvoke(System.IAsyncResult)
extern "C" void TurnBasedMatchCallback_EndInvoke_m1752 (TurnBasedMatchCallback_t389 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
