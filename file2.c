#include <stdio.h>

int main()
{
    FILE *ptr;
    char ch[30];
    ptr = fopen("file.txt", "r");

    // printf("enter a text");
    
    
        while(!feof(ptr))
        {
            fgets(ch,20, ptr);
            printf("%s\n", ch);
        }
        
    
    // FILE *ptr;
    // char text[30];
    // ptr = fopen("file2.txt", "a");
    // printf("enter a text");
    // gets(text);
    // fprintf(ptr, "\n%s", text);
    // fclose(ptr);
}