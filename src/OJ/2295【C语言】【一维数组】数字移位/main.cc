#include <stdio.h>

void intpudata(int a[], int n);
void moving(int a[], int n, int k); //k表示向后移动k位
void outputdata(int a[], int n);

int main()
{
    int b[50];
    //@@1
    int n, m;
    scanf("%d %d", &n, &m);
    intpudata(b, n);
    moving(b, n, m);
    outputdata(b, n);
    //@@1
    return 0;
}
//@@2
void intpudata(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void moving(int a[], int n, int k)
{
    int *b = new int[2 * n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (int i = n; i < 2 * n; i++)
    {
        b[i] = a[i - n];
    }
    int j = 0;
    for (int i = n - k; i < 2*n - k; i++)
    {
        a[j++] = b[i];
    }
    delete[] b;
}

void outputdata(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
//@@2