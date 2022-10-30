/**
 * CH-230-A
 * a8_p6.c
 * Idriz Pelaj
 * ipelaj@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to handle the reading of a double from a file with a given
// name.
double read_double()
{
    // We get the file's name from user input.
    char file_name[256];
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = 0;

    // We open the file.
    FILE *fileptr = fopen(file_name, "r");
    if (fileptr == NULL)
    {
        printf("Couldn't read double.\n");
        exit(1);
    }

    // The result is scanned into using fscanf.
    double result;
    fscanf(fileptr, "%lf", &result);
    fclose(fileptr);
    return result;
}

int main()
{
    // Get two doubles.
    double first_double = read_double();
    double second_double = read_double();

    char *result_file_name = "results.txt";

    // Compute the results.
    double sum = first_double + second_double;
    double difference = first_double - second_double;
    double product = first_double * second_double;
    double division = first_double / second_double;

    // Open the results file.
    FILE *results_file = fopen(result_file_name, "w");
    if (results_file == NULL)
    {
        printf("Couldn't open results file.\n");
        exit(1);
    }

    // Print the result into the results file.
    fprintf(results_file, "%lf\n%lf\n%lf\n%lf\n", sum, difference, product,
            division);

    fclose(results_file);
    return 0;
}