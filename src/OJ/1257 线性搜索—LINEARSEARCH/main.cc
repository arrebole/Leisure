#include <iostream>

using namespace std;

int main()
{
    int m, n, index = -1;
    cin >> m >> n;
    int *a = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = m - 1; i >= 0; i--)
    {
        if (a[i] == n)
            index = i;
    }
    if (index == -1)
        cout << 0 << endl;
    else
        cout << index + 1 << endl;
    delete[] a;
    return 0;
}