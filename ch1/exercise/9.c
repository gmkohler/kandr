/**
 * Exercise 1-9.
 *  Write a program to copy its input to its output,
 *  replacing each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main()
{
    int prev = EOF;
    int curr;

    while ((curr = getchar()) != EOF)
    {
        if (curr != ' ')
        {
            if (prev == ' ')
            {
                putchar(prev);
            }
            putchar(curr);
        }
        prev = curr;
    }
}
