#include <iostream>
 
using namespace std;
 
int main()
{
    char a[200];
    cin.getline(a,200);
    int x,y,length =0;
    cin >> x>>y;
    for(int i=0;a[i] != 0;i++)
    {
        length++;
    }
    if(x>length || x+y-1>length)
    {
        cout << "求子串失败"<<endl;
    }else
    {
        for(int i=x-1;i<x-1+y;i++)
        {
            cout << a[i];
        }
        cout <<endl;
    }
    return 0;
 
}