#include <stdio.h>

void print_int_1(int x) {
printf("Here is the number: %d\n", x);
}
void print_int_2(int x) {
printf("Wow, %d is really an impressive number!\n", x);
}

int main(){
    void (*funcPointer)(int);

    funcPointer = &print_int_1;
    funcPointer(7);
    funcPointer = &print_int_2;
    funcPointer(8);

}