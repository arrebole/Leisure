#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "YES" << endl;
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}