#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

/* Reminder; Control + D forces EOF in macOS*/

int main()
{
    int c;

    int count_space = 0;
    int count_tab = 0;
    int count_newline = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            count_space++;
        if (c == '\t')
            count_tab++;
        if (c == '\n')
            count_newline++;
    }
    printf("\n%d spaces, %d tabs, %d newlines\n", count_space, count_tab, count_newline);
}