#include <stdio.h>

int check(int n,int d);

int main()
{
	int num1,num2;
	printf("Enter n,d:");
	scanf("%d,%d",&num1,&num2);
	if(check(num1,num2)==1)
		printf("The digit %d is in data %d\n",num2,num1);
	else 
		printf("The digit %d is not in data %d\n",num2,num1);
    return 0;
}

int check(int n,int d)
{
    int t;
    while(n>0)
    {
        t=n%10;
        n/=10;
        if(t==d)
            return 1;
    }
    return -1;
}