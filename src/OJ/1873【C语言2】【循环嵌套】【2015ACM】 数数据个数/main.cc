#include <stdio.h>

using namespace std;
bool numb(int n)
{
    if(n>6000){
        return true;
    }
    return false;
}
int main()
{
    int n, t, m,s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        s = 0;
        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
            scanf("%d", &m);
            if(numb(m)){
                s++;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}