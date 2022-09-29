/*
    CH-230-A
    a2_p2.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char character;

    // Scan the character
    scanf("%c", &character);
    getchar();

    // Print the character in ASCII format, in decimal, octal, and hexadecimal format.
    printf("character=%c\n", character);
    printf("decimal=%d\n", character);
    printf("octal=%o\n", character);
    printf("hexadecimal=%x\n", character);
    return 0;
}