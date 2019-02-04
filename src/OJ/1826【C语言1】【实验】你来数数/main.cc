#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[] = {n, n + 1, n + 2, n + 3};

    for (int i = 0; i <= 3; i++)
    {
        int m1 = a[i];
        if (m1 == 0)
        {
            continue;
        }
        for (int j = 0; j <= 3; j++)
        {
            while (j == i)
            {
                j++;
            }
            if (j > 3)
            {
                continue;
            }
            int m2 = a[j];
            for (int k = 0; k <= 3; k++)
            {
                while (k == i || k == j)
                {
                    k++;
                }
                if (k > 3)
                {
                    continue;
                }
                int m3 = a[k];
                printf("%d%d%d\n", m1, m2, m3);
            }
        }
    }

    return 0;
}