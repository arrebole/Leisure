#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int t = pow(2, i);
        cout << t << " ";
    }
    cout << endl;
    return 0;
}