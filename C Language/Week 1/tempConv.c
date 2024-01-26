/*
 * Conversion of Fahrenheit to Celsius
 * Miguel Catana
 * January 26, 2024 
 */

#include <stdio.h>

int main(void) {
    int fahrenheit, celsius;

    printf("Enter fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    /* 
     * On the following line there are two silent convesions: the first is a 
     * conversion from int to double by the division; the second is 
     * the conversion from double to int when we asign the value to 
     * the variable "celsius"
     */
    celsius = (fahrenheit - 32) / 1.8;
    printf("\n%d fahrenheit is %d celsius", fahrenheit, celsius);
    return 0;
}