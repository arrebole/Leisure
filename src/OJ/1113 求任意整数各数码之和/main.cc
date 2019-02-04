#include <stdio.h>
#include <vector>

using namespace std;

int sum(unsigned int n)
{
    int t, s = 0;
    vector<int> vec;
    while (n > 0)
    {
        t = n % 10;
        s += t;
        n /= 10;
        vec.push_back(t);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        printf("%d", vec[i]);

        if (i == vec.size() - 1)
        {
            printf("=%d", s);
        }
        else
        {
            printf("+");
        }
    }
    return 0;
}

int main()
{
    unsigned int n;
    scanf("%d", &n);
    sum(n);
    return 0;
}