/*
    CH-230-A
    a3_p3.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm)
{
    // We multiply centimeters by 10^-6.
    return cm * 10E-6;
}

int main()
{
    // We get the length from user input.
    int length;
    scanf("%d", &length);

    // We convert the length into kilometers,
    // and print it.

    float kilometers = convert(length);
    printf("Result of conversion: %f\n", kilometers);
    return 0;
}