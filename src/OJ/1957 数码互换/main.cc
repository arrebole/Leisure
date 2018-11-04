#include <iostream>
 
using namespace std;

int change(int n);

int main()
{
    int n;
    cin >> n;
    cout << change(n) << endl;
    return 0;
}

int change(int n)
{
    int a = 0, b = 0,res;
    
    a = n % 10;
    n = n / 10;
    
    if(n>0)
    {
        b = n % 10;
    }
    a > b ? res = (a * 10 + b) : res = (b * 10 + a);
    return res;
}