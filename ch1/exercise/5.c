#include <stdio.h>

/**
 *  Section 1.2, page 14
 *  Exercise 1-5. Modify the temperature program to print the table in reverse
 *   order, that is, from 300 degrees to zero.
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = upper;
    printf(" ºC\t   ºF \n");
    while (celsius >= lower)
    {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius -= step;
    }
}
