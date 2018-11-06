#include <iostream>

using namespace std;

int Euclid_gcd(int m, int n)
{
    int r;
    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int gcd = Euclid_gcd(a, b);
    int min = a * b / gcd;
    cout << min << endl;
    return 0;
}