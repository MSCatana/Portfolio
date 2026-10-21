#include <stdio.h>

/* Verify that the expression getchar() != EOF is 0 or 1 */

int main()
{
    while(getchar() != EOF)
    {
        printf("EOF is 1\n");
    }

    return 0;
}
