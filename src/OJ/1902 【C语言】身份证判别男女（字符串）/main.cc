#include <iostream>

using namespace std;

int main()
{
    long long int n, a,k;
    cin >> n;
    while (n--)
    {
        cin >> a;
        k = (a % 100)/10;

        if (k % 2 == 0)
            cout << "F" << endl;
        else
            cout << "M" << endl;
    }
    return 0;
}