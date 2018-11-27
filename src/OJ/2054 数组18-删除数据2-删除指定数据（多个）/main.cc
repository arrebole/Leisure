#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, value, t;
    vector<int> vx;
    cin >> n >> value;

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t != value)
            vx.push_back(t);
    }
    for (int i = 0; i < vx.size(); i++)
    {
        cout << vx[i];
        if (i != vx.size())
            cout << " ";
    }
    cout << endl;
    return 0;
}