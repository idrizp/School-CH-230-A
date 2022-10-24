/*
    CH-230-A
    a7_p6.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the person struct.
struct person
{
    char name[30];
    int age;
};

// Add a typedef for easier readability.
typedef struct person person;

// Function prototype declarations for compare_names and compare_ages.
int compare_names(person *first, person *second);
int compare_ages(person *first, person *second);

// The actual bubble sort algorithm, implemented as per the algorithm
// instructions given. A compare function is provided in order to compare
// two elements of type person.
void bubble_sort(person arr[], int dim, int (*compare)(person *, person *))
{
    int swapped = 0;
    do
    {
        swapped = 0;
        for (int i = 1; i < dim; i++)
        {
            if (compare(&arr[i - 1], &arr[i]) > 0)
            {
                person temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

// Print the person array
void print_person_array(person arr[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        person person = arr[i];
        printf("{%s, %d}; ", person.name, person.age);
    }
    printf("\n");
}

// Comparison function for names, alphabetically
int compare_names(person *first, person *second)
{
    // Call strcmp, if the result is 0, so both are equal, use
    // compare_ages.
    int result = strcmp(first->name, second->name);
    if (result == 0)
    {
        return compare_ages(first, second);
    }
    return result;
}

// Function to compare the ages in ascending order.
int compare_ages(person *first, person *second)
{
    // If the ages are equal to each other, use compare_names instead.
    if (first->age == second->age)
    {
        return compare_names(first, second);
    }
    return first->age - second->age;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    person arr[n];

    for (int i = 0; i < n; i++)
    {
        // Scan the input.
        char name[30];
        fgets(name, 30, stdin);
        name[strcspn(name, "\n")] = 0;

        int age;
        scanf("%d", &age);
        getchar();

        // Declare the created person and assign the name and age.
        person created;

        strcpy(created.name, name);
        created.age = age;

        arr[i] = created;
    }

    // Call bubble sort using compare_names and compare_ages passed as
    // functions, then print the resulting arrays out.
    bubble_sort(arr, n, compare_names);
    print_person_array(arr, n);

    bubble_sort(arr, n, compare_ages);
    print_person_array(arr, n);
    return 0;
}