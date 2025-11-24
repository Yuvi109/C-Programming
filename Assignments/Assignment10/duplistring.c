#include<stdio.h>
#include<string.h>
void main()
{
    char org[]="Copy This String ";
    char*dup=strdup(org);
    printf("%s",dup);
    printf("\n Address of original string%u",org);
    printf("\nAddress of duplicate string%u",dup);
}