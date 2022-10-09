/*
    CH-230-A
    a5_p3.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_lower(char *str)
{
    // Declare variable for lowercase numbers.
    int lower = 0;

    // Pointer increment.
    for (char *c = str; (*c) != '\0'; c++)
    {
        int code = (int)*c;
        // Compare ascii code.
        if (code >= 97 && code <= 122)
        {
            lower++;
        }
    }
    return lower;
}

int main()
{
    // Keep running until we terminate the loop manually.
    while (1)
    {
        char buffer[256];
        fgets(buffer, 256, stdin);

        // If our buffer ends with a nextline, we pressed enter.
        if (buffer[0] == '\n')
        {
            return 0;
        }

        // Remove the nextline and print the number of lowercase characters.
        buffer[strcspn(buffer, "\n")] = 0;
        printf("lower=%d\n", count_lower(buffer));
    }
    return 0;
}