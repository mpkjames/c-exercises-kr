#include <stdio.h>

/* Write a program to print the corresponding Celcius to Fahrenheit table */

int main()
{
    float fahr, celcius;
    int lower, step, upper;

    lower = 0;
    step = 2;
    upper = 40;

    celcius = lower;

    printf("C    F\n---  -----\n");

    while (celcius <= upper)
    {
        fahr = (celcius * (9.0 / 5.0)) + 32.0;
        printf("%3.0f % 6.1f\n", celcius, fahr);
        celcius += step;
    }
}