/*
    CH-230-A
    a1_p2.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;

    /*
     When we don't provide an argument for the integer placeholder, a random, undefined value
     will be picked from memory.
    */
    printf("The result is %d\n", result);
    return 0;
}