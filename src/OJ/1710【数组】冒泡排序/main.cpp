#include <iostream>

using namespace std;

void bubbleSort(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (a[j + 1] < a[j])
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
    int a[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }
    bubbleSort(a, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << a[i];
        if (i != 7)
            cout << " ";
    }
    cout << endl;
    return 0;
}