#include <iostream>

using namespace std;

int main()
{
    int n,sum =0;
    int a[4] = {0};
    cin >> n;
    for (int i = 0; i <= 4;i++)
    {
        int t = n % 10;
        sum += t;
        n = n / 10;
        a[i] = t;
    }
    for (int i = 3; i >=0;i--)
    {
        cout << a[i];
        if(i != 0)
            cout << " ";
    }
    cout << endl;
    cout << sum << endl;
    return 0;
}