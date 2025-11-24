#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    scanf("%s",str);
    
    char element;
    scanf(" %c",&element);

    char*ptr=strchr(str,element); //strchr returns the address at which the element is found in string
    if (ptr !='\0')
    printf("Element is present in string");
    else 
    printf("Element not present in string");

    
}