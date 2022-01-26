#include <stdio.h>
#include <stdlib.h>
const int n = 5;

int main() {
    int i, j;
    int **arr = (int **)malloc(n*sizeof(int*));
    for (i = 0; i < n; i++){
        arr[i] = (int *) malloc(n*sizeof(int));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                arr[i][j] = 0;
            }
            else if (i < j) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = (-1);
            }
            if (j == n-1) {
                printf("%d \n", arr[i][j]);
            }
            else {
                printf("%d ", arr[i][j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
}