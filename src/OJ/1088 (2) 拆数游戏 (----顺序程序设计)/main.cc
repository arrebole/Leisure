#include <stdio.h>

int main()
{
    int a, b, c, d;
    int x;
    /*@#5*/ scanf("%d", &x);
    a = x / 1000;
    /*@#2*/ b = x % 1000 / 100;
    c = x / 10 % 10;
    /*@#8*/ d = x % 10;
    printf("(%d,%d,%d,%d)", a, b, c, d);
    return 0;
}