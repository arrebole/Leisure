#include <iostream>
 
using namespace std;
 
int main()
{
    int n,t,max;
    cin >>n;
    cin >>max;
    for(int i=1;i<n;i++)
    {
        cin >> t;
        if(t>max)
            max =t;
    }
    cout << max <<endl;
    return 0;
 
}