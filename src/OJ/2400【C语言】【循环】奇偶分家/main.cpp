#include <iostream>

using namespace std;

int main()
{
    int testCases;
    int even = 0;
    int oddNumber = 0;
    int input = 0;
    cin >> testCases;
    while (testCases--)
    {
        cin >> input;
        if (input % 2 == 0)
        {
            even++;
        }
        else
        {
            oddNumber++;
        }
    }
    cout << oddNumber << " " << even << endl;
    return 0;
}