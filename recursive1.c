#include <stdio.h>

/* int sum(int);
int main()
{
    int n;
    n = sum(5);
    printf("%d", n);
}
int sum(int n)
{
    int s = 0;
    if (n == 0)
    {
        return s;
    }
    else
    {
        // printf("%d", n);
        s = n + sum(n - 1);
        return s;
    }
} */

// printing an even number only out of 0 - 10 numbers and summing it up 

int even(int);
int main()
{
    int s = even(10);
    printf("%d", s);
}
int even(int x)
{
    int a = 0;
    if (x==0)
    {
        return a;
    }
    else
    {
        if(x % 2 == 0)
        {
            a = x + even(x - 1);
            return a;
        }
        else
        {
            even(x - 1);
            
        }
    }
}