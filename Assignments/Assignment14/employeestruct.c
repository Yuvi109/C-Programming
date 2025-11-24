#include<stdio.h>
#include<string.h>
struct employee
{
    int ID;
    char Name[20];
    double Salary;

};
void display(struct employee );
void main()
{
    struct employee e1,e2;

    printf("Enter First Employee  ID, Name and Salary");
    scanf("%d",&e1.ID);
    scanf("%s",e1.Name);
    scanf("%lf",&e1.Salary);

    printf("Enter Second Employee  ID, Name and Salary");
    scanf("%d",&e2.ID);
    scanf("%s",e2.Name);
    scanf("%lf",&e2.Salary);

    display(e1);
    display(e2);
    

}
void display(struct employee e)
{
    printf("%d",e.ID);
    printf("%s",e.Name);
    printf("%lf",e.Salary);
}