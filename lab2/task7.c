#include <stdio.h>

int main() {
    int entered, reversed, remaining, i, amount_digits = 0, number;
    printf("Input: ");
    scanf("%d", &entered);
    remaining = entered;
    reversed = 0;

    number = entered;
    while (number) {
        number /= 10;
        amount_digits++;
    }

    i = 1;

    for (int j = 0; j < amount_digits-1; j++) {
        i *= 10;
    }

    while (remaining) {
        reversed += i*(remaining%10);
        i /= 10;
        remaining /= 10;
    }

    if (reversed == entered) {
        printf("%d is a palindrome.\n", entered);
    }

    else {
        printf("%d is not a palindrome.\n", entered);
    }
}