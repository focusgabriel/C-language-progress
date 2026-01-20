#include <stdio.h>
#include <string.h>

int main()
{
    char name[10] = "chinedu",ch;
    int len = strlen(name);
    for(int i = 0, j = len-1; i < j; i++, j--)
    {
        ch = name[i];

        name[i] = name[j];

        name[j] = ch;
    }
    printf("%s", name);
}