#include <iostream>

using namespace std;

int sum(int n)
{
    int c = 0;
    int v = 2;
    for (int i = 0; i < n;i++)
    {
        c += v;
        v += 3;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}