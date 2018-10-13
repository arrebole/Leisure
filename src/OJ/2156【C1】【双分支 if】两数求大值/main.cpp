#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int res;
    cin >> n >> m;
    n > m ? res = n : res = m;
    cout << res << endl;
    return 0;
}