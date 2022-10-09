/*
    CH-230-A
    a3_p2.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    // Declare variables
    char ch;
    int n;

    // We grab the character and the number.
    scanf("%c", &ch);
    getchar();
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        /*
          We get the new character by casting the unicode
          of the subtracted original character with the
          increment i to a character.
        */
        char new_character = (char)((int)ch - i);
        printf("%c\n", new_character);
    }

    return 0;
}