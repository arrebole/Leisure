#include <stdio.h>

void inputdata(int a[], int n);     //输入数据
int deldata(int a[], int n, int p); //p表示要删除数据的下标，n表示数据个数                                        //返回值1表示删除成功，0表示删除失败
void outputdata(int a[], int n);    //输出数组内容

int main()
{
    int b[20];
    int m, k, r;
    scanf("%d%d", &m, &k);
    inputdata(b, m);
    r = deldata(b, m, k);
    //@@1
    if (r == 0)
    {
        printf("删除位置错误\n");
        return 0;
    }
    //@@1
    outputdata(b, m - 1);
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

int deldata(int a[], int n, int p)
{
    if (p < 0 || p >= n)
    {
        return 0;
    }
    for (int i = p; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    return 1;
}

void outputdata(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
//@@2