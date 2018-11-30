#include "stdio.h"
int is_oushu(int n); //函数原型定义
int main()
{
    int n;
    int r;
    scanf("%d", &n);
    r = is_oushu(n);    //@#2
    if (r == 1 /*@#3*/) //函数调用
        printf("even\n");
    else
        printf("odd\n");
}

//@@1
int is_oushu(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}
//@@1