#include <stdio.h>
#include <math.h>

int isInteger(double val) {
    int truncated = (int) val;
    if (truncated == val) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    double num, square;
    int result;
    printf("Input a number to check if it is a perfect square: \n");
    scanf("%lf", &num);
    square = sqrt(num);
    result = isInteger(square);

    printf("The square root of %.0lf is %.2lf. \n", num, square);
    if (result == 1) {
        printf("%.0lf is a perfect square! \n", num);
    }
    else {
        printf("%.0lf is not a perfect square. \n", num);
    }
}