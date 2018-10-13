#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    //得到测试的个数
    int t;
    cin >> t;

    // 结果数组
    int result[t];

    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // 进行排序
        int temp;
        if (b > a)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (c > a)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (c > b)
        {
            temp = b;
            b = c;
            c = temp;
        }


        // 将中间值赋值给结果
        result[i] = b;
    }

    for (int j = 0; j < t; j++)
    {
        cout << result[j] << endl;
    }

    return 0;
}
