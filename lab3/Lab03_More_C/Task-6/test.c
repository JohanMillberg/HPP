#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a = 10;
    int *p;
    int **q;
    p = &a;
    printf("Address of 'a': %p, value of 'a': %d\n", p, *p);
    q = &p;
    printf("Address of 'p': %p\n", q);
    printf("Value of 'q': %p \n", *q);
}