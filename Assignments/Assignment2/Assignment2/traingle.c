#include <stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter side one of traingle :");
    scanf("%d",&side1);
    printf("Enter side two of traingle :");
    scanf("%d",&side2);
    printf("Enter side three of traingle :");
    scanf("%d",&side3);

    if (side1==side2 && side1 == side3)
    printf("It is equilateral traingle");
    else if (side1 ==side2 || side2==side3|| side1==side3)
    printf("It is isoceles traingle");
    else 
    printf("It is scalane traingle");
}
    