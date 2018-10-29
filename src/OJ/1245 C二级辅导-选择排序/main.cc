#include <iostream>

using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10;i++)
    {
        int index = i;
        for (int j = i; j < 10;j++)
        {
            if(a[j]>a[index])
                index = j;
        }
        int t = a[index];
        a[index] = a[i];
        a[i] = t;
    }
    for (int i = 0; i < 10;i++)
    {
        cout << a[i] << endl;
    }
        return 0;
}