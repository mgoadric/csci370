﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t2191335654;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t3482433968;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_3__ctor_m3141607487_gshared (InvokableCall_3_t2191335654 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_3__ctor_m3141607487(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_3_t2191335654 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m3141607487_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3__ctor_m2259070082_gshared (InvokableCall_3_t2191335654 * __this, UnityAction_3_t3482433968 * ___action0, const MethodInfo* method);
#define InvokableCall_3__ctor_m2259070082(__this, ___action0, method) ((  void (*) (InvokableCall_3_t2191335654 *, UnityAction_3_t3482433968 *, const MethodInfo*))InvokableCall_3__ctor_m2259070082_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::add_Delegate(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3_add_Delegate_m1651912393_gshared (InvokableCall_3_t2191335654 * __this, UnityAction_3_t3482433968 * ___value0, const MethodInfo* method);
#define InvokableCall_3_add_Delegate_m1651912393(__this, ___value0, method) ((  void (*) (InvokableCall_3_t2191335654 *, UnityAction_3_t3482433968 *, const MethodInfo*))InvokableCall_3_add_Delegate_m1651912393_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3_remove_Delegate_m2026407704_gshared (InvokableCall_3_t2191335654 * __this, UnityAction_3_t3482433968 * ___value0, const MethodInfo* method);
#define InvokableCall_3_remove_Delegate_m2026407704(__this, ___value0, method) ((  void (*) (InvokableCall_3_t2191335654 *, UnityAction_3_t3482433968 *, const MethodInfo*))InvokableCall_3_remove_Delegate_m2026407704_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_3_Invoke_m74557124_gshared (InvokableCall_3_t2191335654 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method);
#define InvokableCall_3_Invoke_m74557124(__this, ___args0, method) ((  void (*) (InvokableCall_3_t2191335654 *, ObjectU5BU5D_t3614634134*, const MethodInfo*))InvokableCall_3_Invoke_m74557124_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_3_Find_m3470456112_gshared (InvokableCall_3_t2191335654 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_3_Find_m3470456112(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_3_t2191335654 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m3470456112_gshared)(__this, ___targetObj0, ___method1, method)
