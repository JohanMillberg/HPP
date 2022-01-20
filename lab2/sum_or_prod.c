#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Input the first number:\n");
    scanf("%d", &a);
    printf("Input the second number:\n");
    scanf("%d", &b);

    if (a % 2 == 0 && b % 2 == 0) {
        int sum = a + b;
        printf("Sum of the numbers is %d \n", sum);
    }

    else {
        int prod = a*b;
        printf("Product of the numbers is %d \n", prod);
    }
}