#include<stdio.h>
int sum(int n);
int main()
{
    int n,result;
    scanf("%d",&n);
    result = sum(n);//@#1
    printf("%d\n",result);
    return 0;
}
//@@2
int sum(int n)
{
    return (1+n)*n/2;
}
//@@2