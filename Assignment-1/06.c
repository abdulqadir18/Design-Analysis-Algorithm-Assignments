// Implement a C program that finds all the numbers between 01 and 1000 such that
// the number itself minus the number reversed is equal to the sum of its digits. For example:
// 54 is such a number because 54-45 (which is 9) is same as the sum of its digits (5+4 = 9).
#include <stdio.h>

int main() {
    int i, num, digit, reversed, sum;

    printf("Numbers between 01 and 1000 such that the number itself minus the number reversed is equal to the sum of its digits:\n");

    for (i = 1; i <= 1000; i++) {
        num = i;
        reversed = 0;
        sum = 0;

        // Reverse the number
        while (num > 0) {
            digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        // Calculate the sum of the digits
        num = i;
        while (num > 0) {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }

        // Check if the number satisfies the condition
        if (i - reversed == sum) {
            printf("%d\n", i);
        }
    }

    return 0;
}
