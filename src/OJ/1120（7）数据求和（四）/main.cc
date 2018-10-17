#include <iostream>
 
using namespace std;
 
int sum()
{
    int n,sum=0;
    cin >> n;
    while(n--)
    {
        int temp;
        cin >> temp;
        sum +=temp;
    }
    return sum;
}

int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        cout << sum() <<endl;
    }
    return 0;
 
}