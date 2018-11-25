#include <stdio.h>
int main()
{
    int a[3][4]= {{2,4,6,8},{10,12,14,16},{18,20,22,24}};;
    int * pa, i;  //pa为指向数组元素的指针
    printf("多维数组a[3][4]中元素如下表：\n");
    for(i=0; i<3; i++)
    {
        //以下for循环中，先让pa获得i行0列元素的地址，然后pa的指向地址逐步后移，直到超出该行末尾元素的地址为止。
        for(pa = a[i]/*@#1*/;pa<=a[i]+3/*@#2*/;pa++)     
            printf("%3d",*pa);
        printf("\n");
    }
    return 0;
}