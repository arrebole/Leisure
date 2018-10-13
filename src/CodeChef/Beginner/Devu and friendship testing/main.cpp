#include <iostream>

using namespace std;

void func()
{
    int totalFriends;
    cin >> totalFriends;

    int date[totalFriends];
    int count[101] = {0};
    int result = 0;

    for (int i = 0; i < totalFriends; i++)
    {
        cin >> date[i];
        count[date[i]]++;
    }

    for (int i = 0; i <= 100; i++)
    {
        if (count[i] != 0)
        {
            result++;
        }
    }

    cout << result << endl;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        func();
    }
    return 0;
}