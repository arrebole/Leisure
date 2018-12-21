#include <stdio.h>

// 减治法-求阶乘（递归版）
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += fact(i);
    }
    printf("%d\n", sum);
    return 0;
}