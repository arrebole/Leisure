#include <stdio.h>
#include <string.h>

void reverse(char ch[]);

int main()
{
  char c[255];
  gets(c);
  reverse(c);
  puts(c);

}

void reverse(char ch[])
{
    char t;
    int len = strlen(ch);
    int mind = len/2;
    for(int i = 0; i < mind; i++)
    {
        t = ch[i];
        ch[i] = ch[len-i - 1];
        ch[len - 1 -i] = t; 
    }
}