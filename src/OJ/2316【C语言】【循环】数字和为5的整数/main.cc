#include <iostream>
 
using namespace std;

void is5(int n)
{
    int t,sum = 0,r = n;

    while(n>0)
    {
        t = n % 10;
        sum += t;
        n /= 10;
    }
    if(sum ==5)
    {
        cout << r << endl;
    }
}


int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b;i++)
    {
        is5(i);
    }
    return 0;
 
}