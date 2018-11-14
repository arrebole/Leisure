#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int a2, b2, c2;
    cin >> a >> b >> c;
    a2 = a * a;
    b2 = b * b;
    c2 = c * c;
    if (a2 == (b2 + c2) || b2 == (a2 + c2) || c2 == (a2 + b2))
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    return 0;
}