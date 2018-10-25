#include <iostream>

using namespace std;

int main()
{
    int a[6], b[8];
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 6;i++)
    {
        int t = a[i];
        for (int j = 0; j < 8;j++)
        {
            if(b[j]==t)
            {
                cout << t << endl;
                break;
            }
        }
    }
        return 0;
}