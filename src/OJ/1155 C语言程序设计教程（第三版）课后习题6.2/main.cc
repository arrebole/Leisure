#include <stdio.h>
#include <string.h>

using namespace std;
 
int main()
{
    char s[200];
    gets(s);
    int len = strlen(s);
    int a=0, b=0, c=0,space=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]>='1' && s[i]<='9')
            a++;
        else if(s[i]>='a' && s[i]<='z')
            b++;
        else if(s[i]>='A' && s[i]<='Z')
            b++;
        else if (s[i]==' ')
            space++;
        else
            c++;
    }
    printf("%d %d %d %d\n",b,a,space,c);
    return 0;
}