// Write a C program that take 2 integer sets A[] and b[] as input and prints results
// of following set operations:
// (a) A union B (Write function setunion())
// (b) A intersection B (Write function setintersection())
// (c) A-B and B-A (Write function setdifference())
#include <stdio.h>

void setunion(int a[], int b[], int n, int m);
void setintersection(int a[], int b[], int n, int m);
void setdifference(int a[], int b[], int n, int m);

int main() {
    int n, m, i;
    printf("Enter the size of set A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of set A: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("Enter the size of set B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter the elements of set B: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    
    printf("A union B = ");
    setunion(A, B, n, m);
    printf("\n");
    
    printf("A intersection B = ");
    setintersection(A, B, n, m);
    printf("\n");
    
    printf("A - B = ");
    setdifference(A, B, n, m);
    printf("\n");
    
    printf("B - A = ");
    setdifference(B, A, m, n);
    printf("\n");
    
    return 0;
}

void setunion(int a[], int b[], int n, int m) {
    int c[n + m], i, j, k = 0;
    for (i = 0; i < n; i++) {
        c[k] = a[i];
        k++;
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            if (b[j] == a[i]) {
                break;
            }
        }
        if (i == n) {
            c[k] = b[j];
            k++;
        }
    }
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
}

void setintersection(int a[], int b[], int n, int m) {
    int c[n + m], i, j, k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                c[k] = a[i];
                k++;
                break;
            }
        }
    }
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
}

void setdifference(int a[], int b[], int n, int m) {
    int c[n], i, j, k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                break;
            }
        }
        if (j == m) {
            c[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
}
