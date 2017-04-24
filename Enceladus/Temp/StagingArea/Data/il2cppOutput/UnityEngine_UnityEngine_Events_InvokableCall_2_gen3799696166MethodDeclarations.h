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

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t3799696166;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3784905282;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_2__ctor_m974169948_gshared (InvokableCall_2_t3799696166 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_2__ctor_m974169948(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_2_t3799696166 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_2__ctor_m974169948_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(UnityEngine.Events.UnityAction`2<T1,T2>)
extern "C"  void InvokableCall_2__ctor_m1466187173_gshared (InvokableCall_2_t3799696166 * __this, UnityAction_2_t3784905282 * ___action0, const MethodInfo* method);
#define InvokableCall_2__ctor_m1466187173(__this, ___action0, method) ((  void (*) (InvokableCall_2_t3799696166 *, UnityAction_2_t3784905282 *, const MethodInfo*))InvokableCall_2__ctor_m1466187173_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::add_Delegate(UnityEngine.Events.UnityAction`2<T1,T2>)
extern "C"  void InvokableCall_2_add_Delegate_m3235681898_gshared (InvokableCall_2_t3799696166 * __this, UnityAction_2_t3784905282 * ___value0, const MethodInfo* method);
#define InvokableCall_2_add_Delegate_m3235681898(__this, ___value0, method) ((  void (*) (InvokableCall_2_t3799696166 *, UnityAction_2_t3784905282 *, const MethodInfo*))InvokableCall_2_add_Delegate_m3235681898_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`2<T1,T2>)
extern "C"  void InvokableCall_2_remove_Delegate_m2509334539_gshared (InvokableCall_2_t3799696166 * __this, UnityAction_2_t3784905282 * ___value0, const MethodInfo* method);
#define InvokableCall_2_remove_Delegate_m2509334539(__this, ___value0, method) ((  void (*) (InvokableCall_2_t3799696166 *, UnityAction_2_t3784905282 *, const MethodInfo*))InvokableCall_2_remove_Delegate_m2509334539_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_2_Invoke_m1071013389_gshared (InvokableCall_2_t3799696166 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method);
#define InvokableCall_2_Invoke_m1071013389(__this, ___args0, method) ((  void (*) (InvokableCall_2_t3799696166 *, ObjectU5BU5D_t3614634134*, const MethodInfo*))InvokableCall_2_Invoke_m1071013389_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_2_Find_m1763382885_gshared (InvokableCall_2_t3799696166 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_2_Find_m1763382885(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_2_t3799696166 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_2_Find_m1763382885_gshared)(__this, ___targetObj0, ___method1, method)
