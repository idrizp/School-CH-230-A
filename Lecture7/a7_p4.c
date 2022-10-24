/*
    CH-230-A
    a7_p4.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prints all the characters in uppercase.
void print_upper(char str[200])
{
    for (char *c = str; *c != '\0'; c++)
    {
        printf("%c", toupper(*c));
    }
    printf("\n");
}

// Prints all the characters in lowercase.
void print_lower(char str[200])
{
    for (char *c = str; *c != '\0'; c++)
    {
        printf("%c", tolower(*c));
    }
    printf("\n");
}

// Prints the inverse of the characters capitalization.
void print_inverted(char str[200])
{
    for (char *c = str; *c != '\0'; c++)
    {
        printf("%c", isupper(*c) ? tolower(*c) : toupper(*c));
    }
    printf("\n");
}

// Exits the program.
void exit_program(char str[200])
{
    exit(0);
}

int main()
{
    // Get the input from the user.
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    // A pointer array of four function pointers: print_upper, print_lower,
    // print_inverted, and exit_program.
    void (*functions[4])(char str[200]) = {print_upper, print_lower,
                                           print_inverted, exit_program};

    while (1)
    {
        int mode = 0;
        scanf("%d", &mode);

        // Call the function at index [mode - 1], this is to adapt for
        // array indexing starting at 0.
        functions[mode - 1](str);
    }
    return 0;
}