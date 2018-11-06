#include <iostream>

using namespace std;

int main()
{
    int n,t, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        t = i * (i + 1) * (i + 2);
        sum += t;
    }
    cout << sum << endl;
    return 0;
}