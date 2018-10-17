#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    while(n--)
    {
        int temp;
        cin >> temp;
        if(temp%2==0)
        {
            sum += temp;
        }
    }
    cout << sum << endl;
    return 0;
}