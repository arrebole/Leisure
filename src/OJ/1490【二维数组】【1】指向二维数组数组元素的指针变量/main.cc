#include <stdio.h>

void input(float *p,int m,int n); //该函数输入m个学生的4门课程的成绩，p指向数组元素的指针变量,m表示行数,n表示列数。 
void average(float *p);  //p指向要查询的学生的首门课程成绩，该函数输出所要查询学生的平均分

int main()
{   float score[3][4];
    int k;      
    input(&score[0][0]/*@#1*/,3,4);   //把元素地址传递给指针变量p 
    average(&score[0][0]/*@#2*/);  
    return 0;
}

void average(float *p)
{
    float *p_end;
    float sum=0,aver;
    p_end = p + 12/*@#3*/;      //让p_end指向要最后一个学生的最后一门课程成绩的地址
    for(; p<=p_end; p++)
       sum = sum +(*p);
    aver=sum/4/3;    
    printf("average=%.2f\n",aver);
}


void input(float *p, int m,int n)
{   int i,j;
    for(i=0;i<m;i++)   
        for(j=0;j<n;j++)
            scanf("%f",&p[i*4 + j]/*@#4*/); 
}