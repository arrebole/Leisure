#include <stdio.h>

void init_array(int *p1);
void getmax(int *p1, int s[]);

int main()
{
    int b[3][4], s[3];
    int i;
    init_array(&b[0][0] /*@#1*/);
    getmax(&b[0][0] /*@#3*/, s);
    for (i = 0; i < 3; i++)
        printf("row%d:  max=%d\n", i, s[i]);
    return 0;
}

void init_array(int *p1 /*@#4*/)
{
    int i, j;
    for (i = 0; i < 3 * 4; i++)
        scanf("%d", &p1[i] /*@#5*/);
}

void getmax(int *p1, int s[])
{
    int i, j, max;
    for (i = 0; i < 3; i++)
    {
        max = p1[i * 4]; //@ #6 //取最大值为每行的第一个单元格的值
                         //从每行的第二列单元格到最后一个单元格逐个比较
        for (j = 1; j < 4; j++)
        //@ @1
        {
            if (p1[i * 4 + j] > max)
            {
                
                max = p1[i * 4 + j];
            }
        }
        //@ @1
        s[i] = max;
    }
}