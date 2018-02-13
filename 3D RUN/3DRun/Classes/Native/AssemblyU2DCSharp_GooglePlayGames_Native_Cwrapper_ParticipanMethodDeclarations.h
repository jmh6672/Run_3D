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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Matc.h"

// System.IntPtr GooglePlayGames.Native.Cwrapper.ParticipantResults::ParticipantResults_WithResult(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32,GooglePlayGames.Native.Cwrapper.Types/MatchResult)
extern "C" IntPtr_t ParticipantResults_ParticipantResults_WithResult_m485 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___participant_id, uint32_t ___placing, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.Cwrapper.ParticipantResults::ParticipantResults_Valid(System.Runtime.InteropServices.HandleRef)
extern "C" bool ParticipantResults_ParticipantResults_Valid_m486 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MatchResult GooglePlayGames.Native.Cwrapper.ParticipantResults::ParticipantResults_MatchResultForParticipant(System.Runtime.InteropServices.HandleRef,System.String)
extern "C" int32_t ParticipantResults_ParticipantResults_MatchResultForParticipant_m487 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___participant_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.Cwrapper.ParticipantResults::ParticipantResults_PlaceForParticipant(System.Runtime.InteropServices.HandleRef,System.String)
extern "C" uint32_t ParticipantResults_ParticipantResults_PlaceForParticipant_m488 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___participant_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.Cwrapper.ParticipantResults::ParticipantResults_HasResultsForParticipant(System.Runtime.InteropServices.HandleRef,System.String)
extern "C" bool ParticipantResults_ParticipantResults_HasResultsForParticipant_m489 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___participant_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.ParticipantResults::ParticipantResults_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void ParticipantResults_ParticipantResults_Dispose_m490 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
