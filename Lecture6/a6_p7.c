/*
    CH-230-A
    a6_p7.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

// Sets the three bits.
void set3bits(unsigned char *ch, int a, int b, int c)
{
    // We shify 1 to the left by a, b, and c respectively
    // We use the |= operator to encode the bits at those
    // positions.
    *ch |= (1 << a);
    *ch |= (1 << b);
    *ch |= (1 << c);
}

void print_bits(unsigned char c)
{
    // Prints the bits.
    for (int i = 7; i >= 0; i--)
    {
        int msb = 1 << i;
        int bit = c & msb;
        printf("%c", bit ? '1' : '0');
    }
}

int main()
{
    // Scan the proper inputs.
    unsigned char ch;
    scanf(" %c", &ch);

    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // Print the decimal representation
    // and the binary representation
    printf("The decimal representation is: %d\n", ch);
    printf("The binary representation is: ");

    print_bits(ch);
    set3bits(&ch, a, b, c);

    // Prints the bits after changing them.
    printf("\nAfter setting the bits: ");
    print_bits(ch);
    printf("\n");
    return 0;
}
