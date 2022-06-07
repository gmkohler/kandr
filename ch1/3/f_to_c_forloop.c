#include <stdio.h>

/**
 *  Section 1.3, page 13
 *  Fahrenheit to Celsius for ºF 0, 20, … , 300
 */
int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%3d\t%6.1f\n", fahr, (fahr - 32.0) * (5.0 / 9.0));
    }
}
