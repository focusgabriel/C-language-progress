#include <stdio.h>

int main() {
    char myString[] = "Hello, C!";
    int length = 0;
    int i = 0;

    while (myString[i] != '\0') {
        length++;
        i++;
    }

    printf("The length of the string is: %d\n", length);
    return 0;
}