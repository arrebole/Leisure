#include <stdio.h>
void inputarray(int a[],int n);
void sumarray(int a[]/*@#1*/,int n, int *sum);

main()
{
    int b[100];
    int n,s;
    scanf("%d",&n);
    inputarray(b/*@#2*/,n);
    sumarray(b,n,&s/*@#3*/);     //调用求和函数，并将和的记过通过指针引用放入到变量s中
    printf("%d\n",s);
}

void inputarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void sumarray(int a[],int n,int *sum)
{
    int r = 0;
    int i;
    for(i = 0; i < n; i++)
        r=r+a[i];
    *sum/*@#4*/= r;
}