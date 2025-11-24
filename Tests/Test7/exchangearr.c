#include <stdio.h>
#include <string.h>
void exchangedarr(int[],int);
void main()
{
    int arr[]={11,23,30,4,21,45,50};
    int size =7;
    exchangedarr(arr,size);
}
void exchangedarr(int arr[],int size)
{
    int i;
    printf("Enter first position Xth");
    scanf("%d",&i);

    int j;
    printf("Enter second position Yth");
    scanf("%d",&j);

    int temp;

        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    
        
    for(int k=0;k<size;k++)
    {
        printf("%d,",arr[k]);
    }
}