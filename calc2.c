#include <stdio.h>

void main(){

    int i, j,sum,div,sub,mul;
    char operator;
    printf("enter an operator: ");
    scanf("%c", &operator);

    printf("enter two values: ");
    scanf("%d %d", &i, &j);

    switch(operator){
        case '+':
            sum = i + j;
            printf("%d", sum);
            break;

        case '-':
            sub = i - j;
            printf("%d", sub);
                break;

        case '*':
            mul = i * j;
            printf("%d", mul);
            break;

        case '/':
            div = i / j;
            printf("%d", div);
            break;

        default:
            printf("not an operator");
    }

}