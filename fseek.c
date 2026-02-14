#include <stdio.h>

int main()
{
    FILE *ptr;
    char x[30]="a";
    char s;
    ptr = fopen("file2.txt", "a+");
    // fgets("Honour and success", 30, ptr);
    
    fseek(ptr, 4, SEEK_SET);
    // printf("enter a letter");
    fgets(x, 30, ptr);
    fputs(x, ptr);
    // printf("%s", x);

    fclose(ptr);
}