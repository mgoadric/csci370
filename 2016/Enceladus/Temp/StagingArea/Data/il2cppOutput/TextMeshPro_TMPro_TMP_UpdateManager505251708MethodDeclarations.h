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

// TMPro.TMP_UpdateManager
struct TMP_UpdateManager_t505251708;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_TMP_Text1920000777.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// TMPro.TMP_UpdateManager TMPro.TMP_UpdateManager::get_instance()
extern "C"  TMP_UpdateManager_t505251708 * TMP_UpdateManager_get_instance_m2448566307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::.ctor()
extern "C"  void TMP_UpdateManager__ctor_m1805770402 (TMP_UpdateManager_t505251708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::RegisterTextElementForLayoutRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_RegisterTextElementForLayoutRebuild_m952267709 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_UpdateManager::InternalRegisterTextElementForLayoutRebuild(TMPro.TMP_Text)
extern "C"  bool TMP_UpdateManager_InternalRegisterTextElementForLayoutRebuild_m1834228344 (TMP_UpdateManager_t505251708 * __this, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::RegisterTextElementForGraphicRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_RegisterTextElementForGraphicRebuild_m1046776321 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_UpdateManager::InternalRegisterTextElementForGraphicRebuild(TMPro.TMP_Text)
extern "C"  bool TMP_UpdateManager_InternalRegisterTextElementForGraphicRebuild_m463673796 (TMP_UpdateManager_t505251708 * __this, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::OnCameraPreRender(UnityEngine.Camera)
extern "C"  void TMP_UpdateManager_OnCameraPreRender_m2385342353 (TMP_UpdateManager_t505251708 * __this, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::UnRegisterTextElementForRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_UnRegisterTextElementForRebuild_m1379329288 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::InternalUnRegisterTextElementForGraphicRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_InternalUnRegisterTextElementForGraphicRebuild_m2471345085 (TMP_UpdateManager_t505251708 * __this, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::InternalUnRegisterTextElementForLayoutRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_InternalUnRegisterTextElementForLayoutRebuild_m297652745 (TMP_UpdateManager_t505251708 * __this, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
