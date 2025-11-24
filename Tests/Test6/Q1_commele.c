#include <stdio.h>
void main()
{
    int arr[]={1,2,3,4,5};
    int brr[]={4,6,5,7,8};
    printf(" Common elements found are :");
    for (int i=0;i<5;i++)
    {
        
        for (int j=0;j<i;j++)
        {
            if(arr[i]==brr[j])
            printf("%d, ",arr[i]);
        }
    }

}