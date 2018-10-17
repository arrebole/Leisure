#include <iostream>

using namespace std;

/**
 * 暴力法-顺序查找
 * 求最小公倍数
*/
int maxMultiple(int m, int n)
{
    int start;
    m > n ? start = m : start = n;
    while (true)
    {
        if (start % m == 0 && start % n == 0)
            break;
        start++;
    }
    return start;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << maxMultiple(m, n) << endl;
    return 0;
}