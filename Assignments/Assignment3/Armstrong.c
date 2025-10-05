#include <stdio.h>
int main()
{
    int n=153,temp,sum=0;
    temp=n;
    while(temp>0)
    {
        int digit=temp%10;
        temp=temp/10;
        sum=sum+(digit*digit*digit);
    }
    
    
     if (sum==n)
     {
        printf("It is an armstorng number");

     }
     else{
        printf("Not an armstrong number");
    
     }
     printf("%d",temp);
     


    
    
}