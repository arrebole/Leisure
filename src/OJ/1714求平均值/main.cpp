#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n,temp;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> temp;
        sum += temp;
    }
    double res = (double)sum / n;
    printf("%.2lf\n", res);

    return 0;
}