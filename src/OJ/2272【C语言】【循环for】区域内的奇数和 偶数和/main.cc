//@@1
#include <stdio.h>

using namespace std;

int main()
{

    int n, x = 0, y = 0;
    scanf("%d",&n);
    //@@1

    for (int i = 1; i <= n; i++ /*@#1*/)
    //@@2
    {
        if (i % 2 == 0)
        {
            y+=i;
        }
        else
        {
            x+=i;
        }
    }
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;
}
//@@2