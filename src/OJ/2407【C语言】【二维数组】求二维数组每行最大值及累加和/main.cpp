#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n + 2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int min = 0;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > min)
            {
                min = a[i][j];
            }
            sum += a[i][j];
        }
        a[i][n] = min;
        a[i][n + 1] = sum;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 2; j++)
        {
            cout << a[i][j];
            if (j != n + 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}