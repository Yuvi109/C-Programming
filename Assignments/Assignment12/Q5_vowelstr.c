#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    scanf("%s",str);
    int count=0;
    char vowel[]="aeiouAEIOU";
    for (int j=0;str[j]!='\0';j++)
    {
        if (strchr(vowel,str[j]))
        count++;
    }
    printf("No of vowels are : %d",count);
}