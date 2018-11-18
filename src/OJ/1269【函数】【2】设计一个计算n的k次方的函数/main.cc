#include <stdio.h>

int getpower(int n, int k);

int main()
{
    int n, k, i;
    scanf("%d%d", &n, &k);
    for (i = 0; i <= k; i++)
        printf("%d\n", getpower(n, i));
    return 0;
}

int getpower(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    int a = n;
    for (int i = 1; i < k; i++)
    {
        n *= a;
    }
    return n;
}