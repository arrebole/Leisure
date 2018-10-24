#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x,count=0;
    vector<int> v;
    cin >> x;
    while (true)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
            break;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size();i++)
    {
        if(v[i]%x==0)
        {
            cout << v[i] << endl;
            count++;
        }
    }
    if(count==0)
    {
        cout << "ZERO"<< endl;
    }
    return 0;
}