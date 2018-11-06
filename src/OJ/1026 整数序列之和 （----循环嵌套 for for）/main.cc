#include <iostream>
 
using namespace std;
 
void lineSum()
{
    int n,t,sum=0;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> t;
        sum += t;
    }
    cout << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        lineSum();
    }
    return 0;
 
}