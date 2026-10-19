#include <stdio.h>

/* Print Fahrenheit-Celsius table */

int main()
{
    int fahr;

    /**
     * The first part of the loop is the initialization
     * The second part tests the condition. If it's true, the body of the loop is executed
     * The third part increments the variable and the condtion is tested again
     * When it's false, the program exits the loop
     */
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;
}
