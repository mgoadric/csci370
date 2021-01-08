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

// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_t1947670748;
// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct UnityAction_3_t2280627628;
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

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
extern "C"  void UnityEvent_3__ctor_m650428012_gshared (UnityEvent_3_t1947670748 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m650428012(__this, method) ((  void (*) (UnityEvent_3_t1947670748 *, const MethodInfo*))UnityEvent_3__ctor_m650428012_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  void UnityEvent_3_AddListener_m1426408420_gshared (UnityEvent_3_t1947670748 * __this, UnityAction_3_t2280627628 * ___call0, const MethodInfo* method);
#define UnityEvent_3_AddListener_m1426408420(__this, ___call0, method) ((  void (*) (UnityEvent_3_t1947670748 *, UnityAction_3_t2280627628 *, const MethodInfo*))UnityEvent_3_AddListener_m1426408420_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  void UnityEvent_3_RemoveListener_m4179846313_gshared (UnityEvent_3_t1947670748 * __this, UnityAction_3_t2280627628 * ___call0, const MethodInfo* method);
#define UnityEvent_3_RemoveListener_m4179846313(__this, ___call0, method) ((  void (*) (UnityEvent_3_t1947670748 *, UnityAction_3_t2280627628 *, const MethodInfo*))UnityEvent_3_RemoveListener_m4179846313_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_3_FindMethod_Impl_m851386677_gshared (UnityEvent_3_t1947670748 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m851386677(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_3_t1947670748 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m851386677_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_3_GetDelegate_m700653617_gshared (UnityEvent_3_t1947670748 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m700653617(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_3_t1947670748 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m700653617_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_3_GetDelegate_m957147393_gshared (Il2CppObject * __this /* static, unused */, UnityAction_3_t2280627628 * ___action0, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m957147393(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_3_t2280627628 *, const MethodInfo*))UnityEvent_3_GetDelegate_m957147393_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::Invoke(T0,T1,T2)
extern "C"  void UnityEvent_3_Invoke_m801586127_gshared (UnityEvent_3_t1947670748 * __this, Il2CppObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const MethodInfo* method);
#define UnityEvent_3_Invoke_m801586127(__this, ___arg00, ___arg11, ___arg22, method) ((  void (*) (UnityEvent_3_t1947670748 *, Il2CppObject *, int32_t, int32_t, const MethodInfo*))UnityEvent_3_Invoke_m801586127_gshared)(__this, ___arg00, ___arg11, ___arg22, method)
