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

// GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback
struct ClaimMilestoneCallback_t123;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback::.ctor(System.Object,System.IntPtr)
extern "C" void ClaimMilestoneCallback__ctor_m554 (ClaimMilestoneCallback_t123 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback::Invoke(System.IntPtr,System.IntPtr)
extern "C" void ClaimMilestoneCallback_Invoke_m555 (ClaimMilestoneCallback_t123 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ClaimMilestoneCallback_t123(Il2CppObject* delegate, IntPtr_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * ClaimMilestoneCallback_BeginInvoke_m556 (ClaimMilestoneCallback_t123 * __this, IntPtr_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback::EndInvoke(System.IAsyncResult)
extern "C" void ClaimMilestoneCallback_EndInvoke_m557 (ClaimMilestoneCallback_t123 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
