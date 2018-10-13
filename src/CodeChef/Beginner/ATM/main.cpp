#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double x;
    double y;
    cin >> x >> y;
    // 余额不足、不能被5整除
    if (x + 0.5 > y || (int)x % 5 != 0)
    {
        printf("%.2lf", y);
    }
    else
    {
        printf("%.2lf", y - x - 0.5);
    }
    return 0;
}