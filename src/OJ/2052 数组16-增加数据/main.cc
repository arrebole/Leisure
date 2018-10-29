#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int index = n - 1;
    while (a[index] > m && index >= 0)
    {
        a[index + 1] = a[index];
        index--;
    }
    a[index + 1] = m;
    for (int i = 0; i <= n;i++)
    {
        cout << a[i];
        if(i != n)
            cout << " ";
    }
    cout << endl;
    return 0;
}