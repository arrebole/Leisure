#include <stdio.h>
int isleap(int year);
int main()
{
    int y;
    scanf("%d",&y);
    
    if(isleap(y)==1)
        printf("yes\n");
    else 
        printf("no\n");
    
    return 0;
}
//@@1
int isleap(int year)
{
    int flag = -1;
    if(year % 4== 0 && year % 100 != 0)
        flag = 1;
    if(year % 100 ==0 && year % 400 == 0)
        flag = 1;
    return flag;
}
//@@1