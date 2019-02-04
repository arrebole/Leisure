#include <stdio.h>

using namespace std;

int sum(int n)
{
    int s = 0;
    int k;
    int m = (n - 1) / 2 + 1;

    for (int i = 1; i <= m; i++)
    {
        i % 2 == 0 ? k = -1 : k = 1;
        s += k * (2 * i - 1);
    }
    return s;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));

    return 0;
}