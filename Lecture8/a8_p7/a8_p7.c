/**
 * CH-230-A
 * a8_p7.c
 * Idriz Pelaj
 * ipelaj@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the files.
    FILE *file_one = fopen("text1.txt", "r");
    FILE *file_two = fopen("text2.txt", "r");
    FILE *result = fopen("merge12.txt", "w");

    // Check if they were opened successfully.
    if (file_one == NULL || file_two == NULL || result == NULL)
    {
        printf("Couldn't open text files.\n");
        return 1;
    }

    // Copy the characters from the first file, print a newline, and do the
    // same for the second file.
    char c;
    while ((c = fgetc(file_one)) != EOF)
    {
        fprintf(result, "%c", c);
    }
    fprintf(result, "\n");
    while ((c = fgetc(file_two)) != EOF)
    {
        fprintf(result, "%c", c);
    }

    // Close all the files.
    fclose(file_one);
    fclose(file_two);
    fclose(result);

    return 0;
}