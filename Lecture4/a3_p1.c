/*
    CH-230-A
    a3_p1.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float x;
    int n = 1;

    // Grab the float from the standard input.
    scanf("%f", &x);

    /*
        Use a do-while loop. It will always run the first time, but
        it also has a condition that checks if n is less than one, which
        indicates an invalid value.
        You can't print something 0 times, or negative times.
    */
    do
    {
        if (n < 1)
        {
            printf("Input is invalid, reenter value\n");
        }
        scanf("%d", &n);
    } while (n < 1);

    // Print out the provided float n times.
    for (int i = 0; i < n; i++)
    {
        printf("%f\n", x);
    }
    return 0;
}