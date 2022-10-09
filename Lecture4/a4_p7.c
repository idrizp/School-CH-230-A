/*
    CH-230-A
    a4_p7.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

void print_matrix(int matrix[30][30], int dim)
{
    // Prints the entire matrix by looping through
    // every row and every column within the row
    for (int row = 0; row < dim; row++)
    {
        for (int col = 0; col < dim; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}

void print_main_diagonal(int matrix[30][30], int dim)
{
    // Print the main diagonal by going
    // through the row and through the columns
    // and comparing if the column is less than the
    // current iterated row.
    for (int row = 0; row < dim; row++)
    {
        for (int col = 0; col < dim; col++)
        {
            if (col < row)
            {
                printf("%d ", matrix[row][col]);
            }
        }
    }
    printf("\n");
}

int main()
{
    int matrix[30][30];

    // We make sure the user has entered a correct n,
    // so we loop until they enter a number < 30.
    int n = 31;
    while (n > 30)
    {
        scanf("%d", &n);
    }

    // We scan the values into the two dimensional array
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    // We call print_matrix and print_main_diagonal
    printf("The entered matrix is:\n");
    print_matrix(matrix, n);

    printf("Under the main diagonal:\n");
    print_main_diagonal(matrix, n);
    return 0;
}