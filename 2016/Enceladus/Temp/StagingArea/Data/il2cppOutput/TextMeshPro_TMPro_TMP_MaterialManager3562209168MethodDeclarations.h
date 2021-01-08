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

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void TMPro.TMP_MaterialManager::.cctor()
extern "C"  void TMP_MaterialManager__cctor_m4166770683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::OnPreRender(UnityEngine.Camera)
extern "C"  void TMP_MaterialManager_OnPreRender_m2246297700 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::OnPreRenderCanvas()
extern "C"  void TMP_MaterialManager_OnPreRenderCanvas_m2566187192 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_MaterialManager::GetStencilMaterial(UnityEngine.Material,System.Int32)
extern "C"  Material_t193706927 * TMP_MaterialManager_GetStencilMaterial_m3011021821 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMaterial0, int32_t ___stencilID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::ReleaseStencilMaterial(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_ReleaseStencilMaterial_m3310003876 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_MaterialManager::GetBaseMaterial(UnityEngine.Material)
extern "C"  Material_t193706927 * TMP_MaterialManager_GetBaseMaterial_m1465985839 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_MaterialManager::SetStencil(UnityEngine.Material,System.Int32)
extern "C"  Material_t193706927 * TMP_MaterialManager_SetStencil_m2189636910 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, int32_t ___stencilID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::AddMaskingMaterial(UnityEngine.Material,UnityEngine.Material,System.Int32)
extern "C"  void TMP_MaterialManager_AddMaskingMaterial_m73662555 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMaterial0, Material_t193706927 * ___stencilMaterial1, int32_t ___stencilID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::RemoveStencilMaterial(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_RemoveStencilMaterial_m2490083635 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::ReleaseBaseMaterial(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_ReleaseBaseMaterial_m3180844635 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::ClearMaterials()
extern "C"  void TMP_MaterialManager_ClearMaterials_m2895028865 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_MaterialManager::GetStencilID(UnityEngine.GameObject)
extern "C"  int32_t TMP_MaterialManager_GetStencilID_m4183463287 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_MaterialManager::GetFallbackMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  Material_t193706927 * TMP_MaterialManager_GetFallbackMaterial_m138598576 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___sourceMaterial0, Material_t193706927 * ___targetMaterial1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::AddFallbackMaterialReference(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_AddFallbackMaterialReference_m424432485 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___targetMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::RemoveFallbackMaterialReference(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_RemoveFallbackMaterialReference_m586595424 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___targetMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::CleanupFallbackMaterials()
extern "C"  void TMP_MaterialManager_CleanupFallbackMaterials_m1666088372 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::ReleaseFallbackMaterial(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_ReleaseFallbackMaterial_m3121670438 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___fallackMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::CopyMaterialPresetProperties(UnityEngine.Material,UnityEngine.Material)
extern "C"  void TMP_MaterialManager_CopyMaterialPresetProperties_m2545429384 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___source0, Material_t193706927 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
