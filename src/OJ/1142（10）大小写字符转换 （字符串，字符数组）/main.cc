#include <stdio.h>
#include <string.h>
int main()
{
  char c[101];
  int i;
//@@1
    gets(c);
    i = 0;
    while(c[i] !='\0')
    {
        if(c[i]>='A' && c[i]<='Z')
            c[i]+=32;
        else if(c[i]>='a'&& c[i]<='z')
            c[i]-=32;
        i++;
    }

//@@1
puts(c);
}