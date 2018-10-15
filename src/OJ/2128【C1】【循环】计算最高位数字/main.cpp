#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 1;
    while(n/k !=0)
    {
        k *= 10;
    }
    int res = n / (k / 10);
    cout << res << endl;

    return 0;
}