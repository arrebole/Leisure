
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, temp, max, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        if (i == 0)
            max = temp;
        else if (temp > max)
            max = temp;
    }
    cout << max << endl;
    printf("%.2lf", (double)sum / n);
    return 0;
}