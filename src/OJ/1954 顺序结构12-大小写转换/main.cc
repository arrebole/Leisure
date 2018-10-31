#include <stdio.h>

char change(char x)
{
    char t = x;
    if (x >= 'A' && x <= 'Z')
        t = x + 32;
    else if (x >= 'a' && x <= 'z')
        t = x - 32;
    return t;
}

int main()
{
    char a, b;
    scanf("%c,%c", &a, &b);
    printf("%c,%c", change(a), change(b));
    return 0;
}