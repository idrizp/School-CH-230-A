/*
    CH-230-A
    a6_p2.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

// This checks if the last bit is 0 or 1, if it is 0,
// then the LSB is 0.
// If the LSB is 1, it will return 1 because of the and operator.
#define LSB(x) x & 1

int main()
{
    // Scan the character
    unsigned char c;
    scanf(" %c", &c);

    // Print the LSB
    printf("The decimal representation is: %d\n", c);
    printf("The least significant bit is: %d\n", LSB(c));
    return 0;
}
