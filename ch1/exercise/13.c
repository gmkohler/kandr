/**
 * Exercise 1-13.
 *  Write a program to print a histogram of the lengths of words in its input.
 *  It is easy to draw the histogram with the bars horizontal; a vertical
 *  orientation is more challenging.
 */

/**
 *  High level we should be following §1.5.4 word counting approach but we'll need to also track
 *   the length of the word.
 *
 *  The program will break if a word greater than 10 characters exists.
 */
#include <stdio.h>

#define OUT 0
#define IN 1
#define MAX_WORD_LENGTH 10

/**
 * Prints horizontal bars by default. pass '1' as an argument for vertical bars
 */
int main(int argc, char const *argv[])
{
    int c;
    int i;
    int words_of_length[MAX_WORD_LENGTH];
    for (i = 0; i < MAX_WORD_LENGTH; ++i)
    {
        words_of_length[i] = 0;
    }

    int current_word_length = 0;
    int state = OUT;

    /* counting */
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                // We're at the end of the word; record its length and reset state.
                int length_to_record;
                if (current_word_length < MAX_WORD_LENGTH)
                {
                    length_to_record = current_word_length;
                }
                else
                {
                    length_to_record = MAX_WORD_LENGTH;
                }

                ++words_of_length[length_to_record - 1];

                current_word_length = 0;
                state = OUT;
            }
        }
        else
        {
            ++current_word_length;
            if (state == OUT)
            {
                state = IN;
            }
        }
    }

    /* printing */
    printf("\n=======================\n====== RESULTS ========\n=======================\n");
    if (argc > 1 && *argv[1] == '1')
    {
        /**
         * Horizontal printing routine.
         *
         * This printing routine uses `j`, `k`, `l` to avoid repurposing index
         *  variables.
         *
         *  - `j` runs through words_of_length when deciding the height of the
         *     chart (`max_frequency`)
         *
         *  - `k` runs through `max_frequency` in descending order to decide
         *     to decide whether to print the hash
         *
         *  - `l` is used whenever we iterate from 0 to MAX_WORD_LENGTH
         */
        int max_frequency = 0;
        int j, k, l;
        /* Figure out how tall to make the chart */
        for (j = 0; j < MAX_WORD_LENGTH; ++j)
        {
            if (words_of_length[j] > max_frequency)
            {
                max_frequency = words_of_length[j];
            }
        }

        for (k = max_frequency; k > 0; --k)
        {
            printf(" %2d|", k);
            for (l = 0; l < MAX_WORD_LENGTH; ++l)
            {
                if (words_of_length[l] >= k)
                {
                    printf(" # |");
                }
                else
                {
                    printf("   |");
                }
            }
            putchar('\n');
        }

        printf(" k |");
        for (l = 0; l < MAX_WORD_LENGTH; ++l)
        {
            printf("%2d |", l + 1);
        }
        putchar('\n');
    }
    else
    {
        int m, n;
        for (m = 0; m < MAX_WORD_LENGTH; ++m)
        {
            printf("| %2d |", m + 1);
            for (n = 0; n < words_of_length[m]; n++)
            {
                putchar('#');
            }
            putchar('\n');
        }
    }

    return 0;
}
