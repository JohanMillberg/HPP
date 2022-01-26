#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct product {
    char name[50];
    double price;
}
product_t;

int main(int argc, char const * argv[]) {
    product_t *arr_of_prod;
    int i = 0;
    int n = 10;
    char product[15];
    double price;
    char *filename;

    filename = (char *) malloc(15*sizeof(char));
    arr_of_prod = (product_t *) malloc(n*sizeof(product_t));

    strcpy(filename, argv[1]);
    filename = realloc(filename, strlen(filename)*sizeof(char));
    FILE *file = fopen(filename, "r");

    while (fscanf(file, "%s %lf", product, &price) != EOF) {
        //printf("%s %.1lf\n", product, price);
        strcpy(arr_of_prod[i].name, product);
        arr_of_prod[i].price = price;
        printf("%s %.1lf\n", arr_of_prod[i].name, arr_of_prod[i].price);
        i++;

        if (i == n) {
            n += 10;
            arr_of_prod = realloc(arr_of_prod, n*sizeof(product_t));
        }
    }
    arr_of_prod = realloc(arr_of_prod, i*sizeof(product));
    fclose(file);
    free(filename);
    free(arr_of_prod);
    filename = NULL;
    arr_of_prod = NULL;

}