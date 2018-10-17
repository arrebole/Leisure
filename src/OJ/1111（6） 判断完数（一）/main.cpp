#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    if (sum == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}