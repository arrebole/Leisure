#include <stdio.h>

int main()
{
   int x,y,temp;                              //声明三个整型变量                              
   
   printf("������x,y��ֵ:");                  //提示输入数据
   
   //@#1
   scanf("%d,%d", &x, &y); //输入2个整数的值，中间用逗号分隔

   printf("����ǰ:x = %d , y = %d\n", x, y); //输出原来的x和y的�?

   temp = x;    //先把x的值藏一�?
   x = y;       //@ #2     // 把y的值放到x�?
   y = temp;    //@ #3 //把x的原值放到y处，那么，x的原值藏在哪里呢�?

   printf("������:x = %d , y = %d\n", x, y); //输出交换后的x和y的�?  
}