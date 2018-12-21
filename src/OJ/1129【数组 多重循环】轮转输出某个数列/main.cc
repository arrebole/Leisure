#include <stdio.h>
 
int main()
{
    int *a = new int[12];
    for (int i = 0; i < 6;i++)
    {
        scanf("%d", &a[i]);
        a[i + 6] = a[i];
    }

    for (int i = 0; i < 6;i++)
    {
        for (int j = 0; j < 6;j++)
        {
            printf("%d ", a[i + j]);
        }
        printf("\n");
    }
    return 0;
 
}