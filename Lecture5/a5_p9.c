/*
    CH-230-A
    a5_p9.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int ***allocate_array(int rows, int columns, int depth)
{
    // Nested allocation. Allocate the main array first.
    int ***array = malloc(sizeof(int **) * rows);
    if (array == NULL)
    {
        printf("Couldn't allocate 3D array.");
        exit(1);
    }
    for (int i = 0; i < rows; i++)
    {
        // Then allocate the rows.
        int **row_array = malloc(sizeof(int *) * columns);
        if (row_array == NULL)
        {
            printf("Couldn't allocate row array at index %d", i);
            exit(1);
        }
        array[i] = row_array;
        for (int j = 0; j < columns; j++)
        {
            // Now allocate the columns.
            int *column_array = malloc(sizeof(int) * depth);
            if (column_array == NULL)
            {
                printf("Couldn't allocate column array at index %d", i);
                exit(1);
            }
            array[i][j] = column_array;
        }
    }
    return array;
}
void free_array(int ***arr, int rows, int columns, int depth)
{
    // Free the outer array
    for (int i = 0; i < rows; i++)
    {
        // Free the row array
        for (int j = 0; j < columns; j++)
        {
            // Free the column array
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    // Free the outer array
    free(arr);
}

void read_input(int ***arr, int rows, int columns, int depth)
{
    // Read the input and populate the 3D array.
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            for (int k = 0; k < depth; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
}

void print_section(int ***array, int rows, int columns, int depth, int offset)
{
    // Print each section by looping through the rows and columns
    // and then getting the element at the specific offset
    printf("Section %d:\n", offset + 1);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j][offset]);
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    int columns;
    int depth;

    scanf("%d", &rows);
    scanf("%d", &columns);
    scanf("%d", &depth);

    // Allocate the array and read the input
    int ***arr = allocate_array(rows, columns, depth);
    read_input(arr, rows, columns, depth);

    // Print the sections
    print_section(arr, rows, columns, depth, 0);
    print_section(arr, rows, columns, depth, 1);
    print_section(arr, rows, columns, depth, 2);

    // Free the array
    free_array(arr, rows, columns, depth);
    return 0;
}