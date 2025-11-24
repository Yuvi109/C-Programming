#include <stdio.h>
#include <string.h>
void main()
{
    char ch[]="Swaraj";
    for(int i=0;i<strlen(ch);i++)
    {
        if (ch[i]=='a')
        ch[i]='$';
    }
    printf("%s",ch);
}