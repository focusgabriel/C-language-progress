#include <stdio.h>
#define N 50
int main()
{
    int a[N][N], b[N][N], c[N][N],i,j,x,y,m,n,k,sum;

    printf("enter two numbers for rows and columns for the first Matrix:\n");
    scanf("%d %d", &m, &n);
    printf("enter numbers for your rows and cols:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter two numbers for rows and columns for the second Matrix:\n");
    scanf("%d %d", &x, &y);
    printf("enter numbers for your rows and cols:\n ");
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < x; i++)
    {
        for(j = 0; y < y; j++)
        {
            printf("%d", b[x][y]);
        }
        printf("\n");
    }

    if(x != n)
    {
        printf("can't multiply the matrix");
    }
    else
    {
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < y; j++)
            {
                sum = 0;
                for(k = 0; k < y + m; k++)
                {
                  sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
        
    printf("Multiplication of the two Matrix\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < y; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
}