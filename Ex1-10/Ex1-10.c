/* Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b and each backslash by \\ */
#include <stdio.h>

void main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            printf("\\t");
        }
        if (c == '\b')
        {
            printf("\\b");
        }
        if (c == '\\')
        {
            printf("\\\\");
        }
        putchar(c);
    }
}

