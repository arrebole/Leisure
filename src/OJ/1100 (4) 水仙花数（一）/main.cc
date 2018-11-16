#include <iostream>

using namespace std;

bool isDaffodilNumber(int num)
{
    int sum = 0, n = num;
    while (num > 0)
    {
        int t = num % 10;
        sum += t * t * t;
        num /= 10;
    }
    if (n == sum)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (isDaffodilNumber(n))
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    return 0;
}