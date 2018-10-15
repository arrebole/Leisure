#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x < 1)
        cout << x << endl;
    else if (x >= 10)
    {
        cout << 3 * x - 11 << endl;
    }
    else
    {
        cout << 2 * x - 1 << endl;
    }

    return 0;
}