#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const * argv[]) {
    char product[15];
    double price;
    char *filename;
    filename = (char *) malloc(15*sizeof(char));
    strcpy(filename, argv[1]);
    filename = realloc(filename, strlen(filename)*sizeof(char));
    FILE *file = fopen(filename, "r");

    while (fscanf(file, "%s %lf", product, &price) != EOF) {
        printf("%s %.1lf\n", product, price);
    }
    fclose(file);
    printf("%s\n", argv[1]);
    free(filename);
    filename = NULL;
}