#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, *ptr;
    int n = 10;
    arr = (int *) malloc(n*sizeof(int));

    int i = 0;

    printf("Input: \n");

    while(scanf("%d", &arr[i]) == 1) {
        i++;

        if (i == n) {
            n += 10;
            arr = (int *) realloc(arr, n*sizeof(int));
        }

    }

    arr = (int *) realloc(arr, i*sizeof(int));

    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += arr[j];
    }
    printf("%d \n", sum);
    free(arr);
}