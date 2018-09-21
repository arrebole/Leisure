#include <iostream>

using namespace std;

string handle()
{
    int a[2];
    int b[2];
    cin >> a[0] >> a[1] >> b[0] >> b[1];
    int x = b[0] - a[0];
    int y = b[1] - a[1];
    if (x == 0)
    {
        if (y > 0)
            return "up";
        if (y < 0)
            return "down";
    }
    else if (y == 0)
    {
        if (x > 0)
            return "right";
        if (x < 0)
            return "left";
    }

    return "sad";
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cout << handle() << endl;
    }
    return 0;
}