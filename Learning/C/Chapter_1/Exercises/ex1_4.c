#include <stdio.h>

/* print Celsius-Fahrenheit table for fahr = 0, 20,...,300; floating-point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of the temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;
    /* defining a heading above the table before printing the values */
    printf("Celsius\tFahrenheit\n");
    while(celsius <= upper)
    {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%6.0f %7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
