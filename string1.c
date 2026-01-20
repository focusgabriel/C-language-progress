#include <stdio.h>
#include <string.h>

int main()
{
    char s[15];
    printf("Enter your name: \n");
    
    int count = 0,i=0;
    gets(s);
    while(s[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);
}