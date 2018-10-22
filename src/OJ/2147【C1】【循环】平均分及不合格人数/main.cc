#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, z, sum = 0, count = 0;
    cin >> n;
    z = n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp < 60)
            count++;
        sum += temp;
    }
    double avg = (double)sum / z;
    printf("%.1lf\n", avg);
    cout << count << endl;
    return 0;
}