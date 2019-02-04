#include <stdio.h>

using namespace std;

int main()
{
    int t;
    int max = 0;
    while (true)
    {
        scanf("%d", &t);
        if (t == -1)
        {
            break;
        }
        if (t > max)
        {
            max = t;
        }
    }
    printf("%d\n", max);
    return 0;
}