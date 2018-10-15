
#include <stdio.h>
main()
{
    int i = 0,j=0, mark = 0;
    char a[101];
    gets(a);
    while (a[i] != 0) //0代表的是'\0'
    {
        if (a[i] != ' ' && mark == 0)
        {
            j++;
            mark = 1;
        }
        else if (a[i] == ' ')
            mark = 0;
        i++;
    }
    printf("%d", j);
}