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

// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t359;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct IEnumerable_1_t460;
// GooglePlayGames.Native.PInvoke.ParticipantResults
struct ParticipantResults_t363;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t19;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Matc_0.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_TurnB_0.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_TurnB.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::.ctor(System.IntPtr)
extern "C" void NativeTurnBasedMatch__ctor_m1499 (NativeTurnBasedMatch_t359 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::AvailableAutomatchSlots()
extern "C" uint32_t NativeTurnBasedMatch_AvailableAutomatchSlots_m1500 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::CreationTime()
extern "C" uint64_t NativeTurnBasedMatch_CreationTime_m1501 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant> GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Participants()
extern "C" Object_t* NativeTurnBasedMatch_Participants_m1502 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Version()
extern "C" uint32_t NativeTurnBasedMatch_Version_m1503 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Variant()
extern "C" uint32_t NativeTurnBasedMatch_Variant_m1504 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.ParticipantResults GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Results()
extern "C" ParticipantResults_t363 * NativeTurnBasedMatch_Results_m1505 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::ParticipantWithId(System.String)
extern "C" MultiplayerParticipant_t350 * NativeTurnBasedMatch_ParticipantWithId_m1506 (NativeTurnBasedMatch_t359 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::PendingParticipant()
extern "C" MultiplayerParticipant_t350 * NativeTurnBasedMatch_PendingParticipant_m1507 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MatchStatus GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::MatchStatus()
extern "C" int32_t NativeTurnBasedMatch_MatchStatus_m1508 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Description()
extern "C" String_t* NativeTurnBasedMatch_Description_m1509 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::HasRematchId()
extern "C" bool NativeTurnBasedMatch_HasRematchId_m1510 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::RematchId()
extern "C" String_t* NativeTurnBasedMatch_RematchId_m1511 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Data()
extern "C" ByteU5BU5D_t20* NativeTurnBasedMatch_Data_m1512 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Id()
extern "C" String_t* NativeTurnBasedMatch_Id_m1513 (NativeTurnBasedMatch_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void NativeTurnBasedMatch_CallDispose_m1514 (NativeTurnBasedMatch_t359 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::AsTurnBasedMatch(System.String)
extern "C" TurnBasedMatch_t19 * NativeTurnBasedMatch_AsTurnBasedMatch_m1515 (NativeTurnBasedMatch_t359 * __this, String_t* ___selfPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::ToTurnStatus(GooglePlayGames.Native.Cwrapper.Types/MatchStatus)
extern "C" int32_t NativeTurnBasedMatch_ToTurnStatus_m1516 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::ToMatchStatus(System.String,GooglePlayGames.Native.Cwrapper.Types/MatchStatus)
extern "C" int32_t NativeTurnBasedMatch_ToMatchStatus_m1517 (Object_t * __this /* static, unused */, String_t* ___pendingParticipantId, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::FromPointer(System.IntPtr)
extern "C" NativeTurnBasedMatch_t359 * NativeTurnBasedMatch_FromPointer_m1518 (Object_t * __this /* static, unused */, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<Participants>m__93(System.UIntPtr)
extern "C" MultiplayerParticipant_t350 * NativeTurnBasedMatch_U3CParticipantsU3Em__93_m1519 (NativeTurnBasedMatch_t359 * __this, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<Description>m__94(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeTurnBasedMatch_U3CDescriptionU3Em__94_m1520 (NativeTurnBasedMatch_t359 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<RematchId>m__95(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeTurnBasedMatch_U3CRematchIdU3Em__95_m1521 (NativeTurnBasedMatch_t359 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<Data>m__96(System.Byte[],System.UIntPtr)
extern "C" UIntPtr_t  NativeTurnBasedMatch_U3CDataU3Em__96_m1522 (NativeTurnBasedMatch_t359 * __this, ByteU5BU5D_t20* ___bytes, UIntPtr_t  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<Id>m__97(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeTurnBasedMatch_U3CIdU3Em__97_m1523 (NativeTurnBasedMatch_t359 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
