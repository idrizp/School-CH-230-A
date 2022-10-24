/*
    CH-230-A
    a7_p5.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int asc_cmp(const void *a, const void *b)
{
    // Cast the pointers into integer pointers, then dereference into
    // integers.
    int a_int = *(int *)a;
    int b_int = *(int *)b;

    return a_int - b_int;
}

int desc_cmp(const void *a, const void *b)
{
    // Cast the pointers into integer pointers, then dereference into
    // integers.
    int a_int = *(int *)a;
    int b_int = *(int *)b;

    return b_int - a_int;
}

// Prints the array of integers.
void print_array(int arr[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // Scan the elements into the array
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (1)
    {
        char mode;
        scanf(" %c", &mode);
        switch (mode)
        {
        case 'e':
            // Exit the program.
            return 0;
        case 'a':
            // Ascending order.
            qsort(arr, n, sizeof(int), asc_cmp);
            break;
        case 'd':
            // Descending order.
            qsort(arr, n, sizeof(int), desc_cmp);
            break;
        default:
            printf("Unknown input provided.\n");
            break;
        }
        print_array(arr, n);
    }
    return 0;
}