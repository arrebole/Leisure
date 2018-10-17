#include <iostream>
 
using namespace std;
 
int main()
{
    int n,i=0,sum=0;
    cin >>n;
    
    do
    {
        sum+=i;
        i++;
    } while (n>=i);
    cout <<sum <<endl;
 
return 0;
 
}