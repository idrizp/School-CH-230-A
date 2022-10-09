/*
    CH-230-A
    a3_p4.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c)
{
    int idx;
    /*
        The reason it always prints 0 is because we have missing braces.
        When we don't have braces, what happens is that the
        line "return idx" is called on *every* iteration of the loop,
        which means it will always terminate on the first iteration,
        namely, when idx is 0.
    */

    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    {
        /* do nothing */
    }
    return idx;
}

int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}