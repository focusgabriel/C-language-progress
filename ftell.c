#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file2.txt", "r");
    char x[30];
    char s;
    // x = fgetc(ptr);
    // printf("%c", x);
    // fscanf(ptr, "%s", x);
    fseek(ptr, 1, SEEK_CUR);
    fscanf(ptr, "%s", x);
    // s = fgetc(ptr);
    printf("%s", x);
    printf("%d", ftell(ptr));
}