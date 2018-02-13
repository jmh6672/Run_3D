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

// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t8;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Invit.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.Invitation::.ctor(GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType,System.String,GooglePlayGames.BasicApi.Multiplayer.Participant,System.Int32)
extern "C" void Invitation__ctor_m44 (Invitation_t8 * __this, int32_t ___invType, String_t* ___invId, Participant_t9 * ___inviter, int32_t ___variant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType GooglePlayGames.BasicApi.Multiplayer.Invitation::get_InvitationType()
extern "C" int32_t Invitation_get_InvitationType_m45 (Invitation_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Invitation::get_InvitationId()
extern "C" String_t* Invitation_get_InvitationId_m46 (Invitation_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.Invitation::get_Inviter()
extern "C" Participant_t9 * Invitation_get_Inviter_m47 (Invitation_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Invitation::get_Variant()
extern "C" int32_t Invitation_get_Variant_m48 (Invitation_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Invitation::ToString()
extern "C" String_t* Invitation_ToString_m49 (Invitation_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
