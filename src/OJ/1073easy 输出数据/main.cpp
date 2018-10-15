#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i <= n + 10; i++)
    {
        cout << i;
        if (i != n + 10)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}