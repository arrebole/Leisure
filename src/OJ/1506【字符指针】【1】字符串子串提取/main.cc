#include <stdio.h>

void substring(char *str1,char *str2,int index,int length);
int main()
{   int idx,len;
    char a[200], b[200]; 
    gets(a); 
    scanf("%d %d",&idx, &len);
    substring(a,b,idx,len);
    printf("%s",b);
    return 0;
}
void substring(char *str1,char *str2, int index, int length)
{ 
    char *p;
    for(p = str1 + index/*@#1*/;p <= str1 + index + length -1/*@#2*/;p++)
    { 
    //提示：在这里，除了把str1中的相应字符复制给str2外，还需要防止str1中的字符用完
    //即当str1中的字符用完时，不再复制字符，提前break掉for循环。如何检验str1中的字
    //符是否用完呢？
    //@@1
        *str2 = *p;
        str2++;
    //@@1
   }
   //@#3       //给str2添加结束符。
   *str2 = 0;
}