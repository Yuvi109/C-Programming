#include <stdio.h>
void main()
{
    int a[8];
    for (int i=0;i<8;i++)
    scanf("%d",&a[i]);

    printf("Alternate numbers starting from 0th index:");
    for (int i=0;i<8 ;i++)
    if(i%2==0)
    printf(" %d",a[i]);
 
    printf("\n");
    printf("Alternate numbers starting from 1st index:");
    for(int i=0;i<8;i++)
    if(i%2 !=0)
    printf(" %d",a[i]);

    
}