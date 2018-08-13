#include <iostream>

using namespace std;

int sum(const int d, const int n);

int main(void)
{
    // 测试数量
    int t;
    cin >> t;
    int result[t];

    for (int i = 0; i < t; i++)
    {
        int d, n;
        cin >> d >> n;
        int res = sum(d, n);
        result[i] = res;
    }

    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}

int sum(const int d, const int n)
{
    int temp = n;
    for (int i = 0; i < d; i++)
    {
        temp = ((temp + 1) * temp / 2);
    }
    return temp;
}