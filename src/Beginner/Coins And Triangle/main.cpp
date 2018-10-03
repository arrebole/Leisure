#include <iostream>

using namespace std;

int handle()
{
    int num;
    cin >> num;
    int count = 0;
    int i = 1;
    while (true)
    {
        if (num - i < 0)
        {
            count = i - 1;
            break;
        }
        num -= i;
        i++;
    }
    return count;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cout << handle() << endl;
    }
    return 0;
}