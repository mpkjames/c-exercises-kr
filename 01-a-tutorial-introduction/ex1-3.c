#include <stdio.h>

/* Exercise 1-3. Modify the temperature conversion program to print a heading
    above the table */

int main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    fahr = lower;

    printf("Fahrenheit | Celcius\n");
    printf("-----------|--------\n");

    while (fahr <= upper)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f | %7.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}