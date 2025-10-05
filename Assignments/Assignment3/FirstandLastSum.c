#include <stdio.h>
int main()
{
    int n=98345,last;
    last =n%10;
    while(n>10)
    {
        n=n/10;
    }
    printf("First digit""=%d\n",n);
    printf("Last Digit is""=%d\n",last);
    printf("Sum of first and last digit is""=%d\n",n+last);


}