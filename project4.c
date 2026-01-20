#include <stdio.h>

// deleting an element in an array
int main()
{
    int a[5]= {2,7,3,4,8},i,y;

    printf("the array elemets\n");
    for(i = 0; i < 5; i++){

        printf("%d ", a[i]);
        
    }

    printf("\n deleting the elementing in index 1\n");
    for(i = 0; i < 5; i++)
    {
        y = a[i];
        if(y == a[1]){
            continue;
        }
        printf("%d ", y);
    }
}