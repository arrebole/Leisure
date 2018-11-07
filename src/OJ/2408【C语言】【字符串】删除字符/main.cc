#include <stdio.h>
#define MAXN 2001

void delchar(char str[], char c);

int main()
{
    char str[MAXN], c;

    gets(str); //滴入字符串
    scanf("%c", &c);
    delchar(/*@#1*/ str, c);
    puts(str);

    return 0;
}

/* 你的代码将被嵌在这里 */

//@@1
void delchar(char str[], char c)
{
    bool flag = false;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!flag && str[i] == c)
        {
            flag = true;
        }
        if(flag)
        {
            str[i] = str[i + 1];
        }
    }
}
//@@1