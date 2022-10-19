/*
    CH-230-A
    a6_p6.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    unsigned char in;
    scanf(" %c", &in);
    printf("The decimal representation is: %d\n", in);

    // Loop through and get the msb
    // After we get the msb, print
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--)
    {
        int msb = 1 << i;
        int bit = in & msb;
        printf("%c", bit ? '1' : '0');
    }
    printf("\n");
    return 0;
}