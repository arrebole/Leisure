#include <string.h>
#include <stdio.h>

int main()
{
    char str[101];
    int len;
    int a = 0, b = 0, c = 0, d = 0;

    gets(str);
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            a++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            b++;
        else if (str[i] == ' ')
            c++;
        else
            d++;
    }

    printf("%d %d %d %d", a, b, c, d);
    return 0;
}