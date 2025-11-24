#include <stdio.h>
int sum(int[],int);
int main()
{
    int s=0;
    int arr[4];
    printf("Enter numbers to add");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res= sum(arr,s);
    printf("%d",res);
}
int sum(int arr[], int s)
{
    for (int i=0;i<4;i++)
    {
        s=s+arr[i];
    }
    return s;
}