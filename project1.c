#include <stdio.h>

int main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int b[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
    int c[3][3]; int i,j;

    printf("the first matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("the second matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("the first matrix plus the second matrix is:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    

}