#include <stdio.h>

int sum(int a0, int k, int n);

int main()
{
    int a0, k, n;
    int r;
    scanf("%d %d %d", &a0, &k, &n);
    r = sum(a0, k, n);
    printf("%d", r);
    return 0;
}

int sum(int a0, int k, int n)
{
    int s = 0;
    int i, t;
    for (i = 1; i <= n; i++)
    {
        t = a0 + (i - 1) * k;
        s = s + t;
    }
    return s;
}