#include <stdio.h>

int fb(int a1, int a2, int n); //斐波那契求和函数原型申明

int main()
{
    int a, b, n, s;
    scanf("%d%d%d", &a, &b, &n);
    s = fb(a, b, n);
    printf("%d\n", s);
}

//@@1
int fb(int a1, int a2, int n)
{
    int sum = 0;
    int *a = new int[n + 1];
    a[1] = a1;
    a[2] = a2;
    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
    }
    delete[] a;
    return sum;
}
//@@1