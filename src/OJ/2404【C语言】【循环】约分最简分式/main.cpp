#include <stdio.h>
#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    int r = 1;
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
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m = 0;
    int n = 0;
    int bigGCD;

    scanf("%d/%d", &m, &n);
    bigGCD = gcd(m, n);
    printf("%d/%d\n", m / bigGCD, n / bigGCD);
    return 0;
}