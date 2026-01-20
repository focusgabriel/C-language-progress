#include <stdio.h>

void main()
{   
    
    int i[5];
    int j;
    int k;

    for(j = 0; j < 5; j++){
        printf("enter a number: ");

        scanf("%d", &i[j]);
        // k = j[i] + i[5];
    }

   for(k = 0; k < j; k++){
     printf("%d", i[k]);
   }

    // printf("%d", k);
    // printf("%d", i[0]);
}