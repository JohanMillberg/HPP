#include <stdio.h>



int main() {
    double a;
    double b;
    double result;
    char operand;

    printf("Input: ");
    scanf("%lf %c %lf", &a, &operand, &b);

    switch (operand) {
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
            printf("Invalid input. \n");
            break;
    }

    printf("Output: %lf \n", result);
}