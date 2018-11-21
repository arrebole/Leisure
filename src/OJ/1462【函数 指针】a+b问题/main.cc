#include"stdio.h"

void sumab(int a,int b ,int *s); //求和函数原型声明，不用返回值实现结果计算

main()
{
    int x,y,r;
    scanf("%d%d",&x,&y);
    sumab(x,y,&r/*@#1*/);     //函数调用，用到指针
    printf("%d\n",r);
}

void sumab(int a,int b ,int *p/*@#2*/)
{
    int r;
    r=a+b;
    *p/*@#3*/=r;   //把计算结果放到指针所指向的内存单元中（main函数的变量r）
}