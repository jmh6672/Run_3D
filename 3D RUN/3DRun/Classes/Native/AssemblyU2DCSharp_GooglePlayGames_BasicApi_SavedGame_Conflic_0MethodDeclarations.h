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

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t299;
// System.Object
struct Object_t;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_t297;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t298;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"

// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
extern "C" void ConflictCallback__ctor_m1907 (ConflictCallback_t299 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
extern "C" void ConflictCallback_Invoke_m1908 (ConflictCallback_t299 * __this, Object_t * ___resolver, Object_t * ___original, ByteU5BU5D_t20* ___originalData, Object_t * ___unmerged, ByteU5BU5D_t20* ___unmergedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ConflictCallback_t299(Il2CppObject* delegate, Object_t * ___resolver, Object_t * ___original, ByteU5BU5D_t20* ___originalData, Object_t * ___unmerged, ByteU5BU5D_t20* ___unmergedData);
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConflictCallback_BeginInvoke_m1909 (ConflictCallback_t299 * __this, Object_t * ___resolver, Object_t * ___original, ByteU5BU5D_t20* ___originalData, Object_t * ___unmerged, ByteU5BU5D_t20* ___unmergedData, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
extern "C" void ConflictCallback_EndInvoke_m1910 (ConflictCallback_t299 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
