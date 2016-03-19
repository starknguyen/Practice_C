/* Write a program that prints its input one word per line */
#include <stdio.h>

void main()
{
    int c;
    int isNotBlank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            // The use of isNotBlank variable is the same as in Ex1-10
            if (isNotBlank == 0)
            {
                putchar('\n');
                putchar(c);
                isNotBlank = 1;
            }
        }
        else
        {
            putchar(c);
            isNotBlank = 0;
        }
    }
}
