#include <iostream>

using namespace std;

int main(void)
{
    //得到测试的个数
    int t;
    cin >> t;
    int result[t];

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        if (n < 10)
        {
            result[i] = 1;
        }
        else
        {
            result[i] = -1;
        }
    }

    for (int k = 0; k < t; k++)
    {
        if (result[k] == 1)
        {
            cout << "What an obedient servant you are!" << endl;
        }
        else
        {
            cout << result[k] << endl;
        }
    }

    return 0;
}
