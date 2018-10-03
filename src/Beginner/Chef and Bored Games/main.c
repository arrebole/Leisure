#include <stdio.h>
#include <math.h>

int main()
{
    int testCases;
    int num;
    scanf("%d", &testCases);
    while (testCases--)
    {
        int sum = 0, i = 1;
        scanf("%d", &num);
        while (i <= num)
        {
            sum += pow(num + 1 - i, 2);
            i += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}