#include "stdio.h"

int fb(int n); //斐波那契求和函数原型申明

int main()
{
    int n, s;
    scanf("%d", &n);
    s = fb(n);
    printf("%d\n", s);
}

//@@1
int fb(int n)
{
    int *a = new int[n + 1];
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; ++i)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
    }

    delete[] a;
    return sum;
}
//@@1