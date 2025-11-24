#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    scanf("%s",str);

    int n;
    scanf("%d",&n);

    for (int i=n;str[i]!='\0';i++)
    (str[i]=str[i+1]) ;
    printf("%s",str) ;
}