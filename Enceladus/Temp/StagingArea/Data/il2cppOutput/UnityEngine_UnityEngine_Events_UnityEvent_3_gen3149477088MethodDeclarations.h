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

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t3149477088;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t3482433968;
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

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_3__ctor_m3502631330_gshared (UnityEvent_3_t3149477088 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m3502631330(__this, method) ((  void (*) (UnityEvent_3_t3149477088 *, const MethodInfo*))UnityEvent_3__ctor_m3502631330_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  void UnityEvent_3_AddListener_m2969732462_gshared (UnityEvent_3_t3149477088 * __this, UnityAction_3_t3482433968 * ___call0, const MethodInfo* method);
#define UnityEvent_3_AddListener_m2969732462(__this, ___call0, method) ((  void (*) (UnityEvent_3_t3149477088 *, UnityAction_3_t3482433968 *, const MethodInfo*))UnityEvent_3_AddListener_m2969732462_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  void UnityEvent_3_RemoveListener_m3905537029_gshared (UnityEvent_3_t3149477088 * __this, UnityAction_3_t3482433968 * ___call0, const MethodInfo* method);
#define UnityEvent_3_RemoveListener_m3905537029(__this, ___call0, method) ((  void (*) (UnityEvent_3_t3149477088 *, UnityAction_3_t3482433968 *, const MethodInfo*))UnityEvent_3_RemoveListener_m3905537029_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_3_FindMethod_Impl_m1889846153_gshared (UnityEvent_3_t3149477088 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m1889846153(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_3_t3149477088 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m1889846153_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_3_GetDelegate_m338681277_gshared (UnityEvent_3_t3149477088 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m338681277(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_3_t3149477088 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m338681277_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_3_GetDelegate_m3543445085_gshared (Il2CppObject * __this /* static, unused */, UnityAction_3_t3482433968 * ___action0, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m3543445085(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_3_t3482433968 *, const MethodInfo*))UnityEvent_3_GetDelegate_m3543445085_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C"  void UnityEvent_3_Invoke_m2569758883_gshared (UnityEvent_3_t3149477088 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, Il2CppObject * ___arg22, const MethodInfo* method);
#define UnityEvent_3_Invoke_m2569758883(__this, ___arg00, ___arg11, ___arg22, method) ((  void (*) (UnityEvent_3_t3149477088 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityEvent_3_Invoke_m2569758883_gshared)(__this, ___arg00, ___arg11, ___arg22, method)
