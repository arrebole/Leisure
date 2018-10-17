#include <iostream>

using namespace std;

unsigned int factorial(int n)
{
    unsigned int k = n;
    unsigned int r = 1;
    for (unsigned int i = 1; i <= k;i++)
    {
        r *= i;
    }
    return r;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}