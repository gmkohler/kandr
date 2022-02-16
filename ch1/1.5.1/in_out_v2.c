/**
 * read a character
 * while(character is not eof-character)
 *  output the character just read
 *  read a character
 */

#include <stdio.h>

/* copy input to output; 2nd version */
int main()
{
    int c;

    /**
     * NB: the precedence of != is higher than =,
     *  hence parentheses around (c = getchar())
     */
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}
