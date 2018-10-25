#include <iostream>
#include <stdio.h>

using namespace std;

void shellSort(double a[], const int len)
{
    int gap = 1;
    while (gap < len / 3)
    {
        gap = 3 * gap + 1;
    }
    while (gap >= 1)
    {
        for (int i = gap; i < len; i++)
        {
            double v = a[i];
            int j = i - gap;
            while (j >= 0 && a[j] > v)
            {
                a[j + gap] = a[j];
                j -= gap;
            }
            a[j + gap] = v;
        }
        gap = gap / 3;
    }
}

int main()
{
    double sum = 0;
    int n;
    cin >> n;

    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    shellSort(a, n);

    for (int i = 1; i < n - 1; i++)
    {
        sum += a[i];
    }
    double avg = sum / (n - 2);
    printf("%.2lf\n", avg);
    return 0;
}