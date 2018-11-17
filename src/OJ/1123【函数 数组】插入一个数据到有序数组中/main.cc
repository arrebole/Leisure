#include <iostream>

using namespace std;

int main()
{
    int n, m, j;
    cin >> n >> m;
    int *a = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    j = n - 1;
    while (a[j] > m)
    {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = m;
    for (int i = 0; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}