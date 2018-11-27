#include<stdio.h>
#include<string.h>
char converse(char ch);//@#1
int main()
{
   char ch;
   ch = getchar();//@#2
   ch = converse(ch/*@#3*/);
   putchar(ch/*@#4*/);
   return 0;
}
char converse(char ch)
{
    if(ch>='a'&&ch<='z')        //如果是小写字母，如何处理？
       ch -=32;//@#5
    else if(ch>='A'&&ch<='Z')        //如果是大写字母，如何处理？
        ch +=32;//@#6
    return ch;//@#7                         //处理后，如何把结果传回去？
}