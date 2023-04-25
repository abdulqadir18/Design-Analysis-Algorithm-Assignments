// Write a C program to take Input 5 integers through keyboard, and display the
// second largest number.

#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
#include<math.h>

int main()
{
  int n1, n2, n3, n4, n5;
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
  int numbers[5] = {n1,n2,n3,n4,n5};
    int i, largest, secondLargest;

    largest = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    secondLargest = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > secondLargest && numbers[i] < largest) {
            secondLargest = numbers[i];
        }
    }

    printf("The second largest number is %d\n", secondLargest);

  return 0;
}