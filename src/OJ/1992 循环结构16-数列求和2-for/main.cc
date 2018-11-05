#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int a, b, c;
    double sum = 0;
    cin >> a >> b >> c;
    sum += (1 + a) * a / 2;
    sum += b * (b + 1) * (2 * b + 1) / 6;
    for (double i = 1; i <= c;i++)
    {
        sum += 1 / i;
    }
    printf("%.2lf\n", sum);
    return 0;
 
}