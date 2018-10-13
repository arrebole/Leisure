#include <iostream>

using namespace std;

int handle(int n)
{   
    if(n<=0)
        return 0;
    if (n <= 6)
        return n;
    return handle(n - 1) + handle(n - 2) + handle(n - 3) + handle(n - 4) + handle(n - 5) + handle(n - 6);
}

int main()
{
    while (true)
    {
        int input;
        cin >> input;
        if (input == 0)
        {
            break;
        }
        else
        {
            cout << handle(input) << endl;
        }
    }
    return 0;
}