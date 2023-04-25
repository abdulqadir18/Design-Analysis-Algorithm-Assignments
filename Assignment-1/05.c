// Print a triangle of ’*’s of height ’r’ rows. Now modify your program to print it
// upside down of given size ’r’, where r represents the no. of rows in the triangle
#include <stdio.h>

int main() {
    int r, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    // Print the triangle right-side up
    printf("Right-side up:\n");
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Print the triangle upside down
    printf("Upside down:\n");
    for (i = r; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
