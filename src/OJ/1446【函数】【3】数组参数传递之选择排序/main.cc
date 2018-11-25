#include <stdio.h>
void SelectSort(int array[],int size);

main()
{
    int a[100],i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);

    //调用SelectSort函数，传入数组a和数组长度，由于数组是传地址，所以在   SelectSort中把形参数组排好序，也就是把实参数组a排好序了。
    SelectSort(a,n);    
    
    for(i=1; i<=n; i++) //输出排序后的数组
        printf("%d ",a[i]);
    printf("\n");
}
//@@1
void SelectSort(int array[],int size)
{
    int i,j,t;
    for(i = 1;i <= size-1; i++)
    {
        int index = i;
        for(j= i + 1; j <= size; j++)
        {
            if(array[j]>array[index])
                index = j;
        }
        t = array[i];
        array[i] = array[index];
        array[index] = t;

    }
}
//@@1