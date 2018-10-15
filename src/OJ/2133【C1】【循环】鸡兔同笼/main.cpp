#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x = (m - 2 * n) / 2;
    int y = (4 * n - m) / 2;
    if (x + y != n || x < 0 || y < 0)
    {
        cout << "NO answer" << endl;
    }
    else
    {
        cout << y << " " << x << endl;
    }

    return 0;
}