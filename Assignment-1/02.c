// Write a C program to take Input a 4-digit integer through keyboard and check if
// it’s divisible by 2, 3, 4, and 12.
#include <stdio.h>

int main() {
    int num;

    printf("Enter a 4-digit integer: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input: please enter a 4-digit integer.\n");
        return 0;
    }

    if (num % 2 == 0) {
        printf("%d is divisible by 2.\n", num);
    } 
    else {
        printf("%d is not divisible by 2.\n", num);
    }

    if (num % 3 == 0) {
        printf("%d is divisible by 3.\n", num);
    } 
    else {
        printf("%d is not divisible by 3.\n", num);
    }

    if (num % 4 == 0) {
        printf("%d is divisible by 4.\n", num);
    } 
    else {
        printf("%d is not divisible by 4.\n", num);
    }

    if (num % 12 == 0) {
        printf("%d is divisible by 12.\n", num);
    } 
    else {
        printf("%d is not divisible by 12.\n", num);
    }

    return 0;
}
