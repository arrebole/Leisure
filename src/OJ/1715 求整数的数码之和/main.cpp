#include <iostream>
#include <queue>

using namespace std;

void sum(int n)
{
    int s = 0,j=0;
    queue<int> que;

    while (n > 0)
    {
        int temp = n % 10;
        que.push(temp);
        j++;
        s += temp;
        n = n / 10;
    }
    for (int i = 0; i < j;i++)
    {
        cout << que.front();
        if(i!=j-1)
            cout << "+";
        que.pop();
    }
    cout << "=" << s << endl;
}

int main()
{
    int n;
    cin >> n;
    sum(n);
    return 0;
}