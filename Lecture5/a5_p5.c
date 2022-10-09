/*
    CH-230-A
    a5_p5.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

// Returns the scalar product of two vectors.
double scalar_product(double v[], double w[], int components)
{
    double sum = 0;
    for (int i = 0; i < components; i++)
    {
        sum += v[i] * w[i];
    }
    return sum;
}

// Finds the smallest component of the vector.
double find_smallest_component(double vector[], int components)
{
    double lowest = vector[0];
    for (int i = 0; i < components; i++)
    {
        if (vector[i] < lowest)
        {
            lowest = vector[i];
        }
    }
    return lowest;
}

// Finds the index of the smallest component of the vector.
double find_smallest_component_idx(double vector[], int components)
{
    // Loop through and get the smallest component, populating
    // the index in the meanwhile.
    double lowest = vector[0];
    int index = 0;
    for (int i = 0; i < components; i++)
    {
        if (vector[i] < lowest)
        {
            lowest = vector[i];
            index = i;
        }
    }
    return index;
}

// Finds the largest component of the vector.
double find_largest_component(double vector[], int components)
{
    double largest = vector[0];
    // Loop through and get the largest component.
    for (int i = 0; i < components; i++)
    {
        if (vector[i] > largest)
        {
            largest = vector[i];
        }
    }
    return largest;
}

// Finds the index of the largest component of the vector.
double find_largest_component_idx(double vector[], int components)
{
    double largest = vector[0];
    int index = 0;
    // Loop through and get the largest component, populating
    // the index in the meanwhile.
    for (int i = 0; i < components; i++)
    {
        if (vector[i] > largest)
        {
            largest = vector[i];
            index = i;
        }
    }
    return index;
}

// Prints the vector's smallest, the position of the smallest,
// the vector's largest, and the position of the largest component.
void print_vector_info(double vector[], int components)
{
    // We call the functions that return the corresponding data.
    double smallest = find_smallest_component(vector, components);
    int smallest_idx = find_smallest_component_idx(vector, components);
    double largest = find_largest_component(vector, components);
    int largest_idx = find_largest_component_idx(vector, components);

    // Print out the values.
    printf("The smallest = %lf\n", smallest);
    printf("Position of smallest = %d\n", smallest_idx);
    printf("The largest = %lf\n", largest);
    printf("Position of largest = %d\n", largest_idx);
}

int main()
{
    int n;
    scanf("%d", &n);

    // Define the vectors with number of components n
    double v[n];
    double w[n];

    // Populate the vectors from user input
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &w[i]);
    }

    // Print the scalar product and the vector information.
    printf("Scalar product=%lf\n", scalar_product(v, w, n));
    print_vector_info(v, n);
    print_vector_info(w, n);
    return 0;
}