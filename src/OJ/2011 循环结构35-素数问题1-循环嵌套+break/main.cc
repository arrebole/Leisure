#include <iostream>

using namespace std;

bool isPrimeNum(int n)
{
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n;i++)
    {
        if(isPrimeNum(i))
            cout << i << endl;
    }
    return 0;
}