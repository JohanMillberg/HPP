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

    for (int i = 0; i < 3; i++) {
        int indMin = i;
        for (int j = i  + 1; j < 3; j++) {
            if (abs_vals[j] < abs_vals[indMin]) {
                indMin = j;
            }
        }
        int temp = abs_vals[i];
        abs_vals[i] = abs_vals[indMin];
        abs_vals[indMin] = temp;
    }


    printf("Second largest absolute value: %f \n", (float)abs_vals[1]);
}