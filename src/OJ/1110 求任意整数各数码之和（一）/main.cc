#include <iostream>

using namespace std;

int main()
{
    int n, t, sum = 0;
    cin >> n;
    while (n > 0)
    {
        t = n % 10;
        sum += t;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}