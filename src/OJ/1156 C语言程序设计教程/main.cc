#include <stdio.h>

int num(int n, int a)
{
    while (n > 0)
    {
        a *= 10;
        a += a;
        n--;
    }
    return a;
}

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += num(i, n);
    }
    printf("%d\n", sum);
    return 0;
}