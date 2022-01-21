#include <stdio.h>

int main() {
    int dividend, divisor, q, r;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    q = dividend / divisor;
    r = dividend % divisor;

    printf("Quotient: %d \n", q);
    printf("Remainder: %d \n", r);
}