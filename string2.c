#include <stdio.h>
#include <string.h>
int main()
{
    char fname[15];
    char lname[15];
    int len1,len2;

    printf("enter your first name: ");
    scanf("%s", fname);

    printf("enter your last name: ");
    scanf("%s", lname);

    len1 = strlen(fname);
    len2 = strlen(lname);

    for(int i = 0; i < len2; i++)
    {
        fname[len1 + i] = lname[i];
    }
    printf("%s", fname);
}