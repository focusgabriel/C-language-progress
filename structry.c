#include <stdio.h>

typedef struct Person
{
    char* name;
    int age;
    char * nationality;

} per;

int main()
{
    per person = {"charles", 21, "Nigeria"};
    per *ptr = &person;
    printf("%s age %d from %s", ptr->name, ptr->age, ptr->nationality);
}

