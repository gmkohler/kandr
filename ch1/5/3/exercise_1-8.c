/**
 * Exercise 1-8.
 *  Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main()
{
    int c;
    int blank_count = 0;
    int tab_count = 0;
    int newline_count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blank_count;
        }
        else if (c == '\t')
        {
            ++tab_count;
        }
        else if (c == '\n')
        {
            ++newline_count;
        }
    }

    printf("Blanks: %d\n", blank_count);
    printf("Tabs: %d\n", tab_count);
    printf("Newlines: %d\n", newline_count);
}
