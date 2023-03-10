#include "Triplet.h"
#include <stdlib.h>
#include <stdio.h>

// 构造三元组
Status InitTriplet(Triplet &T, ElemType v1, ElemType v2, ElemType v3)
{
    T = (ElemType *)malloc(3 * sizeof(ElemType)); // 分配三个元素的空间
    if (!T)
        exit(OVERFLOW); // 分配失败就退出
    // 赋值
    T[0] = v1;
    T[1] = v2;
    T[2] = v3;
    return OK;
}

// 销毁三元组
Status DestoryTriplet(Triplet &T)
{
    free(T);  // 释放空间
    T = NULL; // T设置为空
    return OK;
}

// 将第i号元素的值赋给e
Status Get(Triplet T, int i, ElemType &e)
{
    if (i < 1 || i > 3)
        return ERROR; // 范围非法
    e = T[i - 1];
    return OK;
}

// 设置第i号元素为e
Status Put(Triplet &T, int i, ElemType e)
{
    if (i < 1 || i > 3)
        return ERROR; // 范围非法
    T[i - 1] = e;
    return OK;
}

// 判断三元组是否为升序
Bool IsAscending(Triplet T)
{
    return (T[0] <= T[1]) && (T[1] <= T[2]);
}

// 判断三元组是否为降序
Bool IsDescending(Triplet T)
{
    return (T[0] >= T[1]) && (T[1] >= T[2]);
}

// 将最大值赋给e
Status Max(Triplet T, ElemType &e)
{
    e = (T[0] >= T[1]) ? ((T[0] >= T[2]) ? T[0] : T[2])
                       : ((T[1] >= T[2]) ? T[1] : T[2]);
    return OK;
}

// 最小值赋给e
Status Min(Triplet T, ElemType &e)
{
    e = (T[0] <= T[1]) ? ((T[0] <= T[2]) ? T[0] : T[2])
                       : ((T[1] <= T[2]) ? T[1] : T[2]);
    return OK;
}

// 打印三元组
void Print(Triplet T)
{
    if (T)
        printf("(%d,%d,%d)",T[0],T[1],T[2]);
    else
        printf("三元组未初始化");
}

