#include <stdio.h>
int main()
{
    int no=23,i=2,flag=0;
    while(i<no)
    {
        if(no%i==0)
        {
            flag=1;
        }            
        i++;
        
    }
    if(flag==1)
    printf("No is not prime");
    else
    printf("No is prime");
}