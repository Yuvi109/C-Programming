#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    scanf("%s",str);
    char temp=0;

    int n=strlen(str);
    temp=str[0];
    str[0]=str[n-1];
    str[n-1]=temp;
    printf("%s",str);
    
}