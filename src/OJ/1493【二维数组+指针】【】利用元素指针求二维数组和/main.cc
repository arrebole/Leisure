#include <stdio.h>

#define M 3
#define N 4

void init_array(int *p1);
void pnt_array(int p1[][N]);
int sum_aaray(int b[][N]);

int main()
{
    int a[M][N];
    int s;
    init_array(&a[0][0] /*@#1*/); //输入数组值
    s = sum_aaray(a);             //求和
    pnt_array(a);                 //输出数组
    printf("%d\n", s);
}
void init_array(int *p1)
{
    int i, *p = p1; //指针P指向二维数组的首元素

    for (i = 0; i < M * N; i++, p++) //输入数据存入二维数组
    {
        scanf("%d", p /*@#2*/);
    }
}

void pnt_array(int p1[][4])
{
    //@ @1
    for (int i = 0; i < M;i++)
    {
        for (int j = 0; j < N;j++)
        {
            printf("%d ", p1[i][j]);
        }
        printf("\n");
    }
    //@ @1
}

int sum_aaray(int b[][4])
{
    int i, j, s = 0;
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            s = s + *(&b[i][j]/*@#3*/);
    return s;
}