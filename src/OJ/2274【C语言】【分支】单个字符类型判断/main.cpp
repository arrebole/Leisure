#include <iostream>

using namespace std;

int main()
{
    char n;
    cin >> n;
    if (n >= '0' && n <= '9')
        cout << "digit" << endl;
    else if (n >= 'a' && n <= 'z')
        cout << "lower" << endl;
    else if (n >= 'A' && n <= 'Z')
        cout << "upper" << endl;
    else
        cout << "other" << endl;
    return 0;
}