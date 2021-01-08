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

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t1372135904;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3784905282;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_2__ctor_m3717034779_gshared (UnityEvent_2_t1372135904 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m3717034779(__this, method) ((  void (*) (UnityEvent_2_t1372135904 *, const MethodInfo*))UnityEvent_2__ctor_m3717034779_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  void UnityEvent_2_AddListener_m1932468038_gshared (UnityEvent_2_t1372135904 * __this, UnityAction_2_t3784905282 * ___call0, const MethodInfo* method);
#define UnityEvent_2_AddListener_m1932468038(__this, ___call0, method) ((  void (*) (UnityEvent_2_t1372135904 *, UnityAction_2_t3784905282 *, const MethodInfo*))UnityEvent_2_AddListener_m1932468038_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  void UnityEvent_2_RemoveListener_m2419462373_gshared (UnityEvent_2_t1372135904 * __this, UnityAction_2_t3784905282 * ___call0, const MethodInfo* method);
#define UnityEvent_2_RemoveListener_m2419462373(__this, ___call0, method) ((  void (*) (UnityEvent_2_t1372135904 *, UnityAction_2_t3784905282 *, const MethodInfo*))UnityEvent_2_RemoveListener_m2419462373_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_2_FindMethod_Impl_m2783251718_gshared (UnityEvent_2_t1372135904 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m2783251718(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_2_t1372135904 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m2783251718_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_2_GetDelegate_m2147273130_gshared (UnityEvent_2_t1372135904 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m2147273130(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_2_t1372135904 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m2147273130_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_2_GetDelegate_m513270581_gshared (Il2CppObject * __this /* static, unused */, UnityAction_2_t3784905282 * ___action0, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m513270581(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_2_t3784905282 *, const MethodInfo*))UnityEvent_2_GetDelegate_m513270581_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C"  void UnityEvent_2_Invoke_m2268162718_gshared (UnityEvent_2_t1372135904 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, const MethodInfo* method);
#define UnityEvent_2_Invoke_m2268162718(__this, ___arg00, ___arg11, method) ((  void (*) (UnityEvent_2_t1372135904 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityEvent_2_Invoke_m2268162718_gshared)(__this, ___arg00, ___arg11, method)
