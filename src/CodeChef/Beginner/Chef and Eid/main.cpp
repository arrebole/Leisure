#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int test = 0;
    cin >> test;

    while (test--)
    {
        int n = 0;
        cin >> n;
        int denote[n];
        for (int i = 0; i < n; i++)
        {
            cin >> denote[i];
        }
        sort(denote, denote + n);

        int min = denote[0] - denote[1];
        min >= 0 ? min = min : min = -min;

        for (int j = 1; j < n - 1; j++)
        {
            int c = denote[j] - denote[j + 1];
            c >= 0 ? c = c : c = -c;
            if (min > c)
            {
                min = c;
            }
        }
        cout << min << endl;
    }

    return 0;
}