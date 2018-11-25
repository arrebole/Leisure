#include <stdio.h>
void inputarray(int a[], int n);
void maxmin(int a[], int n, int *max, int *min);

int main()
{
    int b[100];
    int m, n, k;
    scanf("%d", &k);
    inputarray(b, k);
    maxmin(b, k, &m, &n);
    printf("max=%d,min=%d\n", m, n);
    return 0;
}

//@@1
void inputarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
}

void maxmin(int a[], int n, int *max, int *min)
{
    int t;
    *max = a[0], *min = a[0];
    for (int i = 0; i < n; i++)
    {
        t = *(a + i);
        if (t > *max)
            *max = t;
        if (t < *min)
            *min = t;
    }
}
//@@1