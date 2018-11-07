#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int sum_x = 0, sum_y = 0;
    cin >> x >> y;
    while (true)
    {
        int t1, t2;
        cin >> t1 >> t2;
        if (t1 == 0 && t2 == 0)
        {
            break;
        }
        sum_x += t1;
        sum_y += t2;
    }
    if (sum_y > sum_x)
    {
        cout << y << " " << sum_y << endl;
    }
    else if (sum_y < sum_x)
    {
        cout << y << " " << sum_x << endl;
    }
    else
    {
        cout << "equal" << endl;
    }
    return 0;
}