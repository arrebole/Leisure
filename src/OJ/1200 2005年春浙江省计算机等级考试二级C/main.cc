#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];
    int index[2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                index[0] = i + 1;
                index[1] = j + 1;
                
            }
        }
    }
    cout << max << " " << index[0] << " " << index[1] << endl;
    return 0;
}