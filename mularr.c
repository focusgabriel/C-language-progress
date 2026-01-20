#include <stdio.h>

int main()
{
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int b[3][2] = {{1,2}, {3,4}, {5,6}},j,i,k,sum,c[2][2],y;

    for(i = 0; i < 2; i++)
    { 
        for(j = 0;j < 2; j++)
        {   
            sum = 0;
            for(k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
                 c[i][j] = sum;
        }
        
    }
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
}
