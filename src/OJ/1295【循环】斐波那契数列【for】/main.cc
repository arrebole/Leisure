#include <iostream>

using namespace std;

long long Fib(long long N)
{
    long long first = 1;
    long long second = 1;
    long long ret = 0;
    for (int i = 3; i <= N; ++i)
    {
        ret = first + second;
        first = second;
        second = ret;
    }
    return second;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << Fib(i) << " ";
    }
    cout << endl;
    return 0;
}