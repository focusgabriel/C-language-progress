#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10] = "hello";
    char s2[10] = "";
    int checker = 0, i;

    for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if(s1[i] != s2[i])
        {
            checker = 1;
            break;
        }
    }
   
    if(checker == 0)
    {
        printf("%s and %s are same", s1,s2);
    }
    else
    {
        printf("%s and %s are not same", s1,s2);
    }
}