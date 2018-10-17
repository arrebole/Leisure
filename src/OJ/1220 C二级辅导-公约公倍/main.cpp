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
int leastMultiple(int m, int n)
{
    int q = 0;
    m > n ? q = m : q = n;
    while (true)
    {
        if (q % m == 0 && q % n == 0)
            break;
        q++;
    }
    return q;
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << Euclid_gcd(m, n) << endl;
    cout << leastMultiple(m, n) << endl;
    return 0;
}