#include <iostream>

using namespace std;

int main()
{
    int n, index, value;
    cin >> n;

    int *a = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> index >> value;
    int j;
    for (j = n; j >= 0; j--)
    {
        a[j + 1] = a[j];
        if(j==index-1)
            break;
    }
    a[j] = value;
    for (int i = 0; i <= n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}