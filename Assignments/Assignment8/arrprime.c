#include <stdio.h>
void main()
{
    
    int arr[5];
    printf("Enter array");
    for (int i=0;i<5;i++)
    scanf("%d",&arr[i]);

    printf("Prime Numbers are :");
    for (int i=0;i<5;i++)
    {
        int isprime=1;
        for (int j=2;j<arr[i];j++)
        {
            if(arr[i]%j ==0)
            isprime=0;
            
        }
        
        if (isprime==1)
        printf(" %d",arr[i]);    
        
    } 
}