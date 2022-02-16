#include <stdio.h>

/**
 *  Section 1.2, page 12
 *  Fahrenheit to Celsius for ºF 0, 20, … , 300
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf(" ºF\t   ºC \n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.0f\n", fahr, celsius);
        fahr += step;
    }
}
