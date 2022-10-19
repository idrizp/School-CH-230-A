/*
    CH-230-A
    a6_p4.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <stdio.h>

// The intermediate directive.
#define INTERMEDIATE(x, y) (x * y)

int main()
{
    // Scan the number of elements we want for each vector.
    int n;

    scanf("%d", &n);

    int x[n];
    int y[n];

    // Scan the values
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }

// Check if intermediate directive is defined.
// If yes, then print the intermediate product values.
#ifdef INTERMEDIATE
    printf("The intermediate product values are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", INTERMEDIATE(x[i], y[i]));
    }
#endif

    int product = 0;
    for (int i = 0; i < n; i++)
    {
        product += (x[i] * y[i]);
    }
    printf("The scalar product is: %d\n", product);
    return 0;
}