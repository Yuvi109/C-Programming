#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="naman";
    char pallindrome [10];
    strcpy(pallindrome,str);
    strrev(str);
    int res =strcmp(str,pallindrome);
    if (res==0)
    printf("String is Pallindrome");
    else 
    printf("Not pallinmdrome")
}