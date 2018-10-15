#include <iostream>

using namespace std;

int main()
{
    int m, n;
    char u;
    cin >> u >> m >> n;
    if (u == '+')
    {
        cout << m + n << endl;
    }
    if (u == '*')
    {
        cout << m * n << endl;
    }
    if (u == '-')
    {
        cout << m - n << endl;
    }
    return 0;
}