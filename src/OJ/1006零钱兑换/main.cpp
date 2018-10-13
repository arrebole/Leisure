#include <iostream>

using namespace std;

void change(int n)
{
    int local = n;
    int c = local / 5;
    local = local - c * 5;
    int b = local / 2;
    local = local- b * 2;
    int a = local;
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    while (true)
    {
        int retrieve;
        cin >> retrieve;
        if (retrieve == 0)
        {
            break;
        }
        else
        {
            change(retrieve);
        }
    }
    return 0;
}