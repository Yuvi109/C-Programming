#include<stdio.h>
void main()
{
    int a[]={6,9,38,15,54,2};
    int max=a[0];
    int max2=a[0];
    for (int i=0;i<6;i++)
    {
        if(a[i]>max)
        {
            max2=max;
            max=a[i];
        }
        if(a[i]>max2 && a[i]<max)
        max2=a[i];
        
    }
    printf("%d",max); 
    printf("\n%d",max2);
}   