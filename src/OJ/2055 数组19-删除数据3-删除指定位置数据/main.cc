#include "stdio.h"

void delelem(int a[], int n, int p);

int main()
{
    int a[100], i, j, n, m;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    delelem(a, n, m);
    for (i = 0; i < n - 1; i++)
        printf("%d ", a[i]);
    return 0;
}
//@@1
void delelem(int a[], int n, int p)
{
    for (int i = p; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
}
//@@1