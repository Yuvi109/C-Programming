#include <stdio.h>
void main()
{
    int a[8];
    printf("Enter 1st array");
    for(int i=0;i<8;i++)
    scanf("%d",&a[i]);
    
    int b[5];
    printf("Enter 2nd array");
    for(int i=0;i<5;i++)
    scanf("%d",&b[i]);
    
    int c[15];

    for(int i=0;i<5;i++)
    {
        c[i]= a[i]+b[i];
        printf(" %d",c[i]);
    }

}