#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
    vector<int> vx;
    unsigned int n;
    int t,sum=0;

    cin >> n;
    while(n>0)
    {
        t = n % 10;
        sum += t;
        n /= 10;
        vx.push_back(t);
    }
    for (int i = 0; i < vx.size();i++)
    {
        cout << vx[i];
        if(i!=vx.size()-1)
            cout << "+";
        else
            cout << "=";
    }
    cout << sum << endl;
    return 0;
 
}