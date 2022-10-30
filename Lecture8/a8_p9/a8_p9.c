/**
 * CH-230-A
 * a8_p9.c
 * Idriz Pelaj
 * ipelaj@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to concatenate a file into the output.
void concat_file(char *input_file_name, FILE *output)
{
    // Open the file, make checks.
    FILE *file = fopen(input_file_name, "r");
    if (file == NULL)
    {
        printf("The file is null.\n");
        exit(1);
    }

    // Get the buffer ready. Read into file.
    char buff[64];
    int n_items = fread(buff, 1, 64, file);

    fwrite(buff, sizeof(char), n_items, output);
    fwrite(buff, sizeof(char), n_items, stdout);

    // Write the nextline into the standard output and the output file.
    fwrite("\n", sizeof(char), 1, stdout);
    fwrite("\n", sizeof(char), 1, output);

    // Cleanup
    fclose(file);
}

int main()
{
    // Open the output file.
    FILE *output = fopen("output.txt", "w");
    if (output == NULL)
    {
        printf("The output file could not be opened.\n");
        exit(1);
    }

    // Get the number of files.
    int n;
    scanf("%d", &n);
    getchar();

    printf("Concatenating the content of %d files ...\n", n);
    for (int i = 0; i < n; i++)
    {
        // Scan and concatenate.
        char name[256];
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;

        concat_file(name, output);
    }
    printf("The result was written into output.txt\n");
    // Cleanup.
    fclose(output);
    return 0;
}