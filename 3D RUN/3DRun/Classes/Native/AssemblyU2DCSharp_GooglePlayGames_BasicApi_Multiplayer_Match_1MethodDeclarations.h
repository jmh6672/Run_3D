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

// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t34;
// System.Object
struct Object_t;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t19;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void MatchDelegate__ctor_m1903 (MatchDelegate_t34 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchDelegate::Invoke(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean)
extern "C" void MatchDelegate_Invoke_m1904 (MatchDelegate_t34 * __this, TurnBasedMatch_t19 * ___match, bool ___shouldAutoLaunch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MatchDelegate_t34(Il2CppObject* delegate, TurnBasedMatch_t19 * ___match, bool ___shouldAutoLaunch);
// System.IAsyncResult GooglePlayGames.BasicApi.Multiplayer.MatchDelegate::BeginInvoke(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchDelegate_BeginInvoke_m1905 (MatchDelegate_t34 * __this, TurnBasedMatch_t19 * ___match, bool ___shouldAutoLaunch, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchDelegate::EndInvoke(System.IAsyncResult)
extern "C" void MatchDelegate_EndInvoke_m1906 (MatchDelegate_t34 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
