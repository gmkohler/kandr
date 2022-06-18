/**
 * Excercise 1-12.
 *  Write a program that prints its input one word per line.
 */
#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int c;
    int state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                state = OUT;
                putchar('\n');
            }
        }
        else if (state == OUT)
        {
            state = IN;
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
}
