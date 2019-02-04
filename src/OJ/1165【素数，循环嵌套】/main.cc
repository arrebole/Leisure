#include <stdio.h>
#include <math.h>

using namespace std;

int *sieve(int n)
{
    int *intList = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        intList[i] = i;
    }
    // 筛选倍数关系
    for (int p = 2; p <= (int)sqrt(n); p++)
    {
        // 跳过重复筛选
        if (intList[p] != 0)
        {
            int j = p * p;
            while (j <= n)
            {
                // 非素数index对应的value变为0
                intList[j] = 0;
                j = j + p;
            }
        }
    }
    return intList;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *l = sieve(n);
    for (int i = 2; i <= n; i++)
    {
        if (l[i] != 0)
        {
            printf("%d\n", l[i]);
        }
    }
    delete[] l;
    return 0;
}