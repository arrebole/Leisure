#include <iostream>

using namespace std;

void sum()
{
    int n,sum=0;
    cin >> n;
    while(n--)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    cout << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        sum();
    }
    return 0;
}