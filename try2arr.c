#include <stdio.h>

// calculate the compile time arrays

int main()
{
    int a[2][3] = {{1,2,3}, {4,5,6}},i,j,rows,cols;

    printf("Matrix is: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose is: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d", a[j][i]);
        }
        printf("\n");
    }

    printf("the cols and rows sum: \n");

    for(i = 0; i < 2; i++)
    {
        rows = 0; cols = 0;
        for(j = 0; j < 3; j++)
        
        {   
            
            rows = rows + a[j][i];
            cols = cols + a[i][j];
        }
        
    }
    printf("the total rows = %d ", rows);
        printf("\nthe total cols = %d ", cols);
}