#include <stdio.h>

int main()
{
    //@@1
    struct stu
    {
        int num;
        char name[50];
        char sex;
        double score;
    } stu1;

    scanf("%d", &stu1.num);
    scanf("%s", &stu1.name);
    scanf("%c", &stu1.sex);
    scanf("%lf", &stu1.score);
    //@@1
    printf("%d,%s,%c,%.1f\n", stu1.num, stu1.name, stu1.sex, stu1.score);
    return 0;
}