#include <stdio.h>

int factorial(int k); //@#1

int main()
{
    int k;
    int r;
    scanf("%d", &k);
    r = factorial(k);
    printf("%d\n", r);
    return 0;
}
//@@1
/**
 *  暴力法 - 求阶乘
*/
int factorial(int k)
{
    int fact = 1;
    for (int i = 2; i <= k; i++)
    {
        fact *= i;
    }
    return fact;
}
//@@1