/*
 * Read in two floats and print sum
 * Miguel Catana
 * January 25, 2024 
 */

#include <stdio.h>

int main(void) {
    float a, b, sum;
    printf("Input two floats: ");
    scanf("%f%f", &a, &b);
    printf("a = %f, b = %f\n", a, b);
    sum = a + b;
    printf("sum = %f\n\n", sum);
    return 0;
}