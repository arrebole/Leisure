#include <iostream>
#include <vector> 
using namespace std;
 
int main()
{
    char a[1001];
    vector<int> num;
    cin.getline(a,1001);
    for(int i=0;a[i] !='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
            num.push_back(a[i]);
    }
    for(int i=0;i<num.size();i++)
    {
        cout << num[i];
    }
    cout <<endl;
    return 0;
 
}