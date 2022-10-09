/*
    CH-230-A
    a2_p8.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    // Grab the number from user input.
    int x;
    scanf("%d", &x);

    // Check if x is divisible by 2 and 7 by using the modulo operator, if it is not,
    // we print that it is not divisible.
    if (x % 2 == 0 && x % 7 == 0)
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}