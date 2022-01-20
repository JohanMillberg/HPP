#include <stdio.h>
// for loop
/*
int main(){
    int number = 100;
    for (int i = 0; i <= 25; i++){
        printf("%d \n", number);
        number -= 4;
    }
}
*/

// while loop
/*
int main(){
    int number = 100;
    while (number >= 0) {
        printf("%d \n", number);
        number -= 4;
    }
}
*/

//do while
int main(){
    int number = 100;
    do {
        printf("%d \n", number);
        number -= 4;
    }
    while (number >= 0);
}