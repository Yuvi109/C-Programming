#include <stdio.h>
void main()
{
    int sum=0;
    
    for (int i=1;i<=5;i=i+2)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            
        }
              
    }
    printf("%d",sum);
    
}