#include <stdio.h>

int* max(int[], int);

void main()
{
    int *total;
    int arr[5] = {2,4,6,10,0};
    total = max(arr, 5);
    printf("max value is = %d", *total);
}

int* max(int arr[], int a)
{
    int x = arr[0];
    int s = 0;
    int *sum = &s;
    for(int i = 1; i < a; i++)
    {
        if(arr[i] > x)
        {
            x = arr[i];
        }
        else{
            break;
        }
        *sum = x;
    }
    return sum;
}
