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

// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct UnityAction_3_t2280627628;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_3__ctor_m3248509378_gshared (UnityAction_3_t2280627628 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_3__ctor_m3248509378(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_3_t2280627628 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_3__ctor_m3248509378_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>::Invoke(T0,T1,T2)
extern "C"  void UnityAction_3_Invoke_m434524561_gshared (UnityAction_3_t2280627628 * __this, Il2CppObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const MethodInfo* method);
#define UnityAction_3_Invoke_m434524561(__this, ___arg00, ___arg11, ___arg22, method) ((  void (*) (UnityAction_3_t2280627628 *, Il2CppObject *, int32_t, int32_t, const MethodInfo*))UnityAction_3_Invoke_m434524561_gshared)(__this, ___arg00, ___arg11, ___arg22, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_3_BeginInvoke_m624411648_gshared (UnityAction_3_t2280627628 * __this, Il2CppObject * ___arg00, int32_t ___arg11, int32_t ___arg22, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define UnityAction_3_BeginInvoke_m624411648(__this, ___arg00, ___arg11, ___arg22, ___callback3, ___object4, method) ((  Il2CppObject * (*) (UnityAction_3_t2280627628 *, Il2CppObject *, int32_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAction_3_BeginInvoke_m624411648_gshared)(__this, ___arg00, ___arg11, ___arg22, ___callback3, ___object4, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_3_EndInvoke_m2587477836_gshared (UnityAction_3_t2280627628 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_3_EndInvoke_m2587477836(__this, ___result0, method) ((  void (*) (UnityAction_3_t2280627628 *, Il2CppObject *, const MethodInfo*))UnityAction_3_EndInvoke_m2587477836_gshared)(__this, ___result0, method)
