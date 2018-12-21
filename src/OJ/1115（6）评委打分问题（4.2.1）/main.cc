#include <stdio.h>

double avg(int a[], int len)
{
    int sum = 0;
    int max = a[0], min = a[0];
    for (int i = 0; i < len; i++)
    {
        sum += a[i];

        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    sum = sum - max - min;
    return (double)sum / (len - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%.2lf\n", avg(a, n));
    delete[] a;
    return 0;
}