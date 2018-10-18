#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
            c++;
        if (temp > 0)
            a++;
        if (temp < 0)
            b++;
    }
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}