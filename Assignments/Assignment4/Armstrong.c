#include <stdio.h>
int main()
{
    for(int n=1,a,temp;n<500;n++)
    {
        temp=n;
        int sum=0;
        
        
        while(temp>0)
        {
            
            a=temp%10;
            temp=temp/10;
            sum=sum+(a*a*a);
            
            
        }
        if (sum==n)
        printf("%d.",n);
        


    }
}