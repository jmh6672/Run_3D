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

// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder
struct TurnBasedMatchConfigBuilder_t392;
// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse
struct PlayerSelectUIResponse_t367;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig
struct TurnBasedMatchConfig_t391;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"

// System.Void GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::.ctor(System.IntPtr)
extern "C" void TurnBasedMatchConfigBuilder__ctor_m1784 (TurnBasedMatchConfigBuilder_t392 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::PopulateFromUIResponse(GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse)
extern "C" TurnBasedMatchConfigBuilder_t392 * TurnBasedMatchConfigBuilder_PopulateFromUIResponse_m1785 (TurnBasedMatchConfigBuilder_t392 * __this, PlayerSelectUIResponse_t367 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::SetVariant(System.UInt32)
extern "C" TurnBasedMatchConfigBuilder_t392 * TurnBasedMatchConfigBuilder_SetVariant_m1786 (TurnBasedMatchConfigBuilder_t392 * __this, uint32_t ___variant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::AddInvitedPlayer(System.String)
extern "C" TurnBasedMatchConfigBuilder_t392 * TurnBasedMatchConfigBuilder_AddInvitedPlayer_m1787 (TurnBasedMatchConfigBuilder_t392 * __this, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::SetExclusiveBitMask(System.UInt64)
extern "C" TurnBasedMatchConfigBuilder_t392 * TurnBasedMatchConfigBuilder_SetExclusiveBitMask_m1788 (TurnBasedMatchConfigBuilder_t392 * __this, uint64_t ___bitmask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::SetMinimumAutomatchingPlayers(System.UInt32)
extern "C" TurnBasedMatchConfigBuilder_t392 * TurnBasedMatchConfigBuilder_SetMinimumAutomatchingPlayers_m1789 (TurnBasedMatchConfigBuilder_t392 * __this, uint32_t ___minimum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::SetMaximumAutomatchingPlayers(System.UInt32)
extern "C" TurnBasedMatchConfigBuilder_t392 * TurnBasedMatchConfigBuilder_SetMaximumAutomatchingPlayers_m1790 (TurnBasedMatchConfigBuilder_t392 * __this, uint32_t ___maximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::Build()
extern "C" TurnBasedMatchConfig_t391 * TurnBasedMatchConfigBuilder_Build_m1791 (TurnBasedMatchConfigBuilder_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void TurnBasedMatchConfigBuilder_CallDispose_m1792 (TurnBasedMatchConfigBuilder_t392 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::Create()
extern "C" TurnBasedMatchConfigBuilder_t392 * TurnBasedMatchConfigBuilder_Create_m1793 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
