#include <stdio.h>
#include <stdlib.h>

int isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0 && i != number) return 0;
    }
    return 1;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int *arr;
    int n;
    int *noPrime;
    n = 10;
    arr = (int *) malloc(n*sizeof(int));
    int i = 0;

    printf("Input: \n");
while (scanf("%d", &arr[i]) == 1) {
    i++;
    if (i == n) {
        n += 10;
        arr = (int *) realloc(arr, n*sizeof(int));
    }

}
arr = (int *) realloc(arr, i*sizeof(int));

noPrime = (int *) malloc(i*sizeof(int));
int j = 0;
int k = 0;
while (j < i) {
    if (isPrime(arr[j]) == 0){
        noPrime[k] = arr[j];
        k++;
    }
    j++;
}

noPrime = (int*) realloc(noPrime, k*sizeof(int));

printArray(noPrime,k);
free(arr);
free(noPrime);
}