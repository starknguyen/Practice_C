/* Write a program to copy its input to its output, replcing each string of one or more blanks
by a single blank */
#include <stdio.h>

void main()
{
    int c;
    int blanks = 0;
   
    while ((c = getchar()) != EOF)
    {
        // If there are blanks then set variable blanks=1 and keep printing the next character
        // If there are another blanks next, it sill keeps blanks=1 and runs until it gets 
        // a different character
        if (c == ' ')
        {
            if (blanks == 0)
            {
                blanks = 1;
                putchar(c);
            }
        }
        if (c != ' ')
        {
            blanks = 0; // Reset variable blanks
            putchar(c);
        }
    }
}
