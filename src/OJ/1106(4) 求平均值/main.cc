
#include <stdio.h>

using namespace std;

double avg(int a[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += a[i];
    }

    return (double)sum / len;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    double res = avg(a, n);
    printf("%.6lf\n%.2lf\n     %.1lf\n", res, res, res);
    return 0;
}