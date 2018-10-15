#include <iostream>
#define INT32_MIN (-2147483647 - 1)

using namespace std;
 
int main()
{
    int n,max=INT32_MIN;
    cin>>n;
    while(n--)
    {
        int temp;
        cin >> temp;
        if(temp>max)
            max = temp;
    }
    cout << max << endl;
    return 0;
 
}