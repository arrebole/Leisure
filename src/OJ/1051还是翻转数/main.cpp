#include <iostream>

using namespace std;

int main()
{
    int n, flag, result = 0;
    cin >> n;
    n >= 0 ? flag = 1 : flag = -1;
    flag == -1 ? n = -n : n = n;
    while (n != 0)
    {
        int temp = n % 10;
        n = n / 10;
        result *= 10;
        result += temp;
    }

    cout << result * flag << endl;
    return 0;
}