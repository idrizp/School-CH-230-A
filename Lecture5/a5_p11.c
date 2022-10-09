/*
    CH-230-A
    a5_p11.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int is_prime(int x, int div)
{
    // Base cases
    if (x == 1)
    {
        return 0;
    }
    if (x == div)
    {
        return 1;
    }
    if (div != 1 && x % div == 0)
    {
        return 0;
    }
    // Go up by one each time
    return is_prime(x, div + 1);
}

int main()
{
    // Get the number
    int x;
    scanf("%d", &x);

    // Check if the number is prime and print
    if (is_prime(x, 1))
    {
        printf("%d is prime\n", x);
    }
    else
    {
        printf("%d is not prime\n", x);
    }
    return 0;
}
