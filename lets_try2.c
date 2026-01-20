#include <stdio.h>

void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10},i;
    int b;
    for(i = 0; i < 10; i++){

        printf("%d", a[i]);

        
    }

    for(i = 0; i < 10; i++)
    {
        printf("\nenter a number: ");
        scanf("%d", &b);

        if(a[i] == b){
            printf("%d", b);
    }

    
}

}
//     printf("\n");
//     printf("a value = ");
//     for(i = 0; i < 10; i++)
//     {
//         printf("%d", a[i]);
//     }

//     printf("\n");
//     printf("b value = ");
//     for(j = 0; j < 10; j++)
//     {
//         printf("%d", b[j]);
//         // printf("%d", a[i]);
//     }   
//     printf("\n");
//         printf("a index = %d\n",a[i]);
//         printf("b index = %d",b[j]);
// }