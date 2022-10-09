/*
    CH-230-A
    a4_p12.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceAll(char *str, char c, char e)
{
    // Iterate through the loop w/pointer arithmetic and replace the
    // character if found.
    for (char *curr = str; *curr != '\0'; curr++)
    {
        if (*curr == c)
        {
            *curr = e;
        }
    }
}

int main()
{
    char input[80];
    // Infinite loop keeps the program going.
    while (1)
    {
        // Get the user input and assign to proper variables
        fgets(input, 80, stdin);
        input[strcspn(input, "\n")] = 0;

        // If the input is stop, we close the program.
        if (strcmp(input, "stop") == 0)
        {
            break;
        }

        char character;
        scanf("%c", &character);
        getchar();

        char to_replace;
        scanf("%c", &to_replace);
        getchar();

        // Call replace all and print the result.
        replaceAll(input, character, to_replace);
        printf("The string is now %s\n", input);
    }
    return 0;
}