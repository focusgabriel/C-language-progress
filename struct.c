#include <stdio.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    // s.name[20] = "charles";
    struct Student s;
    printf("Student No: ");
    scanf("%d",&s.rollno);
    printf("Students full name: ");
    scanf("%s",&s.name);
    printf("Students Marks: ");
    scanf("%f",&s.marks);

    
    printf("students no %d full name %s total marks of %f", s.rollno, s.name, s.marks);
}