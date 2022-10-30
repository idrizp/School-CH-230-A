/**
 * CH-230-A
 * a8_p5.c
 * Idriz Pelaj
 * ipelaj@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the characters file.
    FILE *chars_file = fopen("chars.txt", "r");
    if (chars_file == NULL)
    {
        printf("Couldn't open characters file.");
        return 1;
    }
    char a = getc(chars_file);
    char b = getc(chars_file);

    unsigned int sum = a + b;
    // Close the characters file, we're done with it.
    fclose(chars_file);

    // Open the codesum file in write mode.
    FILE *sum_file = fopen("codesum.txt", "w");
    if (sum_file == NULL)
    {
        printf("Couldn't create codesum.txt");
        return 1;
    }

    // Write the sum into the file.
    fprintf(sum_file, "%d", sum);

    // Close the sum file.
    fclose(sum_file);
    return 0;
}