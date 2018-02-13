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

// UnityEngine.Mesh
struct Mesh_t699;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t716;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t810;
// System.Object
struct Object_t;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t918;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t813;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t715;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t812;
// UnityEngine.Color32[]
struct Color32U5BU5D_t917;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t811;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t814;
// System.Int32[]
struct Int32U5BU5D_t919;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m4048 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m4494 (Object_t * __this /* static, unused */, Mesh_t699 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C" void Mesh_Clear_m4495 (Mesh_t699 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m4047 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t716* Mesh_get_vertices_m4366 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetVertices_m4378 (Mesh_t699 * __this, List_1_t810 * ___inVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
extern "C" void Mesh_SetVerticesInternal_m4496 (Mesh_t699 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t716* Mesh_get_normals_m4373 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetNormals_m4381 (Mesh_t699 * __this, List_1_t810 * ___inNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C" void Mesh_SetNormalsInternal_m4497 (Mesh_t699 * __this, Object_t * ___normals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C" Vector4U5BU5D_t918* Mesh_get_tangents_m4374 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C" void Mesh_SetTangents_m4382 (Mesh_t699 * __this, List_1_t813 * ___inTangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C" void Mesh_SetTangentsInternal_m4498 (Mesh_t699 * __this, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t715* Mesh_get_uv_m4370 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C" Vector2U5BU5D_t715* Mesh_get_uv2_m4372 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C" void Mesh_SetUVs_m4380 (Mesh_t699 * __this, int32_t ___channel, List_1_t812 * ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)
extern "C" void Mesh_SetUVInternal_m4499 (Mesh_t699 * __this, Object_t * ___uvs, int32_t ___channel, int32_t ___dim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C" Color32U5BU5D_t917* Mesh_get_colors32_m4368 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C" void Mesh_SetColors_m4379 (Mesh_t699 * __this, List_1_t811 * ___inColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C" void Mesh_SetColors32Internal_m4500 (Mesh_t699 * __this, Object_t * ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m4384 (Mesh_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C" void Mesh_SetTriangles_m4383 (Mesh_t699 * __this, List_1_t814 * ___inTriangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C" void Mesh_SetTrianglesInternal_m4501 (Mesh_t699 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C" Int32U5BU5D_t919* Mesh_GetIndices_m4376 (Mesh_t699 * __this, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
