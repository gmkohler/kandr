/**
 * Let us write a program to count the number of occurrences of each digit, of
 *  white space characters (blank, tab, newline), and of all other characters.
 *  This is artifical, but it permits us to illustrate several aspects of C in
 *  one program.
 *
 * There are twelve categories of input, so it is convenient to use an array to
 *  hold the number of occurrences of each digit, rather than ten individual
 *  variables.
 */

#include <stdio.h>
#define NUM_DIGITS 10
/* count digits, white space, others */
int main()
{
    int c;
    int i;
    int count_white = 0;
    int count_other = 0;
    int count_digit[NUM_DIGITS];
    for (i = 0; i < NUM_DIGITS; ++i)
    {
        count_digit[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        // NB: '0' == 48
        if (c >= '0' && c <= '9')
        {
            ++count_digit[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++count_white;
        }
        else
        {
            ++count_other;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
    {
        printf(" %d", count_digit[i]);
    }
    printf(", white space = %d, other = %d\n", count_white, count_other);
}
