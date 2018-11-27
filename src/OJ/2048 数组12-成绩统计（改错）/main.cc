#include <stdio.h>

int main()
{
    int i, n, sum = 0, over_ave = 0, below_ave = 0;
    float ave;
    scanf("%d", &n);
    int *a = new int[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    ave = sum / n;

    for (i = 0; i < n; i++)
    {
        if (a[i] >= ave)
            over_ave++;
        else
            below_ave++;
    }
    printf("%.2f\n", ave);
    printf("%.2f%%\n%.2f%%\n", (double)over_ave * 100 / n, (double)below_ave * 100 / n);
}