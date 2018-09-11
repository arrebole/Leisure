#include <iostream>

using namespace std;

int main()
{
    int num, res = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        cin >> temp;
        res += temp;
    }

    cout << res << endl;

    return 0;
}