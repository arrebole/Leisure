#include"stdio.h"
#include <string.h> 
int main()
{
    char a[100],*p;
    int len,i;
    gets(a);   //输入字符串
    len = strlen(a);
    for( p = a + len - 1; p != a-1; p--/*@#1*/)
        putchar(*p/*@#2*/);
    return 0;
}