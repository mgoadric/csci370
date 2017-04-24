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

// System.Linq.OrderedSequence`2<System.Object,System.Int32>
struct OrderedSequence_2_t1710216260;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2207932334;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t26340570;
// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t4214082274;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t1798778454;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection759359329.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m1933455561_gshared (OrderedSequence_2_t1710216260 * __this, Il2CppObject* ___source0, Func_2_t2207932334 * ___key_selector1, Il2CppObject* ___comparer2, int32_t ___direction3, const MethodInfo* method);
#define OrderedSequence_2__ctor_m1933455561(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method) ((  void (*) (OrderedSequence_2_t1710216260 *, Il2CppObject*, Func_2_t2207932334 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m1933455561_gshared)(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method)
// System.Void System.Linq.OrderedSequence`2<System.Object,System.Int32>::.ctor(System.Linq.OrderedEnumerable`1<TElement>,System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m230019908_gshared (OrderedSequence_2_t1710216260 * __this, OrderedEnumerable_1_t4214082274 * ___parent0, Il2CppObject* ___source1, Func_2_t2207932334 * ___keySelector2, Il2CppObject* ___comparer3, int32_t ___direction4, const MethodInfo* method);
#define OrderedSequence_2__ctor_m230019908(__this, ___parent0, ___source1, ___keySelector2, ___comparer3, ___direction4, method) ((  void (*) (OrderedSequence_2_t1710216260 *, OrderedEnumerable_1_t4214082274 *, Il2CppObject*, Func_2_t2207932334 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m230019908_gshared)(__this, ___parent0, ___source1, ___keySelector2, ___comparer3, ___direction4, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Int32>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t1798778454 * OrderedSequence_2_CreateContext_m2905460903_gshared (OrderedSequence_2_t1710216260 * __this, SortContext_1_t1798778454 * ___current0, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m2905460903(__this, ___current0, method) ((  SortContext_1_t1798778454 * (*) (OrderedSequence_2_t1710216260 *, SortContext_1_t1798778454 *, const MethodInfo*))OrderedSequence_2_CreateContext_m2905460903_gshared)(__this, ___current0, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Int32>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m3623126160_gshared (OrderedSequence_2_t1710216260 * __this, Il2CppObject* ___source0, const MethodInfo* method);
#define OrderedSequence_2_Sort_m3623126160(__this, ___source0, method) ((  Il2CppObject* (*) (OrderedSequence_2_t1710216260 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m3623126160_gshared)(__this, ___source0, method)
