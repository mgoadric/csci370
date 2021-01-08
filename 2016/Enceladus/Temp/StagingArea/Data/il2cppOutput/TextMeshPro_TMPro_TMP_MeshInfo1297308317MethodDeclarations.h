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
struct Mesh_t1356156583;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2612818049;
// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t1297308317;
struct TMP_MeshInfo_t1297308317_marshaled_pinvoke;
struct TMP_MeshInfo_t1297308317_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_TMP_MeshInfo1297308317.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "TextMeshPro_TMPro_VertexSortingOrder471281372.h"

// System.Void TMPro.TMP_MeshInfo::.ctor(UnityEngine.Mesh,System.Int32)
extern "C"  void TMP_MeshInfo__ctor_m37874000 (TMP_MeshInfo_t1297308317 * __this, Mesh_t1356156583 * ___mesh0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::.ctor(UnityEngine.Mesh,System.Int32,System.Boolean)
extern "C"  void TMP_MeshInfo__ctor_m3600127819 (TMP_MeshInfo_t1297308317 * __this, Mesh_t1356156583 * ___mesh0, int32_t ___size1, bool ___isVolumetric2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::ResizeMeshInfo(System.Int32)
extern "C"  void TMP_MeshInfo_ResizeMeshInfo_m2614743399 (TMP_MeshInfo_t1297308317 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::ResizeMeshInfo(System.Int32,System.Boolean)
extern "C"  void TMP_MeshInfo_ResizeMeshInfo_m3573719138 (TMP_MeshInfo_t1297308317 * __this, int32_t ___size0, bool ___isVolumetric1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::Clear()
extern "C"  void TMP_MeshInfo_Clear_m3610750550 (TMP_MeshInfo_t1297308317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::Clear(System.Boolean)
extern "C"  void TMP_MeshInfo_Clear_m3641179691 (TMP_MeshInfo_t1297308317 * __this, bool ___uploadChanges0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::ClearUnusedVertices()
extern "C"  void TMP_MeshInfo_ClearUnusedVertices_m370999717 (TMP_MeshInfo_t1297308317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::ClearUnusedVertices(System.Int32)
extern "C"  void TMP_MeshInfo_ClearUnusedVertices_m744892414 (TMP_MeshInfo_t1297308317 * __this, int32_t ___startIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::ClearUnusedVertices(System.Int32,System.Boolean)
extern "C"  void TMP_MeshInfo_ClearUnusedVertices_m3223972795 (TMP_MeshInfo_t1297308317 * __this, int32_t ___startIndex0, bool ___updateMesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::SortGeometry(TMPro.VertexSortingOrder)
extern "C"  void TMP_MeshInfo_SortGeometry_m3700446979 (TMP_MeshInfo_t1297308317 * __this, int32_t ___order0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::SortGeometry(System.Collections.Generic.IList`1<System.Int32>)
extern "C"  void TMP_MeshInfo_SortGeometry_m2407042959 (TMP_MeshInfo_t1297308317 * __this, Il2CppObject* ___sortingOrder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::SwapVertexData(System.Int32,System.Int32)
extern "C"  void TMP_MeshInfo_SwapVertexData_m1892132898 (TMP_MeshInfo_t1297308317 * __this, int32_t ___src0, int32_t ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MeshInfo::.cctor()
extern "C"  void TMP_MeshInfo__cctor_m3280236158 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TMP_MeshInfo_t1297308317;
struct TMP_MeshInfo_t1297308317_marshaled_pinvoke;

extern "C" void TMP_MeshInfo_t1297308317_marshal_pinvoke(const TMP_MeshInfo_t1297308317& unmarshaled, TMP_MeshInfo_t1297308317_marshaled_pinvoke& marshaled);
extern "C" void TMP_MeshInfo_t1297308317_marshal_pinvoke_back(const TMP_MeshInfo_t1297308317_marshaled_pinvoke& marshaled, TMP_MeshInfo_t1297308317& unmarshaled);
extern "C" void TMP_MeshInfo_t1297308317_marshal_pinvoke_cleanup(TMP_MeshInfo_t1297308317_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TMP_MeshInfo_t1297308317;
struct TMP_MeshInfo_t1297308317_marshaled_com;

extern "C" void TMP_MeshInfo_t1297308317_marshal_com(const TMP_MeshInfo_t1297308317& unmarshaled, TMP_MeshInfo_t1297308317_marshaled_com& marshaled);
extern "C" void TMP_MeshInfo_t1297308317_marshal_com_back(const TMP_MeshInfo_t1297308317_marshaled_com& marshaled, TMP_MeshInfo_t1297308317& unmarshaled);
extern "C" void TMP_MeshInfo_t1297308317_marshal_com_cleanup(TMP_MeshInfo_t1297308317_marshaled_com& marshaled);
