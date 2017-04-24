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

// TMPro.TMP_UpdateRegistry
struct TMP_UpdateRegistry_t2664963242;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t986520779;

#include "codegen/il2cpp-codegen.h"

// TMPro.TMP_UpdateRegistry TMPro.TMP_UpdateRegistry::get_instance()
extern "C"  TMP_UpdateRegistry_t2664963242 * TMP_UpdateRegistry_get_instance_m1077228467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::.ctor()
extern "C"  void TMP_UpdateRegistry__ctor_m531858666 (TMP_UpdateRegistry_t2664963242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_RegisterCanvasElementForLayoutRebuild_m1198282941 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_UpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool TMP_UpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m434998336 (TMP_UpdateRegistry_t2664963242 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_RegisterCanvasElementForGraphicRebuild_m3877288409 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_UpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool TMP_UpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m608553782 (TMP_UpdateRegistry_t2664963242 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::PerformUpdateForCanvasRendererObjects()
extern "C"  void TMP_UpdateRegistry_PerformUpdateForCanvasRendererObjects_m3271125402 (TMP_UpdateRegistry_t2664963242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::PerformUpdateForMeshRendererObjects()
extern "C"  void TMP_UpdateRegistry_PerformUpdateForMeshRendererObjects_m3214291643 (TMP_UpdateRegistry_t2664963242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_UnRegisterCanvasElementForRebuild_m3708763564 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m157539841 (TMP_UpdateRegistry_t2664963242 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m456845837 (TMP_UpdateRegistry_t2664963242 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
