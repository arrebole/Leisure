#include <iostream> 
using namespace std;
 
int main()
{
    int n,re;
    cin >>n;
    re+=(n%10)*10;
    n/=10;
    re +=n;
    cout << re <<endl;
    return 0;
 
}