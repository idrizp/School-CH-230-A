/*
    CH-230-A
    a4_p6.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void print_two_highest_values(int arr[], int dim)
{
    // We keep track of two values, the previous maximum and the current.
    // We loop through and populate them accordingly with the comparison.
    int max = arr[0];

    // This is the minimum possible value of an integer.
    int prev = -2147483648;
    for (int i = 1; i < dim; i++)
    {
        if (arr[i] > max)
        {
            // We set the previous value to the old maximum and update
            // the new maximum.
            prev = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > prev)
        {
            // If the current is greater than the previous value but less than the maximum
            // we update the previous value
            prev = arr[i];
        }
    }
    printf("Highest value: %d\n", max);
    printf("Second highest value: %d\n", prev);
}

int main()
{
    // Get the number of elements we want
    unsigned int n;
    scanf("%d", &n);

    // Allocate the array
    int *arr = (int *)malloc(sizeof(int) * n);
    if (arr == NULL)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }

    // Populate the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the function
    print_two_highest_values(arr, n);

    // Free the memory used by the array
    free(arr);
    return 0;
}