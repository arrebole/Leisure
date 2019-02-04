#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    vector<int> vec;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        i % 2 == 0 ? k = -1 : k = 1;
        vec.push_back(k * (2 * i - 1));
    }
    for (int i = 0; i < vec.size(); i++)
    {
        printf("%d", vec[i]);
        if (i != vec.size())
        {
            printf(" ");
        }
    }
    return 0;
}