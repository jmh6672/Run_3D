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

// GooglePlayGames.Native.PInvoke.ParticipantResults
struct ParticipantResults_t363;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Matc.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"

// System.Void GooglePlayGames.Native.PInvoke.ParticipantResults::.ctor(System.IntPtr)
extern "C" void ParticipantResults__ctor_m1535 (ParticipantResults_t363 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.ParticipantResults::HasResultsForParticipant(System.String)
extern "C" bool ParticipantResults_HasResultsForParticipant_m1536 (ParticipantResults_t363 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.ParticipantResults::PlacingForParticipant(System.String)
extern "C" uint32_t ParticipantResults_PlacingForParticipant_m1537 (ParticipantResults_t363 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MatchResult GooglePlayGames.Native.PInvoke.ParticipantResults::ResultsForParticipant(System.String)
extern "C" int32_t ParticipantResults_ResultsForParticipant_m1538 (ParticipantResults_t363 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.ParticipantResults GooglePlayGames.Native.PInvoke.ParticipantResults::WithResult(System.String,System.UInt32,GooglePlayGames.Native.Cwrapper.Types/MatchResult)
extern "C" ParticipantResults_t363 * ParticipantResults_WithResult_m1539 (ParticipantResults_t363 * __this, String_t* ___participantId, uint32_t ___placing, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.ParticipantResults::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void ParticipantResults_CallDispose_m1540 (ParticipantResults_t363 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
