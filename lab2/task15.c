#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct product {
    char name[50];
    double price;
}
product_t;

int main(int argc, char const * argv[]) {
    product_t arr_of_prod[100];
    int i = 0;
    char product[15];
    double price;
    char *filename;
    filename = (char *) malloc(15*sizeof(char));
    strcpy(filename, argv[1]);
    filename = realloc(filename, strlen(filename)*sizeof(char));
    FILE *file = fopen(filename, "r");

    while (fscanf(file, "%s %lf", product, &price) != EOF) {
        //printf("%s %.1lf\n", product, price);
        strcpy(arr_of_prod[i].name, product);
        arr_of_prod[i].price = price;
        printf("%s %.1lf\n", arr_of_prod[i].name, arr_of_prod[i].price);
        i++;
    }
    fclose(file);
    printf("%s\n", argv[1]);
    free(filename);
    filename = NULL;

}