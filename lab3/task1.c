#include <stdio.h>
const int n = 5;

void printArray(int arr[n][n], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == n-1) {
                printf("%d \n", arr[i][j]);
            }
            else {
                printf("%d ", arr[i][j]);
            }
        }
    }
}

int main() {
    int array2D[n][n];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                array2D[i][j] = 0;
            }
            else if (i < j) {
                array2D[i][j] = 1;
            }
            else {
                array2D[i][j] = (-1);
            }
        }
    }
    printArray(array2D, n);
}