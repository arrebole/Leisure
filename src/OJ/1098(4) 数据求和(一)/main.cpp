#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, c = 0;
    cin >> n;
    while (c <= n)
    {
        sum += c;
        c++;
    }
    cout << "sum=" << sum << endl;
}