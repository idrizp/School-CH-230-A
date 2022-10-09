/*
    CH-230-A
    a2_p4.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    float a;
    float b;
    float h;

    // Scan the respective variables
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    // Calculate the area for the square, rectangle, triangle and trapezoid respectively
    float square_area = a * a;
    float rectangle_area = a * b;
    float triangle_area = (a * h) / 2;
    float trapezoid_area = ((a + b) / 2) * h;

    // Print them out
    printf("square area=%f\n", square_area);
    printf("rectangle area=%f\n", rectangle_area);
    printf("triangle area=%f\n", triangle_area);
    printf("trapezoid area=%f\n", trapezoid_area);

    return 0;
}