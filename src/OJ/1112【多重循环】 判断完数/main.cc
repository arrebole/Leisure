#include <iostream>
 
using namespace std;

bool isCompleteNum(int num)
{
    int sum = 0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
        return true;
    return false;
}

int main()
{
    int n,count=0;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        if(isCompleteNum(i))
        {
            cout << i << " ";
            count++;
        }
    }
    if(count==0)
        cout << "NO"<<endl;
    else
        cout <<endl;
    return 0;
 
}