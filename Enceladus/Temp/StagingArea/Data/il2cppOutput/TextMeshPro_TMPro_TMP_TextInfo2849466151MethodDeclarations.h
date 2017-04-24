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

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t2849466151;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t627890505;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t2398608976;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_TMP_Text1920000777.h"

// System.Void TMPro.TMP_TextInfo::.ctor()
extern "C"  void TMP_TextInfo__ctor_m2132258283 (TMP_TextInfo_t2849466151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextInfo::.ctor(TMPro.TMP_Text)
extern "C"  void TMP_TextInfo__ctor_m2335327138 (TMP_TextInfo_t2849466151 * __this, TMP_Text_t1920000777 * ___textComponent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextInfo::Clear()
extern "C"  void TMP_TextInfo_Clear_m3832398660 (TMP_TextInfo_t2849466151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextInfo::ClearMeshInfo(System.Boolean)
extern "C"  void TMP_TextInfo_ClearMeshInfo_m21529992 (TMP_TextInfo_t2849466151 * __this, bool ___updateMesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextInfo::ClearAllMeshInfo()
extern "C"  void TMP_TextInfo_ClearAllMeshInfo_m396226000 (TMP_TextInfo_t2849466151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextInfo::ResetVertexLayout(System.Boolean)
extern "C"  void TMP_TextInfo_ResetVertexLayout_m2394550043 (TMP_TextInfo_t2849466151 * __this, bool ___isVolumetric0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextInfo::ClearUnusedVertices(TMPro.MaterialReference[])
extern "C"  void TMP_TextInfo_ClearUnusedVertices_m3277002887 (TMP_TextInfo_t2849466151 * __this, MaterialReferenceU5BU5D_t627890505* ___materials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextInfo::ClearLineInfo()
extern "C"  void TMP_TextInfo_ClearLineInfo_m2837705134 (TMP_TextInfo_t2849466151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::CopyMeshInfoVertexData()
extern "C"  TMP_MeshInfoU5BU5D_t2398608976* TMP_TextInfo_CopyMeshInfoVertexData_m3249319427 (TMP_TextInfo_t2849466151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextInfo::.cctor()
extern "C"  void TMP_TextInfo__cctor_m2257376024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
