#include <iostream>

using namespace std;

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++)
        {
            if(j==0 || j==n-1)
                cout << "*";
            else if(i==0 || i== n-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    draw(n);
    return 0;
}