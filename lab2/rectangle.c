#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Give the height of the rectangle: \n");
    scanf("%d", &a);
    printf("Give the width of the rectangle: \n");
    scanf("%d", &b);
    for (int j = 0; j <= b; j++) {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i <= a; i++) {
        printf("*");
        for (int j = 0; j <= b-2; j++) {
            printf(".");
        }
        printf("*");
        printf("\n");
    }
    for (int j = 0; j <= b; j++) {
        printf("*");
    }
    printf("\n");
}