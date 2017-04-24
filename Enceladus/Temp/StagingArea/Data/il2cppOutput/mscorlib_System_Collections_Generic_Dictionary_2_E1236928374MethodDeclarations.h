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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int64>
struct Dictionary_2_t4211870968;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1236928374.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21969216190.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m1306604026_gshared (Enumerator_t1236928374 * __this, Dictionary_2_t4211870968 * ___dictionary0, const MethodInfo* method);
#define Enumerator__ctor_m1306604026(__this, ___dictionary0, method) ((  void (*) (Enumerator_t1236928374 *, Dictionary_2_t4211870968 *, const MethodInfo*))Enumerator__ctor_m1306604026_gshared)(__this, ___dictionary0, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m189818605_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m189818605(__this, method) ((  Il2CppObject * (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m189818605_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m2106379429_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m2106379429(__this, method) ((  void (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m2106379429_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t3048875398  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m908195280_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m908195280(__this, method) ((  DictionaryEntry_t3048875398  (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m908195280_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m776624199_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m776624199(__this, method) ((  Il2CppObject * (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m776624199_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2376009727_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2376009727(__this, method) ((  Il2CppObject * (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2376009727_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3667550605_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m3667550605(__this, method) ((  bool (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_MoveNext_m3667550605_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::get_Current()
extern "C"  KeyValuePair_2_t1969216190  Enumerator_get_Current_m1333664321_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1333664321(__this, method) ((  KeyValuePair_2_t1969216190  (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_get_Current_m1333664321_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::get_CurrentKey()
extern "C"  int32_t Enumerator_get_CurrentKey_m169833314_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m169833314(__this, method) ((  int32_t (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_get_CurrentKey_m169833314_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::get_CurrentValue()
extern "C"  int64_t Enumerator_get_CurrentValue_m1083210978_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1083210978(__this, method) ((  int64_t (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_get_CurrentValue_m1083210978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::Reset()
extern "C"  void Enumerator_Reset_m3259412128_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_Reset_m3259412128(__this, method) ((  void (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_Reset_m3259412128_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::VerifyState()
extern "C"  void Enumerator_VerifyState_m180132503_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m180132503(__this, method) ((  void (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_VerifyState_m180132503_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m898439565_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m898439565(__this, method) ((  void (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_VerifyCurrent_m898439565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int64>::Dispose()
extern "C"  void Enumerator_Dispose_m2436272954_gshared (Enumerator_t1236928374 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m2436272954(__this, method) ((  void (*) (Enumerator_t1236928374 *, const MethodInfo*))Enumerator_Dispose_m2436272954_gshared)(__this, method)
