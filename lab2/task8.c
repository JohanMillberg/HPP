#include <stdio.h>

int main() {
    int a = 3;
    double b = 3.141592653589793;
    char c = 'c';

    printf("Address of a: %p, address of b: %p, address of c: %p \n", &a, &b, &c);
    printf("Size of a: %zu bytes, Size of b: %zu bytes, Size of c: %zu bytes \n", sizeof(a),sizeof(b),sizeof(c));

}