#include <stdio.h>
int swap(int*,int*);
int main()
{
    int a =10,b=20;
    printf("Before swap a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\n After swap a=%d,b=%d",a,b);

}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}