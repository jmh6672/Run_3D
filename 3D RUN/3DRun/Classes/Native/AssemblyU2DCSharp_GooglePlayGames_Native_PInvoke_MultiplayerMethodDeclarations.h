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

// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t280;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t8;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Mult_0.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Invit.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.MultiplayerInvitation::.ctor(System.IntPtr)
extern "C" void MultiplayerInvitation__ctor_m1372 (MultiplayerInvitation_t280 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.MultiplayerInvitation::Inviter()
extern "C" MultiplayerParticipant_t350 * MultiplayerInvitation_Inviter_m1373 (MultiplayerInvitation_t280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.MultiplayerInvitation::Variant()
extern "C" uint32_t MultiplayerInvitation_Variant_m1374 (MultiplayerInvitation_t280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MultiplayerInvitationType GooglePlayGames.Native.PInvoke.MultiplayerInvitation::Type()
extern "C" int32_t MultiplayerInvitation_Type_m1375 (MultiplayerInvitation_t280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.MultiplayerInvitation::Id()
extern "C" String_t* MultiplayerInvitation_Id_m1376 (MultiplayerInvitation_t280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.MultiplayerInvitation::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void MultiplayerInvitation_CallDispose_m1377 (MultiplayerInvitation_t280 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.MultiplayerInvitation::AutomatchingSlots()
extern "C" uint32_t MultiplayerInvitation_AutomatchingSlots_m1378 (MultiplayerInvitation_t280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.MultiplayerInvitation::ParticipantCount()
extern "C" uint32_t MultiplayerInvitation_ParticipantCount_m1379 (MultiplayerInvitation_t280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType GooglePlayGames.Native.PInvoke.MultiplayerInvitation::ToInvType(GooglePlayGames.Native.Cwrapper.Types/MultiplayerInvitationType)
extern "C" int32_t MultiplayerInvitation_ToInvType_m1380 (Object_t * __this /* static, unused */, int32_t ___invitationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation GooglePlayGames.Native.PInvoke.MultiplayerInvitation::AsInvitation()
extern "C" Invitation_t8 * MultiplayerInvitation_AsInvitation_m1381 (MultiplayerInvitation_t280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation GooglePlayGames.Native.PInvoke.MultiplayerInvitation::FromPointer(System.IntPtr)
extern "C" MultiplayerInvitation_t280 * MultiplayerInvitation_FromPointer_m1382 (Object_t * __this /* static, unused */, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.MultiplayerInvitation::<Id>m__7B(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  MultiplayerInvitation_U3CIdU3Em__7B_m1383 (MultiplayerInvitation_t280 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
