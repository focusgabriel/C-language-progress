#include <stdio.h>

// copying an array into another array
void main()
{
    int arr[4] = {2,4,7,8}, arr2[4],i,j,k;
    for(i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);

        arr2[i] = arr[i];
    }


    printf("\n");
    printf("copied array.... into a new one");
    printf("\n");
    for(i = 0;i < 4; i++)
    {   
        // arr2[j] = arr[i];
         printf("%d", arr2[i]);
    }

}