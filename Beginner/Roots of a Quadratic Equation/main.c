#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double dirt = sqrt(b * b - 4 * a * c);
    //double x1 = (-b+dirt)/(2*a);
    //double x2 = (-b-dirt)/(2*a);
    printf("%lf\n", (-b + dirt) / (2 * a));
    printf("%lf\n", (-b - dirt) / (2 * a));

    return 0;
}
