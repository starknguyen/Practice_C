/* Write a program to count blanks, tabs and newlines */
#include <stdio.h>

void main()
{
    int numBlanks = 0, numTabs = 0, numNewlines = 0;
    int c;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ') numBlanks++;
        if (c == '\t') numTabs++;
        if (c == '\n') numNewlines++;
    }

    printf("Number of blanks: %d\n", numBlanks);
    printf("Number of tabs: %d\n", numTabs);
    printf("Number of newlines: %d\n", numNewlines);
}
