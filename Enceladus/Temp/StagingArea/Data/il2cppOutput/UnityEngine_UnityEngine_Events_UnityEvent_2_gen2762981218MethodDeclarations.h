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

// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct UnityEvent_2_t2762981218;
// UnityEngine.Events.UnityAction`2<System.Char,System.Int32>
struct UnityAction_2_t880783300;
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

// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
extern "C"  void UnityEvent_2__ctor_m1845706686_gshared (UnityEvent_2_t2762981218 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m1845706686(__this, method) ((  void (*) (UnityEvent_2_t2762981218 *, const MethodInfo*))UnityEvent_2__ctor_m1845706686_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  void UnityEvent_2_AddListener_m2768540613_gshared (UnityEvent_2_t2762981218 * __this, UnityAction_2_t880783300 * ___call0, const MethodInfo* method);
#define UnityEvent_2_AddListener_m2768540613(__this, ___call0, method) ((  void (*) (UnityEvent_2_t2762981218 *, UnityAction_2_t880783300 *, const MethodInfo*))UnityEvent_2_AddListener_m2768540613_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  void UnityEvent_2_RemoveListener_m2680146856_gshared (UnityEvent_2_t2762981218 * __this, UnityAction_2_t880783300 * ___call0, const MethodInfo* method);
#define UnityEvent_2_RemoveListener_m2680146856(__this, ___call0, method) ((  void (*) (UnityEvent_2_t2762981218 *, UnityAction_2_t880783300 *, const MethodInfo*))UnityEvent_2_RemoveListener_m2680146856_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_2_FindMethod_Impl_m1752530898_gshared (UnityEvent_2_t2762981218 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m1752530898(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_2_t2762981218 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m1752530898_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_2_GetDelegate_m2034083776_gshared (UnityEvent_2_t2762981218 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m2034083776(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_2_t2762981218 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m2034083776_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_2_GetDelegate_m2290296019_gshared (Il2CppObject * __this /* static, unused */, UnityAction_2_t880783300 * ___action0, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m2290296019(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_2_t880783300 *, const MethodInfo*))UnityEvent_2_GetDelegate_m2290296019_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::Invoke(T0,T1)
extern "C"  void UnityEvent_2_Invoke_m3631463681_gshared (UnityEvent_2_t2762981218 * __this, Il2CppChar ___arg00, int32_t ___arg11, const MethodInfo* method);
#define UnityEvent_2_Invoke_m3631463681(__this, ___arg00, ___arg11, method) ((  void (*) (UnityEvent_2_t2762981218 *, Il2CppChar, int32_t, const MethodInfo*))UnityEvent_2_Invoke_m3631463681_gshared)(__this, ___arg00, ___arg11, method)
