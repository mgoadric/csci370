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

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>
struct InvokableCall_3_t1573763807;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Int32>
struct UnityAction_3_t2864862121;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_3__ctor_m418728822_gshared (InvokableCall_3_t1573763807 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_3__ctor_m418728822(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_3_t1573763807 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m418728822_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>::.ctor(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3__ctor_m2283003039_gshared (InvokableCall_3_t1573763807 * __this, UnityAction_3_t2864862121 * ___action0, const MethodInfo* method);
#define InvokableCall_3__ctor_m2283003039(__this, ___action0, method) ((  void (*) (InvokableCall_3_t1573763807 *, UnityAction_3_t2864862121 *, const MethodInfo*))InvokableCall_3__ctor_m2283003039_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>::add_Delegate(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3_add_Delegate_m3421383002_gshared (InvokableCall_3_t1573763807 * __this, UnityAction_3_t2864862121 * ___value0, const MethodInfo* method);
#define InvokableCall_3_add_Delegate_m3421383002(__this, ___value0, method) ((  void (*) (InvokableCall_3_t1573763807 *, UnityAction_3_t2864862121 *, const MethodInfo*))InvokableCall_3_add_Delegate_m3421383002_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>::remove_Delegate(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3_remove_Delegate_m2129910813_gshared (InvokableCall_3_t1573763807 * __this, UnityAction_3_t2864862121 * ___value0, const MethodInfo* method);
#define InvokableCall_3_remove_Delegate_m2129910813(__this, ___value0, method) ((  void (*) (InvokableCall_3_t1573763807 *, UnityAction_3_t2864862121 *, const MethodInfo*))InvokableCall_3_remove_Delegate_m2129910813_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>::Invoke(System.Object[])
extern "C"  void InvokableCall_3_Invoke_m3899103425_gshared (InvokableCall_3_t1573763807 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method);
#define InvokableCall_3_Invoke_m3899103425(__this, ___args0, method) ((  void (*) (InvokableCall_3_t1573763807 *, ObjectU5BU5D_t3614634134*, const MethodInfo*))InvokableCall_3_Invoke_m3899103425_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_3_Find_m3061864041_gshared (InvokableCall_3_t1573763807 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_3_Find_m3061864041(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_3_t1573763807 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m3061864041_gshared)(__this, ___targetObj0, ___method1, method)
