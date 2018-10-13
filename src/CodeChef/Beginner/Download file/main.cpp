#include <iostream>

using namespace std;

int main(void)
{
    int TC;
    cin >> TC;

    while (TC--)
    {
        int N, K = 0;
        cin >> N >> K;
        int pay = 0;
        while (N--)
        {
            int T, D;
            cin >> T >> D;
            if ((T - K) >= 0)
            {
                T = T - K;
                K = 0;
            }
            else
            {
                K = K - T;
                T = 0;
            }
            pay = pay + T * D;
        }
        cout << pay << endl;
    }

    return 0;
}