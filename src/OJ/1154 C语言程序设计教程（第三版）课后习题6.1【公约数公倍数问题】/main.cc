#include <iostream>
#include <stdio.h>

using namespace std;

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    return gcd(n, m % n);
}
int main()
{
    int m, n;
    cin >> m >> n;
    int g = gcd(m, n);
    printf("%d %d", g, m * n / g);
    return 0;
}