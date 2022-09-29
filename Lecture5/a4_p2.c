/*
    CH-230-A
    a4_p2.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

// Function that prints out in zig zag pattern
void print_zig_zag(char result[256])
{
    int length = strlen(result);
    for (int i = 0; i < length; i++)
    {
        char c = result[i];
        // If we have an odd element, add a space, otherwise don't
        if (i % 2 != 0)
        {
            printf(" %c\n", c);
        }
        else
        {
            printf("%c\n", c);
        }
    }
}

int main()
{
    char result[256];

    // Get the input from the keyboard
    fgets(result, 256, stdin);
    result[strcspn(result, "\n")] = 0;

    // Print the input out as a zig zag
    print_zig_zag(result);
    return 0;
}