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

// GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback
struct ShowAllUICallback_t76;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"

// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback::.ctor(System.Object,System.IntPtr)
extern "C" void ShowAllUICallback__ctor_m308 (ShowAllUICallback_t76 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr)
extern "C" void ShowAllUICallback_Invoke_m309 (ShowAllUICallback_t76 * __this, int32_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ShowAllUICallback_t76(Il2CppObject* delegate, int32_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * ShowAllUICallback_BeginInvoke_m310 (ShowAllUICallback_t76 * __this, int32_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback::EndInvoke(System.IAsyncResult)
extern "C" void ShowAllUICallback_EndInvoke_m311 (ShowAllUICallback_t76 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
