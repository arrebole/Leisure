#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int a[101] = {0};
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        a[temp]++;
    }
    vector<int> v;
    for (int i = 0; i < 101; i++)
    {
        if (a[i] > 1)
        {
            v.push_back(i);
        }
    }
    if (v.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i];
            if (i != 0)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}