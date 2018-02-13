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

// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t33;
// System.Object
struct Object_t;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t8;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.BasicApi.InvitationReceivedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void InvitationReceivedDelegate__ctor_m1899 (InvitationReceivedDelegate_t33 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.InvitationReceivedDelegate::Invoke(GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean)
extern "C" void InvitationReceivedDelegate_Invoke_m1900 (InvitationReceivedDelegate_t33 * __this, Invitation_t8 * ___invitation, bool ___shouldAutoAccept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InvitationReceivedDelegate_t33(Il2CppObject* delegate, Invitation_t8 * ___invitation, bool ___shouldAutoAccept);
// System.IAsyncResult GooglePlayGames.BasicApi.InvitationReceivedDelegate::BeginInvoke(GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * InvitationReceivedDelegate_BeginInvoke_m1901 (InvitationReceivedDelegate_t33 * __this, Invitation_t8 * ___invitation, bool ___shouldAutoAccept, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.InvitationReceivedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InvitationReceivedDelegate_EndInvoke_m1902 (InvitationReceivedDelegate_t33 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
