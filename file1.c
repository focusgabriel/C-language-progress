#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    FILE *ptr;
    char name[10] = "chinedu";
    int a = 100;
    ptr = fopen("file.txt", "w");
    fputs(name, ptr);
    fprintf(ptr, "\n%d", a); 
    fclose(ptr); */

   /* FILE *ptr;
    char ch[10];
    ptr = fopen("file2.txt", "r");
    if(ptr == NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(ptr))
    {
    fgets(ch,10, ptr);
    printf("%s", ch);
    } */

    FILE *ptr;
    char s[50];
    ptr = fopen("file.txt", "a");
    printf("enter a text");
    gets(s);
    fprintf(ptr, "\n%s", s);
    fclose(ptr);
} 