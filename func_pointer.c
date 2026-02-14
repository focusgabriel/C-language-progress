#include <stdio.h>

int sum(int, int); 
int (*ptr)(int, int) = &sum;

int main()
{
    int s = ptr(5,5);
    printf("%d", s);
}

int sum(int a, int b)
{
   return a * b;
}