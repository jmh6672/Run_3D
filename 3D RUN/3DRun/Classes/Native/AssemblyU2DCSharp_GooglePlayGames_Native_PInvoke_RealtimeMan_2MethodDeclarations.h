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

// GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse
struct FetchInvitationsResponse_t378;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct IEnumerable_1_t470;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t280;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::.ctor(System.IntPtr)
extern "C" void FetchInvitationsResponse__ctor_m1642 (FetchInvitationsResponse_t378 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::RequestSucceeded()
extern "C" bool FetchInvitationsResponse_RequestSucceeded_m1643 (FetchInvitationsResponse_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::ResponseStatus()
extern "C" int32_t FetchInvitationsResponse_ResponseStatus_m1644 (FetchInvitationsResponse_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation> GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::Invitations()
extern "C" Object_t* FetchInvitationsResponse_Invitations_m1645 (FetchInvitationsResponse_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void FetchInvitationsResponse_CallDispose_m1646 (FetchInvitationsResponse_t378 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::FromPointer(System.IntPtr)
extern "C" FetchInvitationsResponse_t378 * FetchInvitationsResponse_FromPointer_m1647 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::<Invitations>m__9C(System.UIntPtr)
extern "C" MultiplayerInvitation_t280 * FetchInvitationsResponse_U3CInvitationsU3Em__9C_m1648 (FetchInvitationsResponse_t378 * __this, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
