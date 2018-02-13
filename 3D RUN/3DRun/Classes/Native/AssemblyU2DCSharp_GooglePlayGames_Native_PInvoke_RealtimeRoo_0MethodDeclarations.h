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

// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder
struct RealtimeRoomConfigBuilder_t380;
// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse
struct PlayerSelectUIResponse_t367;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfig
struct RealtimeRoomConfig_t271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"

// System.Void GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::.ctor(System.IntPtr)
extern "C" void RealtimeRoomConfigBuilder__ctor_m1673 (RealtimeRoomConfigBuilder_t380 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::PopulateFromUIResponse(GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse)
extern "C" RealtimeRoomConfigBuilder_t380 * RealtimeRoomConfigBuilder_PopulateFromUIResponse_m1674 (RealtimeRoomConfigBuilder_t380 * __this, PlayerSelectUIResponse_t367 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::SetVariant(System.UInt32)
extern "C" RealtimeRoomConfigBuilder_t380 * RealtimeRoomConfigBuilder_SetVariant_m1675 (RealtimeRoomConfigBuilder_t380 * __this, uint32_t ___variantValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::AddInvitedPlayer(System.String)
extern "C" RealtimeRoomConfigBuilder_t380 * RealtimeRoomConfigBuilder_AddInvitedPlayer_m1676 (RealtimeRoomConfigBuilder_t380 * __this, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::SetExclusiveBitMask(System.UInt64)
extern "C" RealtimeRoomConfigBuilder_t380 * RealtimeRoomConfigBuilder_SetExclusiveBitMask_m1677 (RealtimeRoomConfigBuilder_t380 * __this, uint64_t ___bitmask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::SetMinimumAutomatchingPlayers(System.UInt32)
extern "C" RealtimeRoomConfigBuilder_t380 * RealtimeRoomConfigBuilder_SetMinimumAutomatchingPlayers_m1678 (RealtimeRoomConfigBuilder_t380 * __this, uint32_t ___minimum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::SetMaximumAutomatchingPlayers(System.UInt32)
extern "C" RealtimeRoomConfigBuilder_t380 * RealtimeRoomConfigBuilder_SetMaximumAutomatchingPlayers_m1679 (RealtimeRoomConfigBuilder_t380 * __this, uint32_t ___maximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfig GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::Build()
extern "C" RealtimeRoomConfig_t271 * RealtimeRoomConfigBuilder_Build_m1680 (RealtimeRoomConfigBuilder_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void RealtimeRoomConfigBuilder_CallDispose_m1681 (RealtimeRoomConfigBuilder_t380 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::Create()
extern "C" RealtimeRoomConfigBuilder_t380 * RealtimeRoomConfigBuilder_Create_m1682 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
