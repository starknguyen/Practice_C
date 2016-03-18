#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        printf("%d ", c != EOF);
        putchar(c);
    }
    // EOF here
    printf("Value of expression getchar() != EOF is: %d\n", c != EOF);

    return 0;
}
