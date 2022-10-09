/*
    CH-230-A
    a5_p8.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Prompts the user to create a specific matrix.
int **promptCreateMatrix(int rows, int columns)
{
    // Defines a 2d matrix.
    int **matrix = (int **)malloc(sizeof(int *) * rows);
    if (matrix == NULL)
    {
        printf("Couldn't allocate memory for matrix.");
        exit(1);
    }

    // Populate the matrix
    for (int i = 0; i < rows; i++)
    {
        // Allocates memory for the nested array.
        matrix[i] = (int *)malloc(sizeof(int) * columns);
        if (matrix[i] == NULL)
        {
            printf("Couldn't allocate for %d-th row in matrix.", i);
            exit(1);
        }
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}

void free_matrix(int **matrix, int rows)
{
    // Free the nested arrays as well as the main array
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

void print_matrix(int **matrix, int rows, int columns)
{
    // Prints out the matrix by looping through the rows
    // and the columns
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    int m;
    int p;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    // n x m matrix
    int **matrix_one = promptCreateMatrix(n, m);

    // m x p matrix
    int **matrix_two = promptCreateMatrix(m, p);

    // Print the matrices
    printf("Matrix A:\n");
    print_matrix(matrix_one, n, m);

    printf("Matrix B:\n");
    print_matrix(matrix_two, m, p);

    // n x p matrix will be the result
    int **result = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        // Allocate the nested array
        result[i] = malloc(sizeof(int) * m);
        for (int k = 0; k < p; k++)
        {
            // Apply the formula
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += matrix_one[i][j] * matrix_two[j][k];
            }
            result[i][k] = sum;
        }
    }

    // Print the resulting matrix
    printf("The multiplication result AxB:\n");
    print_matrix(result, n, p);

    // Free the matrices
    free_matrix(result, n);
    free_matrix(matrix_one, n);
    free_matrix(matrix_two, m);
    return 0;
}