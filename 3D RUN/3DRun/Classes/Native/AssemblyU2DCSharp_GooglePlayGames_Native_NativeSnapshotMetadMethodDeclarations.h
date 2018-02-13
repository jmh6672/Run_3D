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

// GooglePlayGames.Native.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t290;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.NativeSnapshotMetadata::.ctor(System.IntPtr)
extern "C" void NativeSnapshotMetadata__ctor_m1478 (NativeSnapshotMetadata_t290 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeSnapshotMetadata::get_IsOpen()
extern "C" bool NativeSnapshotMetadata_get_IsOpen_m1479 (NativeSnapshotMetadata_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeSnapshotMetadata::get_Filename()
extern "C" String_t* NativeSnapshotMetadata_get_Filename_m1480 (NativeSnapshotMetadata_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeSnapshotMetadata::get_Description()
extern "C" String_t* NativeSnapshotMetadata_get_Description_m1481 (NativeSnapshotMetadata_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeSnapshotMetadata::get_CoverImageURL()
extern "C" String_t* NativeSnapshotMetadata_get_CoverImageURL_m1482 (NativeSnapshotMetadata_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan GooglePlayGames.Native.NativeSnapshotMetadata::get_TotalTimePlayed()
extern "C" TimeSpan_t433  NativeSnapshotMetadata_get_TotalTimePlayed_m1483 (NativeSnapshotMetadata_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.Native.NativeSnapshotMetadata::get_LastModifiedTimestamp()
extern "C" DateTime_t51  NativeSnapshotMetadata_get_LastModifiedTimestamp_m1484 (NativeSnapshotMetadata_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeSnapshotMetadata::ToString()
extern "C" String_t* NativeSnapshotMetadata_ToString_m1485 (NativeSnapshotMetadata_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSnapshotMetadata::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void NativeSnapshotMetadata_CallDispose_m1486 (NativeSnapshotMetadata_t290 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeSnapshotMetadata::<get_Filename>m__90(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeSnapshotMetadata_U3Cget_FilenameU3Em__90_m1487 (NativeSnapshotMetadata_t290 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeSnapshotMetadata::<get_Description>m__91(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeSnapshotMetadata_U3Cget_DescriptionU3Em__91_m1488 (NativeSnapshotMetadata_t290 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeSnapshotMetadata::<get_CoverImageURL>m__92(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeSnapshotMetadata_U3Cget_CoverImageURLU3Em__92_m1489 (NativeSnapshotMetadata_t290 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
