#include <stdio.h>
#include <string.h>
struct Details
{
    char name[20];
    char password[20];
    char name2[20];
    char password_confirm[20];
};
int main()
{
    struct Details info[2];
    printf("create your profile\n");
    for(int i = 0; i < 2; i++)
    {
        printf("enter a name: ");
        scanf("%s", &info[i].name);
        printf("enter a password: ");
        scanf("%s", &info[i].password);
    }
    for(int i = 0; i < 2; i++)
    {
        printf("confirm your credentials\n");
        printf("enter your name: ");
        scanf("%s", &info[i].name2);
        printf("enter your password: ");
        scanf("%s", &info[i].password_confirm);
    
        if(strcmp(info[1].name, info[1].name2) == 0 && strcmp(info[1].password, info[1].password_confirm) == 0) 
        {
    
            printf("Welcome %s",info[0].name2);
        }
        else 
        {
            printf("Wrong credentials");
        }
    
    }
}