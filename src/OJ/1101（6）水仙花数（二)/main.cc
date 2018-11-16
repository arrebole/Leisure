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
    for(int i=100;i<=999;i++)
    {
        if(isDaffodilNumber(i))
            cout << i << endl;
    }
    return 0;
}