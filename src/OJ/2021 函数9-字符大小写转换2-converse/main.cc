#include<stdio.h>
#include<string.h>
char converse(char ch);

int main()
{
    char ch;
    while((ch=getchar())!='#')
    {
        //@@1
        printf("%c",converse(ch));
        //@@1
    }
    return 0;
}
//@@2
char converse(char ch)
{
    if(ch>='a'&&ch<='z')       
       ch -=32;
    else if(ch>='A'&&ch<='Z')        
        ch +=32;
    return ch;                       
}
//@@2