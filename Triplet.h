#include "datastructure.h"

// Triplet 类型别名
typedef ElemType* Triplet;

// 函数原型

Status InitTriplet(Triplet &T,ElemType v1,ElemType v2,ElemType v3);
// 构造三元组

Status DestoryTriplet(Triplet &T);
// 销毁三元组

Status Get(Triplet T,int i,ElemType &e);
// 将第i号元素的值赋给e

Status Put(Triplet &T,int i,ElemType e);
// 设置第i号元素为e

Bool IsAscending(Triplet T);
// 判断三元组是否为升序

Bool IsDescending(Triplet T);
// 判断三元组是否为降序

Status Max(Triplet T,ElemType &e);
// 将最大值赋给e

Status Min(Triplet T,ElemType &e);
// 最小值赋给e

void Print(Triplet T);
// 打印三元组