/**
 * CH-230-A
 * a8_p8.c
 * Idriz Pelaj
 * ipelaj@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char separators[] = {' ', ',', '?', '!', '.', '\t', '\r', '\n'};

// Function that checks if a character is a separator.
int is_separator(char c)
{
    for (int i = 0; i < sizeof(separators); i++)
    {
        if (c == separators[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    // Get the file name.
    char file_name[256];
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = 0;

    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("Couldn't open text file.");
        return 1;
    }

    // Variable to store the number of found words.
    int found_words = 0;

    char c;
    while ((c = fgetc(file)) != EOF)
    {
        // If the character is a separator, then we increment found_words.
        if (is_separator(c))
        {
            found_words++;
            // Skip until we find a character that is not a separator.
            while (is_separator(c) && c != EOF)
            {
                c = fgetc(file);
            }
        }
    }
    printf("The file contains %d words.\n", found_words);
    return 0;
}