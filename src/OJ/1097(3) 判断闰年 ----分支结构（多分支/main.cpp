
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
    {
        cout << "29" << endl;
    }else{
        cout << "28" << endl;
    }
    return 0;
}