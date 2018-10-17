#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag = true;
    cin >> n;
    for (int i = 2; i < n;i++)
    {
        if(n%i==0)
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }
        return 0;
}