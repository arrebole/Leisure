#include <iostream>

int binarySearch(int a[], int len, int k);

using namespace std;

int main()
{
    int n, key;
    cin >> n >> key;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << binarySearch(a, n, key) + 1 << endl;
    delete[] a;
    return 0;
}

int binarySearch(int a[], int len, int k)
{
    int l = 0, r = len - 1;
    int m;
    while (l <= r)
    {
        m = ((l + r) / 2);
        if (k == a[m])
        {
            return m;
        }
        else if (k < a[m])
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}