/*
    CH-230-A
    a2_p3.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int weeks;
    int days;
    int hours;

    // Get the weeks, days, and hours from user input and initialize.
    scanf("%d", &weeks);
    scanf("%d", &days);
    scanf("%d", &hours);

    // Compute the number of hours.
    int computed_hours = weeks * 7 * 24 + days * 24 + hours;
    printf("%d\n", computed_hours);
    return 0;
}