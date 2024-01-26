/*
 * Conversion of miles and yards to kilometers
 * Miguel Catana
 * January 26, 2024 
 */

#include <stdio.h>

int main(void) {
    int miles, yards;
    double kilometers;

    printf("Enter the value of miles in integer: ");
    scanf("%d", &miles);
    printf("Enter the value of yards in integer: ");
    scanf("%d", &yards);
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\n%d miles and %d yards is %lf kilometers.\n\n", miles, yards, kilometers);
    return 0;
}