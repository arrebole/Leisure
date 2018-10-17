
#include <stdio.h>
#define INT32_MIN (-2147483647 - 1)

using namespace std;
 
int main()
{
    int max = INT32_MIN;
    while(true)
    {
        int temp = 0;
        scanf("%d",&temp);
        if(temp==-1)
            break;
        if(temp>max)
        {
            max = temp;
        }
    }
    printf("%d\n",max);
    return 0;
 
}