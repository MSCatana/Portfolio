#include <stdio.h>

int main()
{
    int fahr;

    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%6.1f %3d\n", (5.0/9.0)*(fahr-32), fahr);
    }

    return 0;
}
