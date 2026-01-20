#include <stdio.h>

// printing a matrix;
int main()
{
    int a[2][3],i,j;
    printf("enter elements of 2D Matrix: ");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

printf("Matrix is: \n");

for(i = 0; i < 2; i++)
{
    for(j = 0; j < 3; j++)
    {
        printf("%d\t", a[i][j]);
        // sum = sum + a[i][j];
    }
    printf("\n");
}
    // printf("\nsum= %d",sum);
printf("\nTranspose of matrix:\n");

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 2; j++)
    {
        printf("%d", a[j][i]);
    }
    printf("\n");
}
    
}