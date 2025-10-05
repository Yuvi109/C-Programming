#include <stdio.h>
int main()
{
    int a =10;
    int b=21;
    int c = a;
    a = b;
    b = c;
    printf("a=%d, b=%d" , a,b);
}