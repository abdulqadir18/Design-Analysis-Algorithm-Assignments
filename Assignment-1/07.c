// User provides two unsorted 1-D arrays of sizes m and n, write a C program that
// merges the two into another 1-D array of size m + n such that this new array becomes sorted.
// The sizes m and n and values in the arrays are also provided by user.
#include <stdio.h>

int main() {
    int m, n, i, j, k;
    
    printf("Enter the size of first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the elements of first array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the size of second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the elements of second array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int arr3[m + n];
    i = 0; // pointer for arr1
    j = 0; // pointer for arr2
    k = 0; // pointer for arr3
    
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    while (i < m) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    
    while (j < n) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
    printf("Merged array in sorted order: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}
