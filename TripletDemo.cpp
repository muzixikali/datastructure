#include "Triplet.h"
#include<stdio.h>

int main()
{
    // 读取3个数
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    // 初始化三元组
    Triplet T;
    InitTriplet(T,a,b,c);
    Print(T);

    // 获取第2个数
    int n;
    Get(T,2,n);
    printf("\n第2个数为%d\n",n);

    // 设置第2个数
    n = 3;
    Put(T,2,n);
    Get(T,2,n);
    printf("第2个数为%d\n",n);

    // 判断是否升序
    if(IsAscending(T))
        printf("是升序\n");
    else
        printf("不是升序\n");

    // 销毁三元组
    Print(T);
    DestoryTriplet(T);
    printf("\n");
    Print(T);
    scanf("%d",&n);
    return 0;
}

