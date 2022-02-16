#include <stdio.h>

/**
 *  Section 1.2, page 13
 *  Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf(" ºC\t   ºF \n");
    while (celsius <= upper)
    {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius += step;
    }
}
