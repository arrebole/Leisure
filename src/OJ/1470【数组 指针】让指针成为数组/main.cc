#include <stdio.h>

int main()
{   int a[4]={3,5,7,9};
    int i,*p,*q;
    p = a;//@#1;//让p成为数组a，候选答案: 1.a  2.&a，想想为什么？ 
    for(i = 0; i < 4; i++)
       printf("%d ",p[i]);
    printf("\n");
    q=&a[0];//@#2; //让q成为数组a，候选答案: 1.a[0]  2.&a[0]，想想为什么？ 
    for(i=0;i<4;i++)
       printf("%d ",q[i]); 
    printf("\n");
    return 0;
}