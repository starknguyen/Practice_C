/* Write a program to count the number of occurences of each digit, of white space characters (blank, tab, newline) */
#include <stdio.h>

void main()
{
    // Declare variables
    int c;
    int i;
    int numDigit[10] = {0};
    int numBlank, numTab, numNewLine;
    
    // Initialize variables
    numBlank = numTab = numNewLine = 0;
    i = 0;

    while ((c = getchar()) != EOF)
    {
        // Check if character is a digit        
        if (c >= '0' && c <= '9')
        {
            // the occurence of digit c-'0' is incremented
            numDigit[c - '0']++;
        }
        else if (c == ' ')  // blank
            numBlank++;
        else if (c == '\t') // tab
            numTab++;
        else if (c == '\n') // newline
            numNewLine++;        
    }

    // Print the results
    printf("Number of occurences of each digit from 0 to 9 is shown in the following array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ",numDigit[i]);
    printf("\nNumber of occurences of blank space is: %d\n", numBlank);
    printf("Number of occurences of tab is: %d\n", numTab);
    printf("Number of occurences of newline is: %d\n", numNewLine);
}
