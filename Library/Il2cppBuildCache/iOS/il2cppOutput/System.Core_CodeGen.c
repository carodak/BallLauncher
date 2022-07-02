#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000011 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000014 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000016 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000017 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000018 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000019 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001A System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001E System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000023 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000025 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000028 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000029 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000041 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000042 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000043 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000044 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000045 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000046 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000004A System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004F System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000050 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000051 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000052 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000053 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000056 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000005B System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005C System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005D System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005E System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005F System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000060 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000061 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000062 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[99] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[99] = 
{
	4003,
	4224,
	4224,
	4224,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[35] = 
{
	{ 0x02000004, { 64, 4 } },
	{ 0x02000005, { 68, 9 } },
	{ 0x02000006, { 79, 7 } },
	{ 0x02000007, { 88, 10 } },
	{ 0x02000008, { 100, 11 } },
	{ 0x02000009, { 114, 9 } },
	{ 0x0200000A, { 126, 12 } },
	{ 0x0200000B, { 141, 1 } },
	{ 0x0200000C, { 142, 2 } },
	{ 0x0200000D, { 144, 2 } },
	{ 0x0200000E, { 146, 4 } },
	{ 0x0200000F, { 150, 21 } },
	{ 0x02000011, { 171, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 3 } },
	{ 0x0600000A, { 33, 4 } },
	{ 0x0600000B, { 37, 3 } },
	{ 0x0600000C, { 40, 4 } },
	{ 0x0600000D, { 44, 3 } },
	{ 0x0600000E, { 47, 1 } },
	{ 0x0600000F, { 48, 1 } },
	{ 0x06000010, { 49, 3 } },
	{ 0x06000011, { 52, 3 } },
	{ 0x06000012, { 55, 2 } },
	{ 0x06000013, { 57, 2 } },
	{ 0x06000014, { 59, 5 } },
	{ 0x06000024, { 77, 2 } },
	{ 0x06000029, { 86, 2 } },
	{ 0x0600002E, { 98, 2 } },
	{ 0x06000034, { 111, 3 } },
	{ 0x06000039, { 123, 3 } },
	{ 0x0600003E, { 138, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[173] = 
{
	{ (Il2CppRGCTXDataType)2, 1932 },
	{ (Il2CppRGCTXDataType)3, 7390 },
	{ (Il2CppRGCTXDataType)2, 3037 },
	{ (Il2CppRGCTXDataType)2, 2563 },
	{ (Il2CppRGCTXDataType)3, 12791 },
	{ (Il2CppRGCTXDataType)2, 2007 },
	{ (Il2CppRGCTXDataType)2, 2570 },
	{ (Il2CppRGCTXDataType)3, 12826 },
	{ (Il2CppRGCTXDataType)2, 2565 },
	{ (Il2CppRGCTXDataType)3, 12803 },
	{ (Il2CppRGCTXDataType)2, 1933 },
	{ (Il2CppRGCTXDataType)3, 7391 },
	{ (Il2CppRGCTXDataType)2, 3060 },
	{ (Il2CppRGCTXDataType)2, 2575 },
	{ (Il2CppRGCTXDataType)3, 12841 },
	{ (Il2CppRGCTXDataType)2, 2020 },
	{ (Il2CppRGCTXDataType)2, 2583 },
	{ (Il2CppRGCTXDataType)3, 13005 },
	{ (Il2CppRGCTXDataType)2, 2579 },
	{ (Il2CppRGCTXDataType)3, 12916 },
	{ (Il2CppRGCTXDataType)2, 698 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1163 },
	{ (Il2CppRGCTXDataType)3, 4989 },
	{ (Il2CppRGCTXDataType)2, 700 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1174 },
	{ (Il2CppRGCTXDataType)3, 4995 },
	{ (Il2CppRGCTXDataType)2, 819 },
	{ (Il2CppRGCTXDataType)3, 916 },
	{ (Il2CppRGCTXDataType)3, 917 },
	{ (Il2CppRGCTXDataType)2, 1714 },
	{ (Il2CppRGCTXDataType)2, 1304 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)2, 1502 },
	{ (Il2CppRGCTXDataType)2, 1400 },
	{ (Il2CppRGCTXDataType)2, 1503 },
	{ (Il2CppRGCTXDataType)3, 4990 },
	{ (Il2CppRGCTXDataType)2, 1715 },
	{ (Il2CppRGCTXDataType)2, 1305 },
	{ (Il2CppRGCTXDataType)2, 1401 },
	{ (Il2CppRGCTXDataType)2, 1504 },
	{ (Il2CppRGCTXDataType)2, 1402 },
	{ (Il2CppRGCTXDataType)2, 1505 },
	{ (Il2CppRGCTXDataType)3, 4991 },
	{ (Il2CppRGCTXDataType)2, 1026 },
	{ (Il2CppRGCTXDataType)2, 1392 },
	{ (Il2CppRGCTXDataType)2, 1393 },
	{ (Il2CppRGCTXDataType)2, 1500 },
	{ (Il2CppRGCTXDataType)3, 4988 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)2, 1499 },
	{ (Il2CppRGCTXDataType)3, 4987 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)2, 1302 },
	{ (Il2CppRGCTXDataType)3, 15506 },
	{ (Il2CppRGCTXDataType)3, 4397 },
	{ (Il2CppRGCTXDataType)2, 1080 },
	{ (Il2CppRGCTXDataType)2, 1395 },
	{ (Il2CppRGCTXDataType)2, 1501 },
	{ (Il2CppRGCTXDataType)2, 1596 },
	{ (Il2CppRGCTXDataType)3, 7392 },
	{ (Il2CppRGCTXDataType)3, 7394 },
	{ (Il2CppRGCTXDataType)2, 523 },
	{ (Il2CppRGCTXDataType)3, 7393 },
	{ (Il2CppRGCTXDataType)3, 7402 },
	{ (Il2CppRGCTXDataType)2, 1936 },
	{ (Il2CppRGCTXDataType)2, 2566 },
	{ (Il2CppRGCTXDataType)3, 12804 },
	{ (Il2CppRGCTXDataType)3, 7403 },
	{ (Il2CppRGCTXDataType)2, 1439 },
	{ (Il2CppRGCTXDataType)2, 1531 },
	{ (Il2CppRGCTXDataType)3, 5001 },
	{ (Il2CppRGCTXDataType)3, 15472 },
	{ (Il2CppRGCTXDataType)2, 2580 },
	{ (Il2CppRGCTXDataType)3, 12917 },
	{ (Il2CppRGCTXDataType)3, 7395 },
	{ (Il2CppRGCTXDataType)2, 1935 },
	{ (Il2CppRGCTXDataType)2, 2564 },
	{ (Il2CppRGCTXDataType)3, 12792 },
	{ (Il2CppRGCTXDataType)3, 5000 },
	{ (Il2CppRGCTXDataType)3, 7396 },
	{ (Il2CppRGCTXDataType)3, 15471 },
	{ (Il2CppRGCTXDataType)2, 2576 },
	{ (Il2CppRGCTXDataType)3, 12842 },
	{ (Il2CppRGCTXDataType)3, 7409 },
	{ (Il2CppRGCTXDataType)2, 1937 },
	{ (Il2CppRGCTXDataType)2, 2571 },
	{ (Il2CppRGCTXDataType)3, 12827 },
	{ (Il2CppRGCTXDataType)3, 7931 },
	{ (Il2CppRGCTXDataType)3, 3437 },
	{ (Il2CppRGCTXDataType)3, 5002 },
	{ (Il2CppRGCTXDataType)3, 3436 },
	{ (Il2CppRGCTXDataType)3, 7410 },
	{ (Il2CppRGCTXDataType)3, 15473 },
	{ (Il2CppRGCTXDataType)2, 2584 },
	{ (Il2CppRGCTXDataType)3, 13006 },
	{ (Il2CppRGCTXDataType)3, 7423 },
	{ (Il2CppRGCTXDataType)2, 1939 },
	{ (Il2CppRGCTXDataType)2, 2582 },
	{ (Il2CppRGCTXDataType)3, 12919 },
	{ (Il2CppRGCTXDataType)3, 7424 },
	{ (Il2CppRGCTXDataType)2, 1442 },
	{ (Il2CppRGCTXDataType)2, 1534 },
	{ (Il2CppRGCTXDataType)3, 5006 },
	{ (Il2CppRGCTXDataType)3, 5005 },
	{ (Il2CppRGCTXDataType)2, 2568 },
	{ (Il2CppRGCTXDataType)3, 12806 },
	{ (Il2CppRGCTXDataType)3, 15478 },
	{ (Il2CppRGCTXDataType)2, 2581 },
	{ (Il2CppRGCTXDataType)3, 12918 },
	{ (Il2CppRGCTXDataType)3, 7416 },
	{ (Il2CppRGCTXDataType)2, 1938 },
	{ (Il2CppRGCTXDataType)2, 2578 },
	{ (Il2CppRGCTXDataType)3, 12844 },
	{ (Il2CppRGCTXDataType)3, 5004 },
	{ (Il2CppRGCTXDataType)3, 5003 },
	{ (Il2CppRGCTXDataType)3, 7417 },
	{ (Il2CppRGCTXDataType)2, 2567 },
	{ (Il2CppRGCTXDataType)3, 12805 },
	{ (Il2CppRGCTXDataType)3, 15477 },
	{ (Il2CppRGCTXDataType)2, 2577 },
	{ (Il2CppRGCTXDataType)3, 12843 },
	{ (Il2CppRGCTXDataType)3, 7430 },
	{ (Il2CppRGCTXDataType)2, 1940 },
	{ (Il2CppRGCTXDataType)2, 2586 },
	{ (Il2CppRGCTXDataType)3, 13008 },
	{ (Il2CppRGCTXDataType)3, 7932 },
	{ (Il2CppRGCTXDataType)3, 3439 },
	{ (Il2CppRGCTXDataType)3, 5008 },
	{ (Il2CppRGCTXDataType)3, 5007 },
	{ (Il2CppRGCTXDataType)3, 3438 },
	{ (Il2CppRGCTXDataType)3, 7431 },
	{ (Il2CppRGCTXDataType)2, 2569 },
	{ (Il2CppRGCTXDataType)3, 12807 },
	{ (Il2CppRGCTXDataType)3, 15479 },
	{ (Il2CppRGCTXDataType)2, 2585 },
	{ (Il2CppRGCTXDataType)3, 13007 },
	{ (Il2CppRGCTXDataType)3, 4998 },
	{ (Il2CppRGCTXDataType)3, 4999 },
	{ (Il2CppRGCTXDataType)3, 5012 },
	{ (Il2CppRGCTXDataType)2, 3067 },
	{ (Il2CppRGCTXDataType)2, 1027 },
	{ (Il2CppRGCTXDataType)2, 1307 },
	{ (Il2CppRGCTXDataType)2, 3063 },
	{ (Il2CppRGCTXDataType)2, 1417 },
	{ (Il2CppRGCTXDataType)2, 1510 },
	{ (Il2CppRGCTXDataType)3, 4415 },
	{ (Il2CppRGCTXDataType)2, 1089 },
	{ (Il2CppRGCTXDataType)3, 5446 },
	{ (Il2CppRGCTXDataType)3, 5447 },
	{ (Il2CppRGCTXDataType)3, 5452 },
	{ (Il2CppRGCTXDataType)2, 1604 },
	{ (Il2CppRGCTXDataType)3, 5449 },
	{ (Il2CppRGCTXDataType)3, 16115 },
	{ (Il2CppRGCTXDataType)2, 1050 },
	{ (Il2CppRGCTXDataType)3, 3427 },
	{ (Il2CppRGCTXDataType)1, 1373 },
	{ (Il2CppRGCTXDataType)2, 3073 },
	{ (Il2CppRGCTXDataType)3, 5448 },
	{ (Il2CppRGCTXDataType)1, 3073 },
	{ (Il2CppRGCTXDataType)1, 1604 },
	{ (Il2CppRGCTXDataType)2, 3124 },
	{ (Il2CppRGCTXDataType)2, 3073 },
	{ (Il2CppRGCTXDataType)3, 5453 },
	{ (Il2CppRGCTXDataType)3, 5451 },
	{ (Il2CppRGCTXDataType)3, 5450 },
	{ (Il2CppRGCTXDataType)2, 415 },
	{ (Il2CppRGCTXDataType)3, 3440 },
	{ (Il2CppRGCTXDataType)2, 532 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	99,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	35,
	s_rgctxIndices,
	173,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
