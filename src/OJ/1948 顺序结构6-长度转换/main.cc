#include <stdio.h>
 
using namespace std;
 
int main()
{
    double mile,kms;
    scanf("%lf", &mile);
    kms = mile * 1.609;
    printf("%.2lf", kms);
    return 0;
}