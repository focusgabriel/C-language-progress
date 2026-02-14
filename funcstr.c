#include <stdio.h>

char * name()
{
    static char myname[]= "chinedu";
    return myname;
}

void main()
{
    char *n = name();
    n[0] = n[0] - 32;
    printf("%s", n);
}