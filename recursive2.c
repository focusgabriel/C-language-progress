#include <stdio.h>
int sum(int);
int sum1(int);

int main()
{
    int s = sum(0);
    printf("%d", s);
}

int sum(int x)
{
    int a = 0;
    if(x > 5)
    {
        return a;
    }
    else
    {
        a = x + sum1(x + 1);
    }
}

int sum1(int y)
{
    int b = 0;
    if(y > 5)
    {
        return b;
    }
    else
    {
        b = y + sum1(y + 1);
    }
}