#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
    long num_chars;
    num_chars = 0;
    while (getchar() != EOF)
    {
        ++num_chars;
    }
    printf("%ld\n", num_chars);
}
