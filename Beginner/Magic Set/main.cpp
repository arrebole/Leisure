#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int n, m;
        int cache;
        int count = 0;
        cin >> n >> m;

        for (int j = 0; j < n; j++)
        {
            cin >> cache;
            if (cache % m == 0)
                count++;
        }
        int res = pow(2, count) - 1;
        cout << res << endl;
    }

    return 0;
}