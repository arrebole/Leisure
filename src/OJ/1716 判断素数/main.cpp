#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag = true;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
            flag = false;
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}