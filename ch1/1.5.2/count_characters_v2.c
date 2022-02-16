#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
    double num_chars;
    num_chars = 0;
    for (num_chars = 0; getchar() != EOF; ++num_chars)
    {
        /**
         * 'isolated semicolon' AKA 'null statement';
         *   C requires for-loops to have a body.
         */
        ;
    }
    printf("%.0f\n", num_chars);
}
