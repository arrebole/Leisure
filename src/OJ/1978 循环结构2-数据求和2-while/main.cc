#include <iostream>

using namespace std;

int main()
{
    int n, t, sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> t;
        sum += t;
    }
    cout << sum << endl;
    return 0;
}