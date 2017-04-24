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

// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t3285190392;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void TMPro.TMP_InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
extern "C"  void OnValidateInput__ctor_m2762076782 (OnValidateInput_t3285190392 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char TMPro.TMP_InputField/OnValidateInput::Invoke(System.String,System.Int32,System.Char)
extern "C"  Il2CppChar OnValidateInput_Invoke_m864160684 (OnValidateInput_t3285190392 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult TMPro.TMP_InputField/OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnValidateInput_BeginInvoke_m3629829749 (OnValidateInput_t3285190392 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char TMPro.TMP_InputField/OnValidateInput::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppChar OnValidateInput_EndInvoke_m3325762578 (OnValidateInput_t3285190392 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
