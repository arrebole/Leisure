#include <iostream>

using namespace std;

int main()
{
    int a[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > sum / 10)
            count++;
    }
    cout << count << endl;
    return 0;
}