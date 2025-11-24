#include <stdio.h>
void oddnum(int []);
void evennum(int[]);
void main()
{
    int a[6];
    printf("Enter numbers in array");
    for (int i=0;i<6;i++)
    scanf("%d",&a[i]);
    oddnum(a);
    evennum(a);


}
void oddnum(int a[])
{
    printf("Odd Numbers in array are: ");
    for (int i=0;i<6;i++)
    {
        if (a[i]%2 !=0)
        printf(" %d",a[i]);
    }
}
void evennum(int a[])
{
    printf("\n");
    printf("Even numbers in array are: ");
    for (int i=0;i<6;i++)
    {
        if (a[i]%2==0)
        printf(" %d",a[i]);
    }
}