#include <stdio.h>

/* print Fahrenheit-Celsius table for farh = 0, 20,...,300 */

int main ()
{
    int fahr, celsius;
    int lower, upper, step;

    /* Assignment Statements */
    /* Setting the variables to their initial values */
    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;   /* we assign the value of lower to fahr so this variable starts with the lower limit of the temperature table */

    /* While Loop */
    /* The condition in parentheses is tested. If it is true (fahr is less than or equal to upper), the body of the loop (the three statements enclosed in braces) is executed. Then the condition is retested, and if true, the body is executed again. When the test becomes false (fahr exceeds upper) the loop ends, and execution continues at the statement that follows the loop */
    while(fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;      /* since we are using int values, the divisions would truncate, ignoring the fractional part. Hence, if we had written 5/9 the result would alwaus be 0 */
        printf("%d\t%d\n", fahr, celsius);  /* each %d referes to a decimal integer, which, by the end of the first argument of the printf function, is followed by the variables we want to print */
        fahr = fahr + step;                 /* finally, we increase the value of fahr the size of the step */
    }
    return 0;
}
