#include <stdio.h>
#include <string.h>

void main()
{
    char name[30];
    printf("Write your Message: ");
    gets(name);
    for(int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] += 1;
        }
    }
    printf("<< your Message was successfully encrypted >>");
    strrev(name);
    printf("\n%s", name);
}
