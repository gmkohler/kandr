#include <stdio.h>

/* printing characters as ints to see their ASCII address representation. */
int main(int argc, char const *argv[])
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
        {
            printf("%d\n", c);
        }
    }
    return 0;
}
