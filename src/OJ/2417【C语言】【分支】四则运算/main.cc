#include <iostream>

using namespace std;

int main()
{
    int m, n;
    char a;
    cin >> m >> a >> n;
    if (n == 0 && a == '/')
        cout << "The divisor is 0" << endl;
    else if (a == '+')
        cout << m + n << endl;
    else if (a == '-')
        cout << m - n << endl;
    else if (a == '/')
        cout << m / n << endl;
    else if (a == '*')
        cout << m * n << endl;
    return 0;
}