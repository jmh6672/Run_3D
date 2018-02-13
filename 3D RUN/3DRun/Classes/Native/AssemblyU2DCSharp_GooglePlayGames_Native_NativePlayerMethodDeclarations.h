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

// GooglePlayGames.Native.NativePlayer
struct NativePlayer_t354;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t16;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.NativePlayer::.ctor(System.IntPtr)
extern "C" void NativePlayer__ctor_m1424 (NativePlayer_t354 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativePlayer::Id()
extern "C" String_t* NativePlayer_Id_m1425 (NativePlayer_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativePlayer::Name()
extern "C" String_t* NativePlayer_Name_m1426 (NativePlayer_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativePlayer::AvatarURL()
extern "C" String_t* NativePlayer_AvatarURL_m1427 (NativePlayer_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativePlayer::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void NativePlayer_CallDispose_m1428 (NativePlayer_t354 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Player GooglePlayGames.Native.NativePlayer::AsPlayer()
extern "C" Player_t16 * NativePlayer_AsPlayer_m1429 (NativePlayer_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativePlayer::<Id>m__82(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativePlayer_U3CIdU3Em__82_m1430 (NativePlayer_t354 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativePlayer::<Name>m__83(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativePlayer_U3CNameU3Em__83_m1431 (NativePlayer_t354 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativePlayer::<AvatarURL>m__84(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativePlayer_U3CAvatarURLU3Em__84_m1432 (NativePlayer_t354 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
