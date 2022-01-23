#include <stdio.h>

int main() {
    char product[15];
    double price;
    FILE *file = fopen("data.txt", "r");

    while (fscanf(file, "%s %lf", product, &price) != EOF) {
        printf("%s %.1lf\n", product, price);
    }
    fclose(file);
}