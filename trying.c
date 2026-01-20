#include <stdio.h>
#include <string.h>
// creating a comparing program to compare two string....
int main()
{
    char s1[20] = "Goodday";
    char s2[10] = "Goodday";
    int i,j,len1 = strlen(s1), len2 = strlen(s2);
    int checker = 0;
    for(i = 0; i <= len1 && len2; i++)
    {
        if(s1[i] != s2[i])
        {
            checker = 1;
            break;
        }
    }
    if(checker == 0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
}