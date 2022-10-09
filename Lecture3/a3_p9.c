/*
    CH-230-A
    a3_p9.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    double arr[n];

    // We loop n times, or 20 at max if n > 20, and
    // scan the input into the array.
    for (int i = 0; i < n && i < 20; i++)
    {
        scanf("%lf", &arr[i]);
    }

    // We perform the sum and perform the required check.
    double sum = sum25(arr, n);
    if (sum == -111)
    {
        printf("One or both positions are invalid\n");
        return 0;
    }
    printf("sum=%lf\n", sum);
    return 0;
}

double sum25(double v[], int n)
{
    // If we have less than six elements, we can't
    // sum 2 and 5. We return -111. Otherwise,
    // we perform the sum and return it.
    if (n < 6)
    {
        return -111;
    }
    return v[2] + v[5];
}