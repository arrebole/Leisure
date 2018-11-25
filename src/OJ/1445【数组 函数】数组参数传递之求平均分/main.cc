#include <stdio.h>

float average(int size,int array[]);

int  main()
{   int score[100];
    int i,n;
    float ave;
    scanf("%d",&n); //输入学生人数 
    
    for (i=1; i<=n; i++) 
        scanf("%d", &score[i]);//输入n个学生的分数 
    
    ave = average(n, score); // 调用average函数，传入人数和分数，第1个 参数传值，第2个参数传地址 
    printf("%5.2f",ave);
}

float average(int size,int array[])
{
    double sum = 0;
    for(int i=1; i<=size; i++)
    {
        sum+=array[i];
    }
    return sum/(double)size;
}