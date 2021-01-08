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

// UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>
struct InvokableCall_3_t989529314;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct UnityAction_3_t2280627628;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_3__ctor_m2989461107_gshared (InvokableCall_3_t989529314 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_3__ctor_m2989461107(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_3_t989529314 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m2989461107_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>::.ctor(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3__ctor_m415153700_gshared (InvokableCall_3_t989529314 * __this, UnityAction_3_t2280627628 * ___action0, const MethodInfo* method);
#define InvokableCall_3__ctor_m415153700(__this, ___action0, method) ((  void (*) (InvokableCall_3_t989529314 *, UnityAction_3_t2280627628 *, const MethodInfo*))InvokableCall_3__ctor_m415153700_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>::add_Delegate(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3_add_Delegate_m2927298685_gshared (InvokableCall_3_t989529314 * __this, UnityAction_3_t2280627628 * ___value0, const MethodInfo* method);
#define InvokableCall_3_add_Delegate_m2927298685(__this, ___value0, method) ((  void (*) (InvokableCall_3_t989529314 *, UnityAction_3_t2280627628 *, const MethodInfo*))InvokableCall_3_add_Delegate_m2927298685_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>::remove_Delegate(UnityEngine.Events.UnityAction`3<T1,T2,T3>)
extern "C"  void InvokableCall_3_remove_Delegate_m64504122_gshared (InvokableCall_3_t989529314 * __this, UnityAction_3_t2280627628 * ___value0, const MethodInfo* method);
#define InvokableCall_3_remove_Delegate_m64504122(__this, ___value0, method) ((  void (*) (InvokableCall_3_t989529314 *, UnityAction_3_t2280627628 *, const MethodInfo*))InvokableCall_3_remove_Delegate_m64504122_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>::Invoke(System.Object[])
extern "C"  void InvokableCall_3_Invoke_m44088078_gshared (InvokableCall_3_t989529314 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method);
#define InvokableCall_3_Invoke_m44088078(__this, ___args0, method) ((  void (*) (InvokableCall_3_t989529314 *, ObjectU5BU5D_t3614634134*, const MethodInfo*))InvokableCall_3_Invoke_m44088078_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_3_Find_m1533507554_gshared (InvokableCall_3_t989529314 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_3_Find_m1533507554(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_3_t989529314 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m1533507554_gshared)(__this, ___targetObj0, ___method1, method)
