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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ShutdownState
struct ShutdownState_t265;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ShutdownState::.ctor(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C" void ShutdownState__ctor_m1110 (ShutdownState_t265 * __this, RoomSession_t239 * ___session, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ShutdownState::IsActive()
extern "C" bool ShutdownState_IsActive_m1111 (ShutdownState_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ShutdownState::LeaveRoom()
extern "C" void ShutdownState_LeaveRoom_m1112 (ShutdownState_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
