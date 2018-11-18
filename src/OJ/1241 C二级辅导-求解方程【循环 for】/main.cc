#include <iostream>

using namespace std;

void solving(const int n)
{
    int x, y;
    for (x = 100; x < 999; x++)
    {
        y = n - x;
        if (y > 1000)
        {
            continue;
        }

        int m1 = (x / 10) % 10;
        int m2 = (y / 10) % 10;
        if (m1 == m2)
        {
            if (x / 100 == y % 10)
            {
                if (y % 100 == x / 10)
                {
                    printf("%d+%d=%d\n", x, y, n);
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    solving(n);
    return 0;
}