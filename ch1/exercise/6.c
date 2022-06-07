/**
 * Exercise 1-6.
 *  Verify that the expression:
 *       getchar() != EOF
 *  is 0 or 1
 */
#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        printf("Value of `c != EOF`: %d\n", c != EOF);
    }

    printf("Exiting program.\n");
    printf("Value of `c != EOF`: %d\n", c != EOF);
    printf("Value of `c`: %d\n", c);
}
