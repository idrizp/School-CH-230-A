/*
    CH-230-A
    a5_p6.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Declare array and get elements from input
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    int elements = 0;

    // Pointer arithmetic loop
    for (float *ptr = arr; (*ptr) > 0; ptr++, elements++)
    {
        // do nothing, we already increment elements in the loop
    }

    printf("Before the first negative value: %d elements\n", elements);
    return 0;
}