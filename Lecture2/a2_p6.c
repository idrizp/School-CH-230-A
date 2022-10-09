/*
    CH-230-A
    a2_p6.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // Define the variables and scan them.
    double x;
    double y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    // Define the pointers, two pointing to X and one pointing to Y.
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;

    // Print them out.
    printf("ptr_one=%p\n", ptr_one);
    printf("ptr_two=%p\n", ptr_two);
    printf("ptr_three=%p\n", ptr_three);

    return 0;
}