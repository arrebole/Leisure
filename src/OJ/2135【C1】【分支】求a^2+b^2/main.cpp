#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int r = a * a + b * b;
    if (r < 100)
    {
        cout << r << endl;
    }
    else
    {
        r = r / 100;
        cout << r << endl;
    }
    return 0;
}