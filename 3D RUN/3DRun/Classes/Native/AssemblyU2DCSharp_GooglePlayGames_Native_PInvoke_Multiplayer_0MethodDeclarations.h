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

// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// System.String
struct String_t;
// GooglePlayGames.Native.NativePlayer
struct NativePlayer_t354;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Part.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.MultiplayerParticipant::.ctor(System.IntPtr)
extern "C" void MultiplayerParticipant__ctor_m1384 (MultiplayerParticipant_t350 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.MultiplayerParticipant::.cctor()
extern "C" void MultiplayerParticipant__cctor_m1385 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Status()
extern "C" int32_t MultiplayerParticipant_Status_m1386 (MultiplayerParticipant_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.MultiplayerParticipant::IsConnectedToRoom()
extern "C" bool MultiplayerParticipant_IsConnectedToRoom_m1387 (MultiplayerParticipant_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.MultiplayerParticipant::DisplayName()
extern "C" String_t* MultiplayerParticipant_DisplayName_m1388 (MultiplayerParticipant_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativePlayer GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Player()
extern "C" NativePlayer_t354 * MultiplayerParticipant_Player_m1389 (MultiplayerParticipant_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Id()
extern "C" String_t* MultiplayerParticipant_Id_m1390 (MultiplayerParticipant_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Valid()
extern "C" bool MultiplayerParticipant_Valid_m1391 (MultiplayerParticipant_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.MultiplayerParticipant::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void MultiplayerParticipant_CallDispose_m1392 (MultiplayerParticipant_t350 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.PInvoke.MultiplayerParticipant::AsParticipant()
extern "C" Participant_t9 * MultiplayerParticipant_AsParticipant_m1393 (MultiplayerParticipant_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.MultiplayerParticipant::FromPointer(System.IntPtr)
extern "C" MultiplayerParticipant_t350 * MultiplayerParticipant_FromPointer_m1394 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.MultiplayerParticipant::AutomatchingSentinel()
extern "C" MultiplayerParticipant_t350 * MultiplayerParticipant_AutomatchingSentinel_m1395 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.MultiplayerParticipant::<DisplayName>m__7C(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  MultiplayerParticipant_U3CDisplayNameU3Em__7C_m1396 (MultiplayerParticipant_t350 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.MultiplayerParticipant::<Id>m__7D(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  MultiplayerParticipant_U3CIdU3Em__7D_m1397 (MultiplayerParticipant_t350 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
