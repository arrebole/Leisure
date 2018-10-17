
#include <stdio.h>

int main()
{
    double m, n;
    scanf("%lf %lf", &m, &n);
    printf("%.2lf+%.2lf=%.2lf\n", m, n, m + n);
    printf("%.2lf-%.2lf=%.2lf\n", m, n, m - n);
    printf("%.2lf*%.2lf=%.2lf\n", m, n, m * n);
    printf("%.2lf/%.2lf=%.2lf\n", m, n, m / n);
    return 0;
}