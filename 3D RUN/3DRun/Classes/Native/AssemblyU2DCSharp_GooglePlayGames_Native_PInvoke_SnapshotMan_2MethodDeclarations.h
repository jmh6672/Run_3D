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

// GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse
struct ReadResponse_t384;
// System.Byte[]
struct ByteU5BU5D_t20;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::.ctor(System.IntPtr)
extern "C" void ReadResponse__ctor_m1706 (ReadResponse_t384 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::ResponseStatus()
extern "C" int32_t ReadResponse_ResponseStatus_m1707 (ReadResponse_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::RequestSucceeded()
extern "C" bool ReadResponse_RequestSucceeded_m1708 (ReadResponse_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::Data()
extern "C" ByteU5BU5D_t20* ReadResponse_Data_m1709 (ReadResponse_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void ReadResponse_CallDispose_m1710 (ReadResponse_t384 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::FromPointer(System.IntPtr)
extern "C" ReadResponse_t384 * ReadResponse_FromPointer_m1711 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::<Data>m__9F(System.Byte[],System.UIntPtr)
extern "C" UIntPtr_t  ReadResponse_U3CDataU3Em__9F_m1712 (ReadResponse_t384 * __this, ByteU5BU5D_t20* ___out_bytes, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
