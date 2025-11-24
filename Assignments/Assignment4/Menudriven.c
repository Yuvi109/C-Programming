#include <stdio.h>
int main()
{
    int menu,n,temp,a,sum=0,reversed=0;
    printf("Select 1 to check number is odd or even\n");
    printf("Select 2 to check number is prime or not\n" );
    printf("Select 3 to check pallindrome for number\n" );
    printf("Select 4 to check for positive negative or zero number\n" );
    printf("Select 5 to reverse the number\n" );
    scanf("%d",&menu);
    printf("Select a number to operate on");
    scanf("%d",&n);
    if(menu==1)
    {
        if (n%2==0)
        printf("Number is even");
        else 
        printf("Number is odd");
    }
    else if(menu==2)
    {
        int i;
        for (i=2; i<n;i++)
        {
           if(n%i ==0)
           {
            printf("Number is not prime");
            break;
           }
        }
        if (n==i)
            printf("Number is prime");
        
        
        
        
    }
    else if (menu==3)
    {
        temp=n;
        
        while(temp>0)
        {
            a=temp%10;
            temp=temp/10;
            reversed=reversed*10+a;
        }
        if (reversed==n)
        printf("Number is pallindrome");
        else 
        printf("Number is not pallindrome");

    }
    else if (menu==4)
    {
        if(n>0)
        printf("No is positive");
        else if(n<0)
        printf("No is negative");
        else if(n==0)
        printf("No is neutral");

    }
    else if (menu==5)
    {
        temp=n;
        
        while(temp>0)
        {
            a=temp%10;
            temp=temp/10;
            reversed=reversed*10+a;
        }
        printf("%d",reversed);

    

    }
    else if(menu==6)
    {
        temp=n;
        while(temp>0)
        {
            a=temp%10;
            temp=temp/10;
            sum=sum+a;

        }
        printf("%d",sum);
    }
}