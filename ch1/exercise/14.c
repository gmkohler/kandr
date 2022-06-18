#include <stdio.h>
#include <ctype.h>

/**
 * Exercise 1-14.
 *  Write a program to print a histogram of the frequencies of different
 *  characters in its input
 */

/* last ascii character we will care about; took from answer book */
#define MAX_CHAR 128
/* Normalizing our histogram to 15 blocks max */
#define MAX_FREQUENCY 15

int main(int argc, char const *argv[])
{
    int character_counts[MAX_CHAR];
    int c;         /* current char */
    int i;         /* iterating through chars 1-127 */
    int max_value; /* Value against which we will normalize our frequencies */
    int len;       /* temporary variable used to save normalized length of a bar */

    for (int i = 0; i < MAX_CHAR; ++i)
    {
        character_counts[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c <= MAX_CHAR)
        {
            ++character_counts[c];
        }
    }
    max_value = 0;
    for (i = 1; i < MAX_CHAR; ++i)
    {
        if (character_counts[i] > max_value)
        {
            max_value = character_counts[i];
        }
    }

    for (i = 1; i < MAX_CHAR; ++i)
    {
        if (isprint(i))
            printf("%5d - %c - %5d : ", i, i, character_counts[i]);
        else
            printf("%5d -   - %5d : ", i, character_counts[i]);
        if (character_counts[i] > 0)
        {
            len = character_counts[i] * MAX_FREQUENCY / max_value;
            if (len <= 0)
                len = 1;
        }
        else
            len = 0;

        while (len > 0)
        {
            putchar('#');
            --len;
        }
        putchar('\n');
    }

    return 0;
}
