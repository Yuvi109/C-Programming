#include <stdio.h>
int main()
{
    int sum=0;
    int arr[4];
    printf("Enter numbers to add");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<4;i++)
    {
        sum =sum+arr[i];
    }
    printf("The sum of array is: %d",sum);
    
}