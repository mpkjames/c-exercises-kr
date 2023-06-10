/* Modify the temperature conversion program to prnt the table in reverse
    order, that is, from 300 degrees to 0.*/

#include <stdio.h>

int main()
{
    float fahr, celcius;
    int lower, step, upper;

    lower = 0;
    step = 20;
    upper = 300;

    printf("F    C\n---  -----\n");

    for (fahr = upper; fahr >= 0; fahr -= step)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);
    }
}