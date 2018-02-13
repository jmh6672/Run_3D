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

// GooglePlayGames.Native.UnsupportedAppStateClient
struct UnsupportedAppStateClient_t393;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.OnStateLoadedListener
struct OnStateLoadedListener_t425;
// System.Byte[]
struct ByteU5BU5D_t20;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.UnsupportedAppStateClient::.ctor(System.String)
extern "C" void UnsupportedAppStateClient__ctor_m1794 (UnsupportedAppStateClient_t393 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedAppStateClient::LoadState(System.Int32,GooglePlayGames.BasicApi.OnStateLoadedListener)
extern "C" void UnsupportedAppStateClient_LoadState_m1795 (UnsupportedAppStateClient_t393 * __this, int32_t ___slot, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedAppStateClient::UpdateState(System.Int32,System.Byte[],GooglePlayGames.BasicApi.OnStateLoadedListener)
extern "C" void UnsupportedAppStateClient_UpdateState_m1796 (UnsupportedAppStateClient_t393 * __this, int32_t ___slot, ByteU5BU5D_t20* ___data, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
