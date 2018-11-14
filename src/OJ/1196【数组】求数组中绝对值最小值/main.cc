#include <iostream>

using namespace std;

int mabs(int a)
{
    if(a>=0)
        return a;
    return -a;
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    int min = 0;
    for (int i = 0; i < 10; i++)
    {
        if (mabs(a[i]) < mabs(a[min]))
            min = i;
    }
    int minVal = a[min];
    a[min] = a[9];
    a[9] = minVal;

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}