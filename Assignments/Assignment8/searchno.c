#include <stdio.h>
int main()
{
    int a[5];
    int n;
    int flag=0;
    printf("Enter 5 numbers in array");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter number to search in the array");
    scanf("%d",&n);
    for (int i=0;i<5;i++)
    {
        if(n==a[i])
        {
         printf("Number exist in array,Number =%d",n);
         flag=1;
        } 
        

    }
    if (flag==0);
     printf("Number does not exsist");
    

     
}