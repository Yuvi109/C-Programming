#include <stdio.h>
int vote()
{
    int age;
    printf("Enter age");
    scanf("%d",&age);
    if(age>=18)
      return 1;
    else 
      return 0;
    
}
int main()
{
    int eligiblity = vote();
    if (eligiblity==1)
    printf("Eligible to vote ");
    else
    printf("Not eligible to vote");
}