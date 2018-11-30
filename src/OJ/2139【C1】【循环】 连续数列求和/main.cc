#include <iostream>

int sum(int n);
int ssum(int n);

using namespace std;
 
int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0; 
}

int sum(int n)
{
    int s =0;
    for(int i = 1; i <= n; i++)
    {
        s +=ssum(i); 
    }
    return s;
}
int ssum(int n)
{
    return (1+n)*n/2;
}
