#include <iostream>

using namespace std;

int math_abs(int n)
{
    if (n < 0)
        n = -n;
    return n;
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int min = 0;
    for (int i = 1; i < 10; i++)
    {
        if (math_abs(a[i]) < math_abs(a[min]))
            min = i;
    }
    int t = a[min];
    a[min] = a[9];
    a[9] = t;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i];
        if (i != 9)
            cout << " ";
    }
    cout << endl;
    return 0;
}