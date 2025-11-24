#include <stdio.h>
#include <stdlib.h>
int*storedata(int*,int);
void printeven(int*,int );
void main()
{
    int*a=(int*)malloc(sizeof(int)*10);
    int n=10;
    storedata(a,n);
    printeven(a,n);


}
int*storedata(int*a,int n)
{
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    return a;
    
}
void printeven(int*a,int n)
{
    for(int i=0;i<n;i++)
    {
        if (a[i]%2==0)
        printf("%d ",a[i]);
    
    }
   
    
}
    

