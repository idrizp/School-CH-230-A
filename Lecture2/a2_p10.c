/*
    CH-230-A
    a2_p10.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int n = 0;

    // Because we initialize n to be zero, we automatically enter this loop. This works twofold because it also prevents negative numbers/zero as input.
    while (n <= 0)
    {
        scanf("%d", &n);
    }

    int increment = 0;
    // Establish loop that goes from 0 to n.
    while (increment < n)
    {
        increment++;
        if (increment == 1)
        {
            // Manual check to print day instead of day(s).
            printf("1 day = 24 hours\n");
        }
        else
        {
            printf("%d days = %d hours\n", increment, increment * 24);
        }
    }
    return 0;
}