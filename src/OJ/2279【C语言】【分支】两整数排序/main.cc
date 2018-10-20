#include <iostream>

using namespace std;

int main()
{
    int a[2];
    cin >> a[0] >> a[1];
    if (a[0] > a[1])
    {
        int temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }

    cout << a[0] << " " << a[1] << endl;

    return 0;
}