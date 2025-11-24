#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[20];
    int marks;

};
void display(struct student );
void main()
{
    struct student s1,s2;
    printf("Enter Roll number, Name and Marks");
    scanf("%d",&s1.rollno);
    scanf("%s",s1.name);
    scanf("%d",&s1.marks);

    printf("Enter Roll number, Name and Marks");
    scanf("%d",&s2.rollno);
    scanf("%s",s2.name);
    scanf("%d",&s2.marks);

    display(s1);
    display(s2);
}
void display(struct student s)
{
    printf("%d ",s.rollno);
    printf("%s ",s.name);
    printf("%d ",s.marks);
}
