#include "stdio.h"
void insert(int a[], int n, int k); //k是要插入的数据,n表示有效数据个数
void inputdata(int a[], int n);     //输入数据
void outputdata(int a[], int n);    //输出数组内容

int main()
{

    int b[120];
    int m, k, r;
    scanf("%d%d", &m, &k);
    inputdata(b, m);
    insert(b, m, k);
    outputdata(b, m + 1);
    return 0;
}

//@@2
void inputdata(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void insert(int a[], int n, int k)
{
    int i = n-1;
    while(a[i]>k)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[++i] = k;
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