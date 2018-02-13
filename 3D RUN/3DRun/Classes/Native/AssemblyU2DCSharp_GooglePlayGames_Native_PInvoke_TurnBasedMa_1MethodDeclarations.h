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

// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse
struct TurnBasedMatchesResponse_t388;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct IEnumerable_1_t470;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t280;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_3.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::.ctor(System.IntPtr)
extern "C" void TurnBasedMatchesResponse__ctor_m1743 (TurnBasedMatchesResponse_t388 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void TurnBasedMatchesResponse_CallDispose_m1744 (TurnBasedMatchesResponse_t388 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::Status()
extern "C" int32_t TurnBasedMatchesResponse_Status_m1745 (TurnBasedMatchesResponse_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation> GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::Invitations()
extern "C" Object_t* TurnBasedMatchesResponse_Invitations_m1746 (TurnBasedMatchesResponse_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::FromPointer(System.IntPtr)
extern "C" TurnBasedMatchesResponse_t388 * TurnBasedMatchesResponse_FromPointer_m1747 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::<Invitations>m__A0(System.UIntPtr)
extern "C" MultiplayerInvitation_t280 * TurnBasedMatchesResponse_U3CInvitationsU3Em__A0_m1748 (TurnBasedMatchesResponse_t388 * __this, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
