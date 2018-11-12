#include <iostream>

using namespace std;

int abs(int n)
{
    if (n >= 0)
        return n;
    return -n;
}

int main()
{
    int t;
    while (true)
    {
        cin >> t;
        cout << abs(t) << endl;
    }
    return 0;
}