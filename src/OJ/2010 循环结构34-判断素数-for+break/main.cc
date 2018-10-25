#include <iostream>

using namespace std;

int main()
{
    bool isPrimeNum = true;
    int n;

    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrimeNum = false;
            break;
        }
    }
    if(isPrimeNum)
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    return 0;
}