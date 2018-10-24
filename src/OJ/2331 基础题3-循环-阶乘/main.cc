#include <iostream>
 
using namespace std;

unsigned int fact(unsigned int n)
{
    unsigned int s = 1;
    unsigned int c = 1;
    while(n>0)
    {
        s*=c;
        c++;
        n--;
    }
    return s;
}

int main()
{
    unsigned int n;
    cin >>n;
    cout << fact(n) <<endl;
    return 0;
 
}