#include <stdio.h>
void main()
{
    int arr [5];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min =arr[0];
    for (int i=1;i<5;i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
                
    }
    printf("The minimum number of array is =%d",min);

    int max=arr[0];
    for(int i=0;i<5;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nMaximum number in array is =%d",max);

}