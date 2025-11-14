#include<stdio.h>
#include "./utils/caculator.h"
int main() {
    printf("Hello, World!\n");

    int r1 = add(5, 3);
    int r2 = subtract(5, 3);
    int r3 = multiply(5, 3);
    double r4 = divide(5, 0);

    printf("Add: %d\n", r1);
    printf("Subtract: %d\n", r2);
    printf("Multiply: %d\n", r3);
    printf("Divide: %.2f\n", r4);
    return 0;
}