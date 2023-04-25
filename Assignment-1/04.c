// Fibonacci numbers are the numbers in the following integer sequence: 0, 1, 1, 2, 3,
// 5, 8, 13, 21 ... By definition, the first two Fibonacci numbers are 0 and 1, and each subsequent
// number is the sum of the previous two numbers. Write a program to compute nth number in
// this series for given input n.
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


