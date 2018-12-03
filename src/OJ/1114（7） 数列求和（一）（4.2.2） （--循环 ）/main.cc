#include <iostream>

using namespace std;

int sequence1(int n);
int sequence2(int n);

int main()
{
    int n, sum = 0;
    cin >> n;
    int s1 = 1, s2 = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += sequence2(s2++);
        }
        else
            sum += sequence1(s1++);
    }
    cout << sum << endl;
    return 0;
}

int sequence1(int n)
{
    return 1 + 4 * (n - 1);
}
int sequence2(int n)
{
    return -3 - 5 * (n - 1);
}