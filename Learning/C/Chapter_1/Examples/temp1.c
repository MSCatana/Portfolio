#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20,...,300; floating-point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of the temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);    /* unlike the first example, here we can perform the division ensuring no trunkacation of the value since we declared the numbers explicitly as floating-point as well as the variable celsius*/
        printf("%3.0f %6.1f\n", fahr, celsius); /* %3.0f is to be printed as a floating-point number at least three characters wide with no decimal point and no fraction digits. %6.1f describes another number that is printed at least six character wide, with 1 digit after the decimal point*/
        fahr = fahr + step;
    }

    return 0;
}
