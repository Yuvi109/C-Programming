#include <stdio.h>
int main()
{
    char ch = 'y';
    if (ch>=65 && ch<=91)
    {
        ch=ch+32;
    }
    else
    {
        ch=ch-32;
    }
    printf("%c",ch);
}