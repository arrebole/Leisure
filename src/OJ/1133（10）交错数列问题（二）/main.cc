#include <stdio.h>
 
using namespace std;
 
int main(){
    int a,n,m,k;
    scanf("%d %d %d",&a,&n,&m);
    for(int i=1;i<=n;i++){
        i%2==0?k=-1:k=1;
        printf("%d",(a+m*(i-1))*k);
        if(i!=n){
            printf(" ");
        }
    }
    return 0;
}