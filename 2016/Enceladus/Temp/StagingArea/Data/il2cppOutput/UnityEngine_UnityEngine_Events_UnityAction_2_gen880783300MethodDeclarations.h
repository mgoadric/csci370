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

// UnityEngine.Events.UnityAction`2<System.Char,System.Int32>
struct UnityAction_2_t880783300;
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

// System.Void UnityEngine.Events.UnityAction`2<System.Char,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m2432143218_gshared (UnityAction_2_t880783300 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_2__ctor_m2432143218(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_2_t880783300 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m2432143218_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Char,System.Int32>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m3591887196_gshared (UnityAction_2_t880783300 * __this, Il2CppChar ___arg00, int32_t ___arg11, const MethodInfo* method);
#define UnityAction_2_Invoke_m3591887196(__this, ___arg00, ___arg11, method) ((  void (*) (UnityAction_2_t880783300 *, Il2CppChar, int32_t, const MethodInfo*))UnityAction_2_Invoke_m3591887196_gshared)(__this, ___arg00, ___arg11, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Char,System.Int32>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m612472513_gshared (UnityAction_2_t880783300 * __this, Il2CppChar ___arg00, int32_t ___arg11, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m612472513(__this, ___arg00, ___arg11, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAction_2_t880783300 *, Il2CppChar, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m612472513_gshared)(__this, ___arg00, ___arg11, ___callback2, ___object3, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Char,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m12020849_gshared (UnityAction_2_t880783300 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m12020849(__this, ___result0, method) ((  void (*) (UnityAction_2_t880783300 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m12020849_gshared)(__this, ___result0, method)
