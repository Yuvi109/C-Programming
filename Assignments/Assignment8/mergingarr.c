#include <stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int b[3]={6,7,8};
    int c[10];

    int i,j;
    for (i=0;i<5;i++)
        c[i]=a[i];

    for (j=0;j<3;j++)
        c[i+j]=b[j];
    
    for (int k=0;k<i+j;k++)
    printf("%d",c[k]);

}