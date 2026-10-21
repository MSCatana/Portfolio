#include <stdio.h>

/* copy input to output; 1st version */

int main()
{
    int c;

    /* getchar reads the next input character from a text stream and returns its value */
    c = getchar();
    while(c != EOF)
    {
        /* prints a character each time it is called */
        putchar(c);
        c = getchar();
    }

    return 0;
}
