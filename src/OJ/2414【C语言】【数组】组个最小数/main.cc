#include <iostream>

using namespace std;

void sort(int a[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    sort(a);
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 0)
            count++;
    }
    if (count > 0)
    {
        a[0] = a[count];
        a[count] = 0;
    }
    for (int i = 0; i < 10;i++)
    {
        cout << a[i];
    }
    cout << endl;
    return 0;
}