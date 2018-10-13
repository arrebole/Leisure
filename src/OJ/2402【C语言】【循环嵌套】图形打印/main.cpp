#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "#";
        }

        for (int j = 0; j < k; j++)
        {
            cout << "$";
        }
        cout << endl;
    }
    return 0;
}