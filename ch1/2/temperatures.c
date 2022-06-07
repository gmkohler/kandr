#include <stdio.h>

/**
 *  Section 1.2, page 9
 *  Fahrenheit to Celsius for ºF 0, 20, … , 300
 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr += step;
    }
}
