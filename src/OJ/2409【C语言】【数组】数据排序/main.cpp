#include <iostream>

using namespace std;
void selection_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int minKey = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] > arr[minKey])
            {
                minKey = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minKey];
        arr[minKey] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    selection_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    return 0;
}