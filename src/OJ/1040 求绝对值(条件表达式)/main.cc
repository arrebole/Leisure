#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y= x>0?x:-x;/*@#1*/  //构造一个条件表达式，当x<0时，取-x的值，否则取x的值
    printf("%d",y);
}