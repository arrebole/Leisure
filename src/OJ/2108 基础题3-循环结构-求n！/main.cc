#include <iostream>

int factSum(int n);
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << factSum(n) << endl;
    return 0;
}
/**
 *  减值法-求阶乘
*/
int factSum(int n)
{
    if (n < 3)
        return n;
    return n * factSum(n - 1);
}