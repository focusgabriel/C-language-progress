#include <stdio.h>

void main()
{
    int farr[5];
    int sarr[5];
    int sumarr[5];
    int i;

    printf("enter 5 numbers for an array input: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &farr[i]);
    }
    printf("enter 5 numbers for an array input: ");
    for(i = 0; i < 5; i++){
       scanf("%d", &sarr[i]);
    }
    for(i = 0; i < 5; i++){
        sumarr[i] = farr[i] + sarr[i];
         printf("\nthe sum of two array are %d for the  index %d", sumarr[i], i);
    }
   
}