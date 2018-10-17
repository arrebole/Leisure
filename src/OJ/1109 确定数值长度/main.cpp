#include <iostream>

using namespace std;

/**
 *  减治法-减常因子-求数字长度
*/
int len(int n)
{
    int count = 0;
    while(n>0)
    {
        n = n / 10;
        count++;
    }
    return count;
}


int main()
{
    int n = 0;
    cin >> n;
    cout << len(n) << endl;
    return 0;
}