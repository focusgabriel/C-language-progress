#include <stdio.h>
void main()
{
int x[4] = {20,6,10,43};
int i,y;

y = x[0];
for( i = 1; i <= 4; i++)
{
    if(x[i] > y)
    {
        y = x[i];
    }
}
    printf("%d", y);

}
