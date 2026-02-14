#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};


int main()
{
    struct Student s[3];
    printf("enter your students info: \n");
    for(int i = 0; i < 3; i++)
    {
        scanf("%d %s %f", &s[i].rollno, &s[i].name, &s[i].marks);
        printf("enter your students info: ");

    }
    printf("student info 1\n");
    printf("%d %s %f\n", s[0].rollno, s[0].name, s[0].marks);
    printf("student info 2\n");
    printf("%d %s %f\n", s[1].rollno, s[1].name, s[1].marks);
    printf("student info 3\n");
    printf("%d %s %f\n", s[2].rollno, s[2].name, s[2].marks);
}