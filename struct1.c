#include <stdio.h>

struct abc
{
    char* a;
    float c;
    int b;
};

int main()
{
    struct abc x = {.a="chinedu", .c=90.1, .b=50};
    printf("%s %f %d", x.a, x.c, x.b);
}