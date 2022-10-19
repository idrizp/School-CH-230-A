/*
    CH-230-A
    a6_p5.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <stdio.h>

#define BITS_IN_CHAR = sizeof(unsigned char) * 8

int main()
{
    const int bits_in_char = sizeof(unsigned char) * 8;
    unsigned char in;

    // The character we want to use.
    scanf(" %c", &in);
    printf("The decimal representation is: %d\n", in);

    // The number of bits used(out of the 8 that are total).
    // We want to skip leading zeros.
    int bits_used = bits_in_char;
    for (int i = (bits_in_char - 1); i != 0; i--)
    {
        // Get the most significant bit.
        int msb = 1 << i;
        if (!(in & msb))
        {
            // If it's a zero, then it's a leading zero and
            // therefore it's a bit we can ignore.
            bits_used--;
        }
        else
        {
            break;
        }
    }

    printf("The backwards binary representation is: ");
    // Loop through, get the LSB and print it,
    // ignoring the leading zeros.
    for (int i = 8 - bits_used; i < 8; i++)
    {
        int lsb = in & 1;
        printf("%d", lsb);
        in = in >> 1;
    }

    printf("\n");
    return 0;
}