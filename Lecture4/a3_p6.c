/*
    CH-230-A
    a3_p6.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g)
{
    // Convert grams to kilograms, add them up,
    // and then multiply all of that by 2.2.
    float grams_to_kilograms = (float)g / 1000;
    return (kg + grams_to_kilograms) * 2.2;
}

int main()
{
    // Declare the variables
    int kilograms;
    int grams;

    // Read kilograms and grams from user input
    scanf("%d", &kilograms);
    scanf("%d", &grams);

    printf("Result of conversion: %f\n", to_pounds(kilograms, grams));
    return 0;
}