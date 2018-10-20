#include <iostream>
#include <math.h>

using namespace std;

double distance(double x, double y);

int main()
{
    double x, y;
    cin >> x >> y;
    double d = distance(x, y);
    if (d == 10)
    {
        cout << "on" << endl;
    }
    else if (d > 10)
    {
        cout << "out" << endl;
    }
    else if (d < 10)
    {
        cout << "in" << endl;
    }

    return 0;
}

double distance(double x, double y)
{
    double r2 = x * x + y * y;
    return sqrt(r2);
}