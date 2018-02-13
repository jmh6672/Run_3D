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

// GooglePlayGames.Native.NativeEvent
struct NativeEvent_t353;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Events_EventVisib.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.NativeEvent::.ctor(System.IntPtr)
extern "C" void NativeEvent__ctor_m1411 (NativeEvent_t353 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeEvent::get_Id()
extern "C" String_t* NativeEvent_get_Id_m1412 (NativeEvent_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeEvent::get_Name()
extern "C" String_t* NativeEvent_get_Name_m1413 (NativeEvent_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeEvent::get_Description()
extern "C" String_t* NativeEvent_get_Description_m1414 (NativeEvent_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeEvent::get_ImageUrl()
extern "C" String_t* NativeEvent_get_ImageUrl_m1415 (NativeEvent_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.NativeEvent::get_CurrentCount()
extern "C" uint64_t NativeEvent_get_CurrentCount_m1416 (NativeEvent_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.Native.NativeEvent::get_Visibility()
extern "C" int32_t NativeEvent_get_Visibility_m1417 (NativeEvent_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeEvent::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void NativeEvent_CallDispose_m1418 (NativeEvent_t353 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeEvent::ToString()
extern "C" String_t* NativeEvent_ToString_m1419 (NativeEvent_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeEvent::<get_Id>m__7E(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeEvent_U3Cget_IdU3Em__7E_m1420 (NativeEvent_t353 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeEvent::<get_Name>m__7F(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeEvent_U3Cget_NameU3Em__7F_m1421 (NativeEvent_t353 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeEvent::<get_Description>m__80(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeEvent_U3Cget_DescriptionU3Em__80_m1422 (NativeEvent_t353 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeEvent::<get_ImageUrl>m__81(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeEvent_U3Cget_ImageUrlU3Em__81_m1423 (NativeEvent_t353 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
