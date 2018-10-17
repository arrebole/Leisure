#include <stdio.h>

double handle(int n)
{
    double r;
    if(n<0)
        r = (double)1 / (double)n;
    else
        r = (double)n * 2;
    return r;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.2lf", handle(n));
    return 0;
}