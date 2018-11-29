#include <iostream>
 
using namespace std;

int getpower(int a,int k);

int main()
{
    int a, b;
    cin >> a >> b;
    for(int i = 0; i <= b; i++)
    {
        cout << getpower(a, i)<< endl;
    }
    return 0;
 
}

int getpower(int a, int k)
{
    if(k == 0)
        return 1;
    
    int p = a;
    for(int i = 1; i < k; i++)
    {
        a*=p;
    }
    return a;
}