/*
    CH-230-A
    a2_p9.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    // Get the character from user input.
    char character;
    scanf("%c", &character);
    getchar();

    // Get the ASCII code of the character.
    int code = (int)character;

    // Compare the ASCII code to a range from 48-57 for digits, from 65-90 and 97-122 for letters. Otherwise, we have an undefined symbol type.
    if (code >= 48 && code <= 57)
    {
        printf("%c is a digit\n", character);
    }
    else if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122))
    {
        printf("%c is a letter\n", character);
    }
    else
    {
        printf("%c is some other symbol\n", character);
    }
    return 0;
}