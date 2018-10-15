#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > 0)
    {
        if (y > 0)
        {
            cout << "I" << endl;
        }

        else if (y == 0)
        {
            cout << "X" << endl;
        }

        else
        {
            cout << "IV" << endl;
        }
    }
    else if (x == 0)
    {
        if (y == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << "Y" << endl;
        }
    }
    else
    {
        if (y > 0)
        {
            cout << "II" << endl;
        }
        else if (y == 0)
        {
            cout << "X" << endl;
        }
        else
        {
            cout << "III" << endl;
        }
    }

    return 0;
}