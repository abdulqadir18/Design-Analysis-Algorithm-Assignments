// Write a C program to take Input a 4-digit integer through keyboard, print the sum
// of product of even position digits and odd position digits. For example, if the integer is 2345,
// then the sum of the product will be 2*4+3*5=23.
#include <stdio.h>

int main() {
    int num, even_sum = 0, odd_sum = 0;

    printf("Enter a 4-digit integer: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input: please enter a 4-digit integer.\n");
        return 0;
    }

    int i;
    for (i = 0; i < 4; i++) {
        int digit = (num / (int)pow(10, i)) % 10;
        if (i % 2 == 0) {
            even_sum += digit;
        } else {
            odd_sum += digit;
        }
    }

    int product_sum = even_sum * odd_sum;
    printf("The sum of product of even position digits and odd position digits is %d.\n", product_sum);

    return 0;
}
