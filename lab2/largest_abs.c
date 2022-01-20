#include <stdio.h>
#include <math.h>

int main() {
    double nums[3];
    double abs_vals[3];

    printf("Input the first number:\n");
    scanf("%lf", &nums[0]);

    printf("Input the second number:\n");
    scanf("%lf", &nums[1]);

    printf("Input the third number:\n");
    scanf("%lf", &nums[2]);

    int i = 0;
    while (i < 3) {
        abs_vals[i] = fabs(nums[i]);
        i++;
    }

    int j;
    while(j < 3) {
        if (abs_vals[0] < abs_vals[j]) {
            abs_vals[0] = abs_vals[j];
        }
        j++;
    }
    printf("Largest absolute value: %f \n", (float)abs_vals[0]);
}