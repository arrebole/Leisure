#include <stdio.h>

void pntstar(int n);

int main()
{
    int t;
    for (int i = 0; i < 6;i++)
    {
        scanf("%d", &t);
        pntstar(t);
    }
        return 0; 
}

void pntstar(int n)
{
//@@2
for (int i = 0; i < n;i++)
{
    printf("*");
}
printf("\n");
//@@2
}