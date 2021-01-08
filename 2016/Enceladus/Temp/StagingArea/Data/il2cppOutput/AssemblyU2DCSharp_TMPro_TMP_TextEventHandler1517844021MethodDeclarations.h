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

// TMPro.TMP_TextEventHandler
struct TMP_TextEventHandler_t1517844021;
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct CharacterSelectionEvent_t2887241789;
// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct WordSelectionEvent_t2871480376;
// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct LinkSelectionEvent_t3735310088;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_TMP_TextEventHandler_Chara2887241789.h"
#include "AssemblyU2DCSharp_TMPro_TMP_TextEventHandler_WordS2871480376.h"
#include "AssemblyU2DCSharp_TMPro_TMP_TextEventHandler_LinkS3735310088.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "mscorlib_System_String2029220233.h"

// System.Void TMPro.TMP_TextEventHandler::.ctor()
extern "C"  void TMP_TextEventHandler__ctor_m3004486904 (TMP_TextEventHandler_t1517844021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent TMPro.TMP_TextEventHandler::get_onCharacterSelection()
extern "C"  CharacterSelectionEvent_t2887241789 * TMP_TextEventHandler_get_onCharacterSelection_m3919689539 (TMP_TextEventHandler_t1517844021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::set_onCharacterSelection(TMPro.TMP_TextEventHandler/CharacterSelectionEvent)
extern "C"  void TMP_TextEventHandler_set_onCharacterSelection_m866356440 (TMP_TextEventHandler_t1517844021 * __this, CharacterSelectionEvent_t2887241789 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_TextEventHandler/WordSelectionEvent TMPro.TMP_TextEventHandler::get_onWordSelection()
extern "C"  WordSelectionEvent_t2871480376 * TMP_TextEventHandler_get_onWordSelection_m174382615 (TMP_TextEventHandler_t1517844021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::set_onWordSelection(TMPro.TMP_TextEventHandler/WordSelectionEvent)
extern "C"  void TMP_TextEventHandler_set_onWordSelection_m3886243944 (TMP_TextEventHandler_t1517844021 * __this, WordSelectionEvent_t2871480376 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_TextEventHandler/LinkSelectionEvent TMPro.TMP_TextEventHandler::get_onLinkSelection()
extern "C"  LinkSelectionEvent_t3735310088 * TMP_TextEventHandler_get_onLinkSelection_m3843497023 (TMP_TextEventHandler_t1517844021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::set_onLinkSelection(TMPro.TMP_TextEventHandler/LinkSelectionEvent)
extern "C"  void TMP_TextEventHandler_set_onLinkSelection_m1097340972 (TMP_TextEventHandler_t1517844021 * __this, LinkSelectionEvent_t3735310088 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::Awake()
extern "C"  void TMP_TextEventHandler_Awake_m2375622331 (TMP_TextEventHandler_t1517844021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::LateUpdate()
extern "C"  void TMP_TextEventHandler_LateUpdate_m193100915 (TMP_TextEventHandler_t1517844021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TMP_TextEventHandler_OnPointerEnter_m205407842 (TMP_TextEventHandler_t1517844021 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TMP_TextEventHandler_OnPointerExit_m581150014 (TMP_TextEventHandler_t1517844021 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::SendOnCharacterSelection(System.Char,System.Int32)
extern "C"  void TMP_TextEventHandler_SendOnCharacterSelection_m3235016842 (TMP_TextEventHandler_t1517844021 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::SendOnWordSelection(System.String,System.Int32,System.Int32)
extern "C"  void TMP_TextEventHandler_SendOnWordSelection_m2252507599 (TMP_TextEventHandler_t1517844021 * __this, String_t* ___word0, int32_t ___charIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextEventHandler::SendOnLinkSelection(System.String,System.String,System.Int32)
extern "C"  void TMP_TextEventHandler_SendOnLinkSelection_m3204119002 (TMP_TextEventHandler_t1517844021 * __this, String_t* ___linkID0, String_t* ___linkText1, int32_t ___linkIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
