#include <stdio.h>

// revised order of an array
int main()
{
    int arr[5] = {2,4,6,8,10}, arr2[4],i,j,k;
    for(i =0; i < 5; i++)
    {
        printf(" %d", arr[i]);

        arr2[i] = arr[i];
    }


    printf("\nrevised order...");
    printf("\n");

    for(i = 4;i >= 0; i--)
    {   
        // arr2[j] = arr[i];
         printf("%d ", arr2[i]);
    }

}