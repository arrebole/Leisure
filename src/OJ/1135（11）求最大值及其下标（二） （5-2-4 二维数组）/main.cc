#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = n * n;
    int *a = new int[sum];
    for (int i = 0; i < sum; i++)
    {
        cin >> a[i];
    }
    int x = 0,y=0, max = a[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i * n + j] > max)
            {
                max = a[i * n + j];
                x = j;
                y = i;
            }
        }
    }
    cout << max << endl;
    cout << y << " " << x << endl;
    delete[] a;
    return 0;
}