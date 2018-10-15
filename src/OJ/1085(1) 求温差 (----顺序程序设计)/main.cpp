#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >>n;
    int res = m-n;
    if(res<0)
        res=-res;
    cout << res << endl;
    return 0;
}
