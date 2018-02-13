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

// GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback
struct FetchAllCallback_t71;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FetchAllCallback__ctor_m300 (FetchAllCallback_t71 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback::Invoke(System.IntPtr,System.IntPtr)
extern "C" void FetchAllCallback_Invoke_m301 (FetchAllCallback_t71 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FetchAllCallback_t71(Il2CppObject* delegate, IntPtr_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * FetchAllCallback_BeginInvoke_m302 (FetchAllCallback_t71 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback::EndInvoke(System.IAsyncResult)
extern "C" void FetchAllCallback_EndInvoke_m303 (FetchAllCallback_t71 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
