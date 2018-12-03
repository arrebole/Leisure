#include <stdio.h>

void inputdata(int a[], int n);     //输入数据
int deldata(int a[], int n, int p); //p表示要删除的数据或下标，n表示数据个数
void outputdata(int a[], int n);    //输出数组内容

int main()
{
    int b[20];
    int m, k, r;
    scanf("%d%d", &m, &k);
    inputdata(b, m);
    //@@1
    r = deldata(b, m, k);
    m -= r;
    //@@1
    outputdata(b, m);
    return 0;
}
void inputdata(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
//@@2

int deldata(int a[], int n, int p)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == p)
            count++;
    }
    int j = 0;
    int *delIndex = new int[count];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == p)
        {
            delIndex[j++] = i;
        }
    }
    int space = 1;
    for (int i = 0; i < count; i++)
    {
        int t = delIndex[i];
        for (int i = t; i < n; i++)
        {
            a[i] = a[i + space];
        }
        for (int k = i; k < count; k++)
        {
            delIndex[k]--;
        }
    }
    delete[] delIndex;
    return count;
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