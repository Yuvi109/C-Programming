#include <stdio.h>
void alternate(int a[]);
void main()
{
    int a[8];
    for (int i=0;i<8;i++)
    scanf("%d",&a[i]);
    alternate(a);

}
void alternate(int a[])
{
    printf("Alternate numbers starting from 0th index:");
    for (int i=0;i<8 ;i++)
    if(i%2==0)
    printf(" %d",a[i]);
 
}