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

// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct IEnumerable_1_t460;
// System.Text.StringBuilder
struct StringBuilder_t361;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Real.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::.ctor(System.IntPtr)
extern "C" void NativeRealTimeRoom__ctor_m1469 (NativeRealTimeRoom_t252 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::Id()
extern "C" String_t* NativeRealTimeRoom_Id_m1470 (NativeRealTimeRoom_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant> GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::Participants()
extern "C" Object_t* NativeRealTimeRoom_Participants_m1471 (NativeRealTimeRoom_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::ParticipantCount()
extern "C" uint32_t NativeRealTimeRoom_ParticipantCount_m1472 (NativeRealTimeRoom_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/RealTimeRoomStatus GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::Status()
extern "C" int32_t NativeRealTimeRoom_Status_m1473 (NativeRealTimeRoom_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void NativeRealTimeRoom_CallDispose_m1474 (NativeRealTimeRoom_t252 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::FromPointer(System.IntPtr)
extern "C" NativeRealTimeRoom_t252 * NativeRealTimeRoom_FromPointer_m1475 (Object_t * __this /* static, unused */, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::<Id>m__8E(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeRealTimeRoom_U3CIdU3Em__8E_m1476 (NativeRealTimeRoom_t252 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::<Participants>m__8F(System.UIntPtr)
extern "C" MultiplayerParticipant_t350 * NativeRealTimeRoom_U3CParticipantsU3Em__8F_m1477 (NativeRealTimeRoom_t252 * __this, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
