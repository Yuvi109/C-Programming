#include<stdio.h>
#include<string.h>
void main()
{
    char str1[]="Hello";
    char str2[]="World";
    printf("%s",strncat(str1,str2,2));
}