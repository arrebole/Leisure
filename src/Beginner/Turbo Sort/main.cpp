#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int maxInt = 0;
    cin >> n;
    int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (maxInt < a[i])
            maxInt = a[i];
    }

    // 桶排序
    int bucket[maxInt + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        int t = a[i];
        bucket[t]++;
    }

    for (int i = 0; i <= maxInt; i++)
    {
        while (bucket[i] > 0)
        {
            cout << i << endl;
            bucket[i]--;
        }
    }

    return 0;
}