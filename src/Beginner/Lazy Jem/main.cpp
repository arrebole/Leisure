#include <iostream>

using namespace std;

long long int doWork(long long int n, long long int b, long long int m)
{
    long long int count = 0;

    for (long long int i = m; n != 0; i = i * 2)
    {

        long long int tims = 0;
        if (n % 2 == 0)
        {
            tims = n/2;
            n = n - n / 2;
        }
        else
        {
            tims = (n+1)/2;
            n = n - (n + 1) / 2;
        }

        if (n == 0)
        {
            count += i *tims;
        }
        else
        {
            count += (i * tims + b);
        }

    }

    return count;
}

void handle()
{
    long long int n, b, m;
    cin >> n >> b >> m;
    cout << doWork(n,b,m) << endl;
}



int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        handle();
    }

    return 0;
}