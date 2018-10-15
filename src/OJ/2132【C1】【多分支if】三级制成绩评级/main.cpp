#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 80)
    {
        cout << "A" << endl;
    }
    else if (n <= 59)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "B" << endl;
    }
    return 0;
}