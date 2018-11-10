#include <iostream>

using namespace std;

int main()
{
    int a[3],max;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (int i = 0; i < 3;i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    cout << max << endl;
    return 0;
}