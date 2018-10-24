#include <iostream>
 
using namespace std;

int sum(int n)
{
    int s = 0;
    int local = 0;
    while(n>0)
    {
        local = n%10;
        s+=local;
        n = n/10;
    }
    return s;

}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) <<endl;
    return 0;
 
}