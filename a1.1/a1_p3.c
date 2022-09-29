/*
    CH-230-A
    a1_p3.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    float result; /*The result of the division */
    int a = 5;
    // We change the type from an integer to a float as to not lose precision where 13.5 is rounded down to 13
    float b = 13.5;

    result = a / b;

    // We change the format placeholder from %d(for integers) to %f to present a float.
    printf("The result is %f\n", result);

    return 0;
}