#include"stdio.h"
//@#1
int is_sushu(int m);

int main()
{
   
    //@@1
    int i = 0;
    int n,m;
    scanf("%d", &n);

    //@@1
    for(i=0;i<n;i++)
    {   
        scanf("%d",&m);
        if(is_sushu(m)==1)
        //@@2
        {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
      
        //@@2 
    }
}

//@@3
int is_sushu(int m)
{
    if(m==1)
    {
        return -1;
    }
    for (int i = 2; i < m;i++)
    {
        if(m%i==0)
        {
            return -1;
        }
    }
    return 1;
}
//@@3