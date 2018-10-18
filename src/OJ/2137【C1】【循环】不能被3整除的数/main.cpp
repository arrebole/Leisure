#include <iostream>

using namespace std;

int main()
{
    int m, n,c=0;
    cin >> m >> n;
    for (int i = m ; i <= n; i++)
    {
        if (i % 3 != 0)
        {
            cout << i << " ";
            c++;
        }
        if(c==5)
        {
            cout << endl;
            c = 0;
        }
        
    }

    return 0;
}