#include <iostream>

using namespace std;

int main()
{
    int a[15];
    for (int i = 0; i < 15; i++)
    {
        cin >> a[i];
    }

    int key;
    bool isHave = false;
    cin >> key;

    for (int i = 0; i < 15; i++)
    {
        if (a[i] == key)
        {
            cout << i << endl;
            isHave = true;
            break;
        }
    }
    if (!isHave)
        cout << "NO" << endl;
    return 0;
}