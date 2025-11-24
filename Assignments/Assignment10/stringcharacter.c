#include <stdio.h>
#include <string.h>
void main()
{
    char string[]="World Hello";
    char*ptr=strchr(string,'H');
    printf("%ld",ptr-string);

    
    // char str[] = "Hello World";
    // printf("%s", strstr(str, "l"));
}