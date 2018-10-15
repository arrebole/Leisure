#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    while(n--)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    cout << sum << endl;
    return 0;
}