#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int n, m;
        cin >> n >> m;
        cout << (n - 1) * (m - 1) << endl;
    }

    return 0;
}