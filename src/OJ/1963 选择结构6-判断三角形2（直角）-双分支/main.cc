#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;
    if ((a2 + b2) == c2 || (a2 + c2) == b2 || (c2 + b2) == a2)
    {
        cout << "Y" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
    return 0;
}