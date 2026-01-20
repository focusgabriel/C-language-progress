#include <stdio.h>
#include <string.h>
int main()
{
    char name[10] = "Chinedu*";

    // for(int i = 0; name[i] != '\0'; i++)
    // {
    //     if(name[i] >= 'a' && name[i] <= 'z')
    //     {
    //         name[i] -= 32;
    //     }
        
    // }
    strlwr(name);
    printf("%s", name);
}