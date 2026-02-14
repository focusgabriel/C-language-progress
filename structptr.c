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

    struct Student *ptr = s;

    
    scanf("%d %s %f", &ptr->rollno, &ptr->name, &ptr->marks);
        
    printf("%d %s %f", ptr->rollno, ptr->name, ptr->marks);
    
    // printf("%d %s", ptr->rollno, (*ptr).name);
}