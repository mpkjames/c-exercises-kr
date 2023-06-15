#include <stdio.h>

/* Exercise 1-6. Verify that the expression getchar() !0 EOF is 0 or 1 */

/* Note: on macOS, to cause an EOF press control + D */

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    printf("%d\n", c);
}