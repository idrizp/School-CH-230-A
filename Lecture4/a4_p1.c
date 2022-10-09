/*
    CH-230-A
    a4_p1.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // We declare the variables, and grab them from input
    float lower_bound;
    float upper_bound;
    float step;

    scanf("%f", &lower_bound);
    scanf("%f", &upper_bound);
    scanf("%f", &step);

    // We use a for-loop with a double iterator, using
    // the step as the increment, and we print the
    // iterator value(x), the perimeter of the iterator value,
    // and the area of the iterator value.
    for (float x = lower_bound; x <= upper_bound; x += step)
    {
        // We compute the area and the perimeter using M_PI from math.h
        printf("%f %f %f\n", x, x * x * M_PI, 2 * M_PI * x);
    }
    return 0;
}