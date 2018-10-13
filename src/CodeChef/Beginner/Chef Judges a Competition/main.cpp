#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int AliceTimes[n];
        int BobTimes[n];
        for (int i = 0; i < n; i++)
        {
            cin >> AliceTimes[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> BobTimes[i];
        }
        sort(AliceTimes, AliceTimes + n);
        sort(BobTimes, BobTimes + n);

        int time1 = 0;
        int time2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            time1 += AliceTimes[i];
            time2 += BobTimes[i];
        }
        if (time1 > time2)
        {
            cout << "Bob" << endl;
        }
        else if (time1 < time2)
        {
            cout << "Alice" << endl;
        }

        else if (time1 == time2)
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}