#include <iostream>
 
using namespace std;
 
int main()
{
    int n,re=0;
    cin >> n;
    while(n != 0)
    {
        int t = n%10;
        n = n/10;
        re*=10;
        re+=t;
    }
    cout << re << endl;
    return 0;
 
}